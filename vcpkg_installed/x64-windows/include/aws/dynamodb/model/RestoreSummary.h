﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Contains details for the restore.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/RestoreSummary">AWS
   * API Reference</a></p>
   */
  class RestoreSummary
  {
  public:
    AWS_DYNAMODB_API RestoreSummary();
    AWS_DYNAMODB_API RestoreSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API RestoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the backup from which the table was
     * restored.</p>
     */
    inline const Aws::String& GetSourceBackupArn() const{ return m_sourceBackupArn; }
    inline bool SourceBackupArnHasBeenSet() const { return m_sourceBackupArnHasBeenSet; }
    inline void SetSourceBackupArn(const Aws::String& value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn = value; }
    inline void SetSourceBackupArn(Aws::String&& value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn = std::move(value); }
    inline void SetSourceBackupArn(const char* value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn.assign(value); }
    inline RestoreSummary& WithSourceBackupArn(const Aws::String& value) { SetSourceBackupArn(value); return *this;}
    inline RestoreSummary& WithSourceBackupArn(Aws::String&& value) { SetSourceBackupArn(std::move(value)); return *this;}
    inline RestoreSummary& WithSourceBackupArn(const char* value) { SetSourceBackupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source table of the backup that is being restored.</p>
     */
    inline const Aws::String& GetSourceTableArn() const{ return m_sourceTableArn; }
    inline bool SourceTableArnHasBeenSet() const { return m_sourceTableArnHasBeenSet; }
    inline void SetSourceTableArn(const Aws::String& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = value; }
    inline void SetSourceTableArn(Aws::String&& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = std::move(value); }
    inline void SetSourceTableArn(const char* value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn.assign(value); }
    inline RestoreSummary& WithSourceTableArn(const Aws::String& value) { SetSourceTableArn(value); return *this;}
    inline RestoreSummary& WithSourceTableArn(Aws::String&& value) { SetSourceTableArn(std::move(value)); return *this;}
    inline RestoreSummary& WithSourceTableArn(const char* value) { SetSourceTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Point in time or source backup time.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreDateTime() const{ return m_restoreDateTime; }
    inline bool RestoreDateTimeHasBeenSet() const { return m_restoreDateTimeHasBeenSet; }
    inline void SetRestoreDateTime(const Aws::Utils::DateTime& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = value; }
    inline void SetRestoreDateTime(Aws::Utils::DateTime&& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = std::move(value); }
    inline RestoreSummary& WithRestoreDateTime(const Aws::Utils::DateTime& value) { SetRestoreDateTime(value); return *this;}
    inline RestoreSummary& WithRestoreDateTime(Aws::Utils::DateTime&& value) { SetRestoreDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if a restore is in progress or not.</p>
     */
    inline bool GetRestoreInProgress() const{ return m_restoreInProgress; }
    inline bool RestoreInProgressHasBeenSet() const { return m_restoreInProgressHasBeenSet; }
    inline void SetRestoreInProgress(bool value) { m_restoreInProgressHasBeenSet = true; m_restoreInProgress = value; }
    inline RestoreSummary& WithRestoreInProgress(bool value) { SetRestoreInProgress(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceBackupArn;
    bool m_sourceBackupArnHasBeenSet = false;

    Aws::String m_sourceTableArn;
    bool m_sourceTableArnHasBeenSet = false;

    Aws::Utils::DateTime m_restoreDateTime;
    bool m_restoreDateTimeHasBeenSet = false;

    bool m_restoreInProgress;
    bool m_restoreInProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
