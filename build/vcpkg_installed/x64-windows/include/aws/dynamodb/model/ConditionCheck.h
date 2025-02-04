﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ReturnValuesOnConditionCheckFailure.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
   * <p>Represents a request to perform a check that an item exists or to check the
   * condition of specific attributes of the item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ConditionCheck">AWS
   * API Reference</a></p>
   */
  class ConditionCheck
  {
  public:
    AWS_DYNAMODB_API ConditionCheck();
    AWS_DYNAMODB_API ConditionCheck(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ConditionCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The primary key of the item to be checked. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline ConditionCheck& WithKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetKey(value); return *this;}
    inline ConditionCheck& WithKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetKey(std::move(value)); return *this;}
    inline ConditionCheck& AddKey(const Aws::String& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }
    inline ConditionCheck& AddKey(Aws::String&& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), value); return *this; }
    inline ConditionCheck& AddKey(const Aws::String& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }
    inline ConditionCheck& AddKey(Aws::String&& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), std::move(value)); return *this; }
    inline ConditionCheck& AddKey(const char* key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }
    inline ConditionCheck& AddKey(const char* key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the table for the check item request. You can also provide the Amazon
     * Resource Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline ConditionCheck& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline ConditionCheck& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline ConditionCheck& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.ConditionExpressions.html">Condition
     * expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetConditionExpression() const{ return m_conditionExpression; }
    inline bool ConditionExpressionHasBeenSet() const { return m_conditionExpressionHasBeenSet; }
    inline void SetConditionExpression(const Aws::String& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = value; }
    inline void SetConditionExpression(Aws::String&& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = std::move(value); }
    inline void SetConditionExpression(const char* value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression.assign(value); }
    inline ConditionCheck& WithConditionExpression(const Aws::String& value) { SetConditionExpression(value); return *this;}
    inline ConditionCheck& WithConditionExpression(Aws::String&& value) { SetConditionExpression(std::move(value)); return *this;}
    inline ConditionCheck& WithConditionExpression(const char* value) { SetConditionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more substitution tokens for attribute names in an expression. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.ExpressionAttributeNames.html">Expression
     * attribute names</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const{ return m_expressionAttributeNames; }
    inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }
    inline void SetExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = value; }
    inline void SetExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = std::move(value); }
    inline ConditionCheck& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}
    inline ConditionCheck& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(std::move(value)); return *this;}
    inline ConditionCheck& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }
    inline ConditionCheck& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }
    inline ConditionCheck& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }
    inline ConditionCheck& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), std::move(value)); return *this; }
    inline ConditionCheck& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }
    inline ConditionCheck& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }
    inline ConditionCheck& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more values that can be substituted in an expression. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.ConditionExpressions.html">Condition
     * expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const{ return m_expressionAttributeValues; }
    inline bool ExpressionAttributeValuesHasBeenSet() const { return m_expressionAttributeValuesHasBeenSet; }
    inline void SetExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = value; }
    inline void SetExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = std::move(value); }
    inline ConditionCheck& WithExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { SetExpressionAttributeValues(value); return *this;}
    inline ConditionCheck& WithExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { SetExpressionAttributeValues(std::move(value)); return *this;}
    inline ConditionCheck& AddExpressionAttributeValues(const Aws::String& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }
    inline ConditionCheck& AddExpressionAttributeValues(Aws::String&& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), value); return *this; }
    inline ConditionCheck& AddExpressionAttributeValues(const Aws::String& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }
    inline ConditionCheck& AddExpressionAttributeValues(Aws::String&& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), std::move(value)); return *this; }
    inline ConditionCheck& AddExpressionAttributeValues(const char* key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }
    inline ConditionCheck& AddExpressionAttributeValues(const char* key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>ConditionCheck</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE and
     * ALL_OLD.</p>
     */
    inline const ReturnValuesOnConditionCheckFailure& GetReturnValuesOnConditionCheckFailure() const{ return m_returnValuesOnConditionCheckFailure; }
    inline bool ReturnValuesOnConditionCheckFailureHasBeenSet() const { return m_returnValuesOnConditionCheckFailureHasBeenSet; }
    inline void SetReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = value; }
    inline void SetReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = std::move(value); }
    inline ConditionCheck& WithReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { SetReturnValuesOnConditionCheckFailure(value); return *this;}
    inline ConditionCheck& WithReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { SetReturnValuesOnConditionCheckFailure(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_conditionExpression;
    bool m_conditionExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
    bool m_expressionAttributeValuesHasBeenSet = false;

    ReturnValuesOnConditionCheckFailure m_returnValuesOnConditionCheckFailure;
    bool m_returnValuesOnConditionCheckFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
