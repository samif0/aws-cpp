﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BackupSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class ListBackupsResult
  {
  public:
    AWS_DYNAMODB_API ListBackupsResult();
    AWS_DYNAMODB_API ListBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of <code>BackupSummary</code> objects.</p>
     */
    inline const Aws::Vector<BackupSummary>& GetBackupSummaries() const{ return m_backupSummaries; }
    inline void SetBackupSummaries(const Aws::Vector<BackupSummary>& value) { m_backupSummaries = value; }
    inline void SetBackupSummaries(Aws::Vector<BackupSummary>&& value) { m_backupSummaries = std::move(value); }
    inline ListBackupsResult& WithBackupSummaries(const Aws::Vector<BackupSummary>& value) { SetBackupSummaries(value); return *this;}
    inline ListBackupsResult& WithBackupSummaries(Aws::Vector<BackupSummary>&& value) { SetBackupSummaries(std::move(value)); return *this;}
    inline ListBackupsResult& AddBackupSummaries(const BackupSummary& value) { m_backupSummaries.push_back(value); return *this; }
    inline ListBackupsResult& AddBackupSummaries(BackupSummary&& value) { m_backupSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ARN of the backup last evaluated when the current page of results was
     * returned, inclusive of the current page of results. This value may be specified
     * as the <code>ExclusiveStartBackupArn</code> of a new <code>ListBackups</code>
     * operation in order to fetch the next page of results. </p> <p> If
     * <code>LastEvaluatedBackupArn</code> is empty, then the last page of results has
     * been processed and there are no more results to be retrieved. </p> <p> If
     * <code>LastEvaluatedBackupArn</code> is not empty, this may or may not indicate
     * that there is more data to be returned. All results are guaranteed to have been
     * returned if and only if no value for <code>LastEvaluatedBackupArn</code> is
     * returned. </p>
     */
    inline const Aws::String& GetLastEvaluatedBackupArn() const{ return m_lastEvaluatedBackupArn; }
    inline void SetLastEvaluatedBackupArn(const Aws::String& value) { m_lastEvaluatedBackupArn = value; }
    inline void SetLastEvaluatedBackupArn(Aws::String&& value) { m_lastEvaluatedBackupArn = std::move(value); }
    inline void SetLastEvaluatedBackupArn(const char* value) { m_lastEvaluatedBackupArn.assign(value); }
    inline ListBackupsResult& WithLastEvaluatedBackupArn(const Aws::String& value) { SetLastEvaluatedBackupArn(value); return *this;}
    inline ListBackupsResult& WithLastEvaluatedBackupArn(Aws::String&& value) { SetLastEvaluatedBackupArn(std::move(value)); return *this;}
    inline ListBackupsResult& WithLastEvaluatedBackupArn(const char* value) { SetLastEvaluatedBackupArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBackupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBackupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBackupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BackupSummary> m_backupSummaries;

    Aws::String m_lastEvaluatedBackupArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
