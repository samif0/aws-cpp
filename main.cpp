#include <aws/core/Aws.h>
#include <aws/s3/S3Client.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>

using namespace Aws;
using namespace Aws::Auth;

int main(int argc, char **argv)
{
	Aws::SDKOptions options;
	Aws::InitAPI(options);

	int result = EXIT_SUCCESS;
	{
		Aws::Client::ClientConfiguration clientConfig;

		auto provider = Aws::MakeShared<DefaultAWSCredentialsProviderChain>("alloc-tag");
		auto creds = provider->GetAWSCredentials();
		if (creds.IsEmpty()) {
			std::cerr << "Failed authentication" << std::endl;
			result = EXIT_FAILURE;
		}

		Aws::S3::S3Client s3Client(clientConfig);
		auto outcome = s3Client.ListBuckets();


		if (!outcome.IsSuccess()) {
			std::cerr << "Failed to list buckets: " << outcome.GetError().GetMessage() << std::endl;
			result = EXIT_FAILURE;
		}
		else {
			std::cout << "Buckets:" << std::endl;
			for (const auto& bucket : outcome.GetResult().GetBuckets()) {
				std::cout << "  " << bucket.GetName() << std::endl;
			}
		}

	}

	Aws::ShutdownAPI(options);
	return result;
}
