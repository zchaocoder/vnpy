// vnctpmd.cpp : 定义 DLL 应用程序的导出函数。
//

#include "vnoestd.h"


///-------------------------------------------------------------------------------------
///C++的回调函数将数据保存到队列中
///-------------------------------------------------------------------------------------
void TdApi::OnBusinessReject(const OesRptMsgHeadT *pRptMsgHead, const OesOrdRejectT *pOrderReject)
{
	Task task = Task();
	task.task_name = ONBUSINESSREJECT;
	if (pRptMsgHead)
	{
		OesRptMsgHeadT *task_error = new OesRptMsgHeadT();
		*task_error = *pRptMsgHead;
		task.task_error = task_error;
	}
	if (pOrderReject)
	{
		OesOrdRejectT *task_data = new OesOrdRejectT();
		*task_data = *pOrderReject;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnOrderInsert(const OesRptMsgHeadT *pRptMsgHead, const OesOrdCnfmT *pOrderInsert)
{
	Task task = Task();
	task.task_name = ONORDERINSERT;
	if (pRptMsgHead)
	{
		OesRptMsgHeadT *task_error = new OesRptMsgHeadT();
		*task_error = *pRptMsgHead;
		task.task_error = task_error;
	}
	if (pOrderInsert)
	{
		OesOrdCnfmT *task_data = new OesOrdCnfmT();
		*task_data = *pOrderInsert;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnOrderReport(const OesRptMsgHeadT *pRptMsgHead, const OesOrdCnfmT *pOrderReport)
{
	Task task = Task();
	task.task_name = ONORDERREPORT;
	if (pRptMsgHead)
	{
		OesRptMsgHeadT *task_error = new OesRptMsgHeadT();
		*task_error = *pRptMsgHead;
		task.task_error = task_error;
	}
	if (pOrderReport)
	{
		OesOrdCnfmT *task_data = new OesOrdCnfmT();
		*task_data = *pOrderReport;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnTradeReport(const OesRptMsgHeadT *pRptMsgHead, const OesTrdCnfmT *pTradeReport)
{
	Task task = Task();
	task.task_name = ONTRADEREPORT;
	if (pRptMsgHead)
	{
		OesRptMsgHeadT *task_error = new OesRptMsgHeadT();
		*task_error = *pRptMsgHead;
		task.task_error = task_error;
	}
	if (pTradeReport)
	{
		OesTrdCnfmT *task_data = new OesTrdCnfmT();
		*task_data = *pTradeReport;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnCashAssetVariation(const OesCashAssetReportT *pCashAssetRpt)
{
	Task task = Task();
	task.task_name = ONCASHASSETVARIATION;
	if (pCashAssetRpt)
	{
		OesCashAssetReportT *task_data = new OesCashAssetReportT();
		*task_data = *pCashAssetRpt;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnStockHoldingVariation(const OesStkHoldingReportT *pStkHoldingRpt)
{
	Task task = Task();
	task.task_name = ONSTOCKHOLDINGVARIATION;
	if (pStkHoldingRpt)
	{
		OesStkHoldingReportT *task_data = new OesStkHoldingReportT();
		*task_data = *pStkHoldingRpt;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnOptionHoldingVariation(const OesOptHoldingReportT *pOptHoldingRpt)
{
	Task task = Task();
	task.task_name = ONOPTIONHOLDINGVARIATION;
	if (pOptHoldingRpt)
	{
		OesOptHoldingReportT *task_data = new OesOptHoldingReportT();
		*task_data = *pOptHoldingRpt;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnOptionUnderlyingHoldingVariation(const OesOptUnderlyingHoldingReportT *pUnderlyingHoldingRpt)
{
	Task task = Task();
	task.task_name = ONOPTIONUNDERLYINGHOLDINGVARIATION;
	if (pUnderlyingHoldingRpt)
	{
		OesOptUnderlyingHoldingReportT *task_data = new OesOptUnderlyingHoldingReportT();
		*task_data = *pUnderlyingHoldingRpt;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnSettlementConfirmedRpt(const OesRptMsgHeadT *pRptMsgHead, const OesOptSettlementConfirmReportT *pCnfmSettlementRpt)
{
	Task task = Task();
	task.task_name = ONSETTLEMENTCONFIRMEDRPT;
	if (pRptMsgHead)
	{
		OesRptMsgHeadT *task_error = new OesRptMsgHeadT();
		*task_error = *pRptMsgHead;
		task.task_error = task_error;
	}
	if (pCnfmSettlementRpt)
	{
		OesOptSettlementConfirmReportT *task_data = new OesOptSettlementConfirmReportT();
		*task_data = *pCnfmSettlementRpt;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnFundTrsfReject(const OesRptMsgHeadT *pRptMsgHead, const OesFundTrsfRejectT *pFundTrsfReject)
{
	Task task = Task();
	task.task_name = ONFUNDTRSFREJECT;
	if (pRptMsgHead)
	{
		OesRptMsgHeadT *task_error = new OesRptMsgHeadT();
		*task_error = *pRptMsgHead;
		task.task_error = task_error;
	}
	if (pFundTrsfReject)
	{
		OesFundTrsfRejectT *task_data = new OesFundTrsfRejectT();
		*task_data = *pFundTrsfReject;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnFundTrsfReport(const OesRptMsgHeadT *pRptMsgHead, const OesFundTrsfReportT *pFundTrsfReport)
{
	Task task = Task();
	task.task_name = ONFUNDTRSFREPORT;
	if (pRptMsgHead)
	{
		OesRptMsgHeadT *task_error = new OesRptMsgHeadT();
		*task_error = *pRptMsgHead;
		task.task_error = task_error;
	}
	if (pFundTrsfReport)
	{
		OesFundTrsfReportT *task_data = new OesFundTrsfReportT();
		*task_data = *pFundTrsfReport;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnMarketState(const OesMarketStateItemT *pMarketStateItem)
{
	Task task = Task();
	task.task_name = ONMARKETSTATE;
	if (pMarketStateItem)
	{
		OesMarketStateItemT *task_data = new OesMarketStateItemT();
		*task_data = *pMarketStateItem;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnNotifyReport(const OesNotifyInfoReportT *pNotifyInfoRpt)
{
	Task task = Task();
	task.task_name = ONNOTIFYREPORT;
	if (pNotifyInfoRpt)
	{
		OesNotifyInfoReportT *task_data = new OesNotifyInfoReportT();
		*task_data = *pNotifyInfoRpt;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnReportSynchronizationRsp(const OesReportSynchronizationRspT *pReportSynchronization)
{
	Task task = Task();
	task.task_name = ONREPORTSYNCHRONIZATIONRSP;
	if (pReportSynchronization)
	{
		OesReportSynchronizationRspT *task_data = new OesReportSynchronizationRspT();
		*task_data = *pReportSynchronization;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnQueryOrder(const OesOrdItemT *pOrder, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYORDER;
	if (pOrder)
	{
		OesOrdItemT *task_data = new OesOrdItemT();
		*task_data = *pOrder;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryTrade(const OesTrdItemT *pTrade, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYTRADE;
	if (pTrade)
	{
		OesTrdItemT *task_data = new OesTrdItemT();
		*task_data = *pTrade;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryCashAsset(const OesCashAssetItemT *pCashAsset, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYCASHASSET;
	if (pCashAsset)
	{
		OesCashAssetItemT *task_data = new OesCashAssetItemT();
		*task_data = *pCashAsset;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryStkHolding(const OesStkHoldingItemT *pStkHolding, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYSTKHOLDING;
	if (pStkHolding)
	{
		OesStkHoldingItemT *task_data = new OesStkHoldingItemT();
		*task_data = *pStkHolding;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryLotWinning(const OesLotWinningItemT *pLotWinning, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYLOTWINNING;
	if (pLotWinning)
	{
		OesLotWinningItemT *task_data = new OesLotWinningItemT();
		*task_data = *pLotWinning;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryCustInfo(const OesCustItemT *pCust, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYCUSTINFO;
	if (pCust)
	{
		OesCustItemT *task_data = new OesCustItemT();
		*task_data = *pCust;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryInvAcct(const OesInvAcctItemT *pInvAcct, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYINVACCT;
	if (pInvAcct)
	{
		OesInvAcctItemT *task_data = new OesInvAcctItemT();
		*task_data = *pInvAcct;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryCommissionRate(const OesCommissionRateItemT *pCommissionRate, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYCOMMISSIONRATE;
	if (pCommissionRate)
	{
		OesCommissionRateItemT *task_data = new OesCommissionRateItemT();
		*task_data = *pCommissionRate;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryFundTransferSerial(const OesFundTransferSerialItemT *pFundTrsf, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYFUNDTRANSFERSERIAL;
	if (pFundTrsf)
	{
		OesFundTransferSerialItemT *task_data = new OesFundTransferSerialItemT();
		*task_data = *pFundTrsf;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryIssue(const OesIssueItemT *pIssue, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYISSUE;
	if (pIssue)
	{
		OesIssueItemT *task_data = new OesIssueItemT();
		*task_data = *pIssue;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryStock(const OesStockItemT *pStock, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYSTOCK;
	if (pStock)
	{
		OesStockItemT *task_data = new OesStockItemT();
		*task_data = *pStock;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryEtf(const OesEtfItemT *pEtf, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYETF;
	if (pEtf)
	{
		OesEtfItemT *task_data = new OesEtfItemT();
		*task_data = *pEtf;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryEtfComponent(const OesEtfComponentItemT *pEtfComponent, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYETFCOMPONENT;
	if (pEtfComponent)
	{
		OesEtfComponentItemT *task_data = new OesEtfComponentItemT();
		*task_data = *pEtfComponent;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryMarketState(const OesMarketStateItemT *pMarketState, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYMARKETSTATE;
	if (pMarketState)
	{
		OesMarketStateItemT *task_data = new OesMarketStateItemT();
		*task_data = *pMarketState;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryOption(const OesOptionItemT *pOption, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYOPTION;
	if (pOption)
	{
		OesOptionItemT *task_data = new OesOptionItemT();
		*task_data = *pOption;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryOptHolding(const OesOptHoldingItemT *pOptHolding, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYOPTHOLDING;
	if (pOptHolding)
	{
		OesOptHoldingItemT *task_data = new OesOptHoldingItemT();
		*task_data = *pOptHolding;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryOptUnderlyingHolding(const OesOptUnderlyingHoldingItemT *pUnderlyingHld, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYOPTUNDERLYINGHOLDING;
	if (pUnderlyingHld)
	{
		OesOptUnderlyingHoldingItemT *task_data = new OesOptUnderlyingHoldingItemT();
		*task_data = *pUnderlyingHld;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryOptPositionLimit(const OesOptPositionLimitItemT *pPositionLimit, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYOPTPOSITIONLIMIT;
	if (pPositionLimit)
	{
		OesOptPositionLimitItemT *task_data = new OesOptPositionLimitItemT();
		*task_data = *pPositionLimit;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryOptPurchaseLimit(const OesOptPurchaseLimitItemT *pPurchaseLimit, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYOPTPURCHASELIMIT;
	if (pPurchaseLimit)
	{
		OesOptPurchaseLimitItemT *task_data = new OesOptPurchaseLimitItemT();
		*task_data = *pPurchaseLimit;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryOptExerciseAssign(const OesOptExerciseAssignItemT *pExerciseAssign, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYOPTEXERCISEASSIGN;
	if (pExerciseAssign)
	{
		OesOptExerciseAssignItemT *task_data = new OesOptExerciseAssignItemT();
		*task_data = *pExerciseAssign;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};

void TdApi::OnQueryNotifyInfo(const OesNotifyInfoItemT *pNotifyInfo, const OesQryCursorT *pCursor, int32 requestId)
{
	Task task = Task();
	task.task_name = ONQUERYNOTIFYINFO;
	if (pNotifyInfo)
	{
		OesNotifyInfoItemT *task_data = new OesNotifyInfoItemT();
		*task_data = *pNotifyInfo;
		task.task_data = task_data;
	}
	if (pCursor)
	{
		OesQryCursorT *task_error = new OesQryCursorT();
		*task_error = *pCursor;
		task.task_error = task_error;
	}
	task.task_id = requestId;
	this->task_queue.push(task);
};



///-------------------------------------------------------------------------------------
///工作线程从队列中取出数据，转化为python对象后，进行推送
///-------------------------------------------------------------------------------------

void TdApi::processTask()
{
    try
    {
        while (this->active)
        {
            Task task = this->task_queue.pop();

            switch (task.task_name)
            {
			case ONBUSINESSREJECT:
			{
				this->processBusinessReject(&task);
				break;
			}

			case ONORDERINSERT:
			{
				this->processOrderInsert(&task);
				break;
			}

			case ONORDERREPORT:
			{
				this->processOrderReport(&task);
				break;
			}

			case ONTRADEREPORT:
			{
				this->processTradeReport(&task);
				break;
			}

			case ONCASHASSETVARIATION:
			{
				this->processCashAssetVariation(&task);
				break;
			}

			case ONSTOCKHOLDINGVARIATION:
			{
				this->processStockHoldingVariation(&task);
				break;
			}

			case ONOPTIONHOLDINGVARIATION:
			{
				this->processOptionHoldingVariation(&task);
				break;
			}

			case ONOPTIONUNDERLYINGHOLDINGVARIATION:
			{
				this->processOptionUnderlyingHoldingVariation(&task);
				break;
			}

			case ONSETTLEMENTCONFIRMEDRPT:
			{
				this->processSettlementConfirmedRpt(&task);
				break;
			}

			case ONFUNDTRSFREJECT:
			{
				this->processFundTrsfReject(&task);
				break;
			}

			case ONFUNDTRSFREPORT:
			{
				this->processFundTrsfReport(&task);
				break;
			}

			case ONMARKETSTATE:
			{
				this->processMarketState(&task);
				break;
			}

			case ONNOTIFYREPORT:
			{
				this->processNotifyReport(&task);
				break;
			}

			case ONREPORTSYNCHRONIZATIONRSP:
			{
				this->processReportSynchronizationRsp(&task);
				break;
			}

			case ONQUERYORDER:
			{
				this->processQueryOrder(&task);
				break;
			}

			case ONQUERYTRADE:
			{
				this->processQueryTrade(&task);
				break;
			}

			case ONQUERYCASHASSET:
			{
				this->processQueryCashAsset(&task);
				break;
			}

			case ONQUERYSTKHOLDING:
			{
				this->processQueryStkHolding(&task);
				break;
			}

			case ONQUERYLOTWINNING:
			{
				this->processQueryLotWinning(&task);
				break;
			}

			case ONQUERYCUSTINFO:
			{
				this->processQueryCustInfo(&task);
				break;
			}

			case ONQUERYINVACCT:
			{
				this->processQueryInvAcct(&task);
				break;
			}

			case ONQUERYCOMMISSIONRATE:
			{
				this->processQueryCommissionRate(&task);
				break;
			}

			case ONQUERYFUNDTRANSFERSERIAL:
			{
				this->processQueryFundTransferSerial(&task);
				break;
			}

			case ONQUERYISSUE:
			{
				this->processQueryIssue(&task);
				break;
			}

			case ONQUERYSTOCK:
			{
				this->processQueryStock(&task);
				break;
			}

			case ONQUERYETF:
			{
				this->processQueryEtf(&task);
				break;
			}

			case ONQUERYETFCOMPONENT:
			{
				this->processQueryEtfComponent(&task);
				break;
			}

			case ONQUERYMARKETSTATE:
			{
				this->processQueryMarketState(&task);
				break;
			}

			case ONQUERYOPTION:
			{
				this->processQueryOption(&task);
				break;
			}

			case ONQUERYOPTHOLDING:
			{
				this->processQueryOptHolding(&task);
				break;
			}

			case ONQUERYOPTUNDERLYINGHOLDING:
			{
				this->processQueryOptUnderlyingHolding(&task);
				break;
			}

			case ONQUERYOPTPOSITIONLIMIT:
			{
				this->processQueryOptPositionLimit(&task);
				break;
			}

			case ONQUERYOPTPURCHASELIMIT:
			{
				this->processQueryOptPurchaseLimit(&task);
				break;
			}

			case ONQUERYOPTEXERCISEASSIGN:
			{
				this->processQueryOptExerciseAssign(&task);
				break;
			}

			case ONQUERYNOTIFYINFO:
			{
				this->processQueryNotifyInfo(&task);
				break;
			}


            };
        }
    }
    catch (const TerminatedError&)
    {
    }
};



void TdApi::processBusinessReject(Task *task)
{
	gil_scoped_acquire acquire;
	dict error;
	if (task->task_error)
	{
		OesRptMsgHeadT *task_error = (OesRptMsgHeadT*)task->task_error;
		delete task_error;
	}
	dict data;
	if (task->task_data)
	{
		OesOrdRejectT *task_data = (OesOrdRejectT*)task->task_data;
		data["clSeqNo"] = task_data->clSeqNo;
		data["mktId"] = task_data->mktId;
		data["ordType"] = task_data->ordType;
		data["bsType"] = task_data->bsType;
		data["__ORD_BASE_INFO_filler"] = task_data->__ORD_BASE_INFO_filler;
		data["invAcctId"] = toUtf(task_data->invAcctId);
		data["securityId"] = toUtf(task_data->securityId);
		data["ordQty"] = task_data->ordQty;
		data["ordPrice"] = task_data->ordPrice;
		data["origClOrdId"] = task_data->origClOrdId;
		data["__ordReqOrigSendTime"] = task_data->__ordReqOrigSendTime;
		data["origClSeqNo"] = task_data->origClSeqNo;
		data["origClEnvId"] = task_data->origClEnvId;
		data["clEnvId"] = task_data->clEnvId;
		data["clientId"] = task_data->clientId;
		data["ordDate"] = task_data->ordDate;
		data["ordTime"] = task_data->ordTime;
		data["ordRejReason"] = task_data->ordRejReason;
		data["__filler"] = task_data->__filler;
		delete task_data;
	}
	this->onBusinessReject(error, data);
};

void TdApi::processOrderInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict error;
	if (task->task_error)
	{
		OesRptMsgHeadT *task_error = (OesRptMsgHeadT*)task->task_error;
		delete task_error;
	}
	dict data;
	if (task->task_data)
	{
		OesOrdCnfmT *task_data = (OesOrdCnfmT*)task->task_data;
		data["clSeqNo"] = task_data->clSeqNo;
		data["mktId"] = task_data->mktId;
		data["ordType"] = task_data->ordType;
		data["bsType"] = task_data->bsType;
		data["__ORD_BASE_INFO_filler"] = task_data->__ORD_BASE_INFO_filler;
		data["invAcctId"] = toUtf(task_data->invAcctId);
		data["securityId"] = toUtf(task_data->securityId);
		data["ordQty"] = task_data->ordQty;
		data["ordPrice"] = task_data->ordPrice;
		data["origClOrdId"] = task_data->origClOrdId;
		data["__ordReqOrigSendTime"] = task_data->__ordReqOrigSendTime;
		data["clOrdId"] = task_data->clOrdId;
		data["clientId"] = task_data->clientId;
		data["clEnvId"] = task_data->clEnvId;
		data["origClEnvId"] = task_data->origClEnvId;
		data["origClSeqNo"] = task_data->origClSeqNo;
		data["ordDate"] = task_data->ordDate;
		data["ordTime"] = task_data->ordTime;
		data["ordCnfmTime"] = task_data->ordCnfmTime;
		data["ordStatus"] = task_data->ordStatus;
		data["ordCnfmSts"] = task_data->ordCnfmSts;
		data["securityType"] = task_data->securityType;
		data["subSecurityType"] = task_data->subSecurityType;
		data["__platformId"] = task_data->__platformId;
		data["__tgwGrpNo"] = task_data->__tgwGrpNo;
		data["__tgwPartitionNo"] = task_data->__tgwPartitionNo;
		data["productType"] = task_data->productType;
		data["exchOrdId"] = toUtf(task_data->exchOrdId);
		data["__declareFlag"] = task_data->__declareFlag;
		data["__repeatFlag"] = task_data->__repeatFlag;
		data["ownerType"] = task_data->ownerType;
		data["frzAmt"] = task_data->frzAmt;
		data["frzInterest"] = task_data->frzInterest;
		data["frzFee"] = task_data->frzFee;
		data["cumAmt"] = task_data->cumAmt;
		data["cumInterest"] = task_data->cumInterest;
		data["cumFee"] = task_data->cumFee;
		data["cumQty"] = task_data->cumQty;
		data["canceledQty"] = task_data->canceledQty;
		data["ordRejReason"] = task_data->ordRejReason;
		data["exchErrCode"] = task_data->exchErrCode;
		data["pbuId"] = task_data->pbuId;
		data["branchId"] = task_data->branchId;
		data["__rowNum"] = task_data->__rowNum;
		data["__recNum"] = task_data->__recNum;
		data["__ordReqOrigRecvTime"] = task_data->__ordReqOrigRecvTime;
		data["__ordReqCollectedTime"] = task_data->__ordReqCollectedTime;
		data["__ordReqActualDealTime"] = task_data->__ordReqActualDealTime;
		data["__ordReqProcessedTime"] = task_data->__ordReqProcessedTime;
		data["__ordCnfmOrigRecvTime"] = task_data->__ordCnfmOrigRecvTime;
		data["__ordCnfmCollectedTime"] = task_data->__ordCnfmCollectedTime;
		data["__ordCnfmActualDealTime"] = task_data->__ordCnfmActualDealTime;
		data["__ordCnfmProcessedTime"] = task_data->__ordCnfmProcessedTime;
		data["__ordDeclareTime"] = task_data->__ordDeclareTime;
		data["__ordDeclareDoneTime"] = task_data->__ordDeclareDoneTime;
		data["__pushingTime"] = task_data->__pushingTime;
		data["frzMargin"] = task_data->frzMargin;
		data["cumMargin"] = task_data->cumMargin;
		data["__ORD_CNFM_EXT_reserve"] = toUtf(task_data->__ORD_CNFM_EXT_reserve);
		delete task_data;
	}
	this->onOrderInsert(error, data);
};

void TdApi::processOrderReport(Task *task)
{
	gil_scoped_acquire acquire;
	dict error;
	if (task->task_error)
	{
		OesRptMsgHeadT *task_error = (OesRptMsgHeadT*)task->task_error;
		delete task_error;
	}
	dict data;
	if (task->task_data)
	{
		OesOrdCnfmT *task_data = (OesOrdCnfmT*)task->task_data;
		data["clSeqNo"] = task_data->clSeqNo;
		data["mktId"] = task_data->mktId;
		data["ordType"] = task_data->ordType;
		data["bsType"] = task_data->bsType;
		data["__ORD_BASE_INFO_filler"] = task_data->__ORD_BASE_INFO_filler;
		data["invAcctId"] = toUtf(task_data->invAcctId);
		data["securityId"] = toUtf(task_data->securityId);
		data["ordQty"] = task_data->ordQty;
		data["ordPrice"] = task_data->ordPrice;
		data["origClOrdId"] = task_data->origClOrdId;
		data["__ordReqOrigSendTime"] = task_data->__ordReqOrigSendTime;
		data["clOrdId"] = task_data->clOrdId;
		data["clientId"] = task_data->clientId;
		data["clEnvId"] = task_data->clEnvId;
		data["origClEnvId"] = task_data->origClEnvId;
		data["origClSeqNo"] = task_data->origClSeqNo;
		data["ordDate"] = task_data->ordDate;
		data["ordTime"] = task_data->ordTime;
		data["ordCnfmTime"] = task_data->ordCnfmTime;
		data["ordStatus"] = task_data->ordStatus;
		data["ordCnfmSts"] = task_data->ordCnfmSts;
		data["securityType"] = task_data->securityType;
		data["subSecurityType"] = task_data->subSecurityType;
		data["__platformId"] = task_data->__platformId;
		data["__tgwGrpNo"] = task_data->__tgwGrpNo;
		data["__tgwPartitionNo"] = task_data->__tgwPartitionNo;
		data["productType"] = task_data->productType;
		data["exchOrdId"] = toUtf(task_data->exchOrdId);
		data["__declareFlag"] = task_data->__declareFlag;
		data["__repeatFlag"] = task_data->__repeatFlag;
		data["ownerType"] = task_data->ownerType;
		data["frzAmt"] = task_data->frzAmt;
		data["frzInterest"] = task_data->frzInterest;
		data["frzFee"] = task_data->frzFee;
		data["cumAmt"] = task_data->cumAmt;
		data["cumInterest"] = task_data->cumInterest;
		data["cumFee"] = task_data->cumFee;
		data["cumQty"] = task_data->cumQty;
		data["canceledQty"] = task_data->canceledQty;
		data["ordRejReason"] = task_data->ordRejReason;
		data["exchErrCode"] = task_data->exchErrCode;
		data["pbuId"] = task_data->pbuId;
		data["branchId"] = task_data->branchId;
		data["__rowNum"] = task_data->__rowNum;
		data["__recNum"] = task_data->__recNum;
		data["__ordReqOrigRecvTime"] = task_data->__ordReqOrigRecvTime;
		data["__ordReqCollectedTime"] = task_data->__ordReqCollectedTime;
		data["__ordReqActualDealTime"] = task_data->__ordReqActualDealTime;
		data["__ordReqProcessedTime"] = task_data->__ordReqProcessedTime;
		data["__ordCnfmOrigRecvTime"] = task_data->__ordCnfmOrigRecvTime;
		data["__ordCnfmCollectedTime"] = task_data->__ordCnfmCollectedTime;
		data["__ordCnfmActualDealTime"] = task_data->__ordCnfmActualDealTime;
		data["__ordCnfmProcessedTime"] = task_data->__ordCnfmProcessedTime;
		data["__ordDeclareTime"] = task_data->__ordDeclareTime;
		data["__ordDeclareDoneTime"] = task_data->__ordDeclareDoneTime;
		data["__pushingTime"] = task_data->__pushingTime;
		data["frzMargin"] = task_data->frzMargin;
		data["cumMargin"] = task_data->cumMargin;
		data["__ORD_CNFM_EXT_reserve"] = toUtf(task_data->__ORD_CNFM_EXT_reserve);
		delete task_data;
	}
	this->onOrderReport(error, data);
};

void TdApi::processTradeReport(Task *task)
{
	gil_scoped_acquire acquire;
	dict error;
	if (task->task_error)
	{
		OesRptMsgHeadT *task_error = (OesRptMsgHeadT*)task->task_error;
		delete task_error;
	}
	dict data;
	if (task->task_data)
	{
		OesTrdCnfmT *task_data = (OesTrdCnfmT*)task->task_data;
		data["exchTrdNum"] = task_data->exchTrdNum;
		data["mktId"] = task_data->mktId;
		data["trdSide"] = task_data->trdSide;
		data["__platformId"] = task_data->__platformId;
		data["__trdCnfmType"] = task_data->__trdCnfmType;
		data["__etfTrdCnfmSeq"] = task_data->__etfTrdCnfmSeq;
		data["invAcctId"] = toUtf(task_data->invAcctId);
		data["securityId"] = toUtf(task_data->securityId);
		data["trdDate"] = task_data->trdDate;
		data["trdTime"] = task_data->trdTime;
		data["trdQty"] = task_data->trdQty;
		data["trdPrice"] = task_data->trdPrice;
		data["trdAmt"] = task_data->trdAmt;
		data["clOrdId"] = task_data->clOrdId;
		data["cumQty"] = task_data->cumQty;
		data["__rowNum"] = task_data->__rowNum;
		data["__tgwGrpNo"] = task_data->__tgwGrpNo;
		data["__isTrsfInCashAvailable"] = task_data->__isTrsfInCashAvailable;
		data["__tgwPartitionNo"] = task_data->__tgwPartitionNo;
		data["productType"] = task_data->productType;
		data["origOrdQty"] = task_data->origOrdQty;
		data["pbuId"] = task_data->pbuId;
		data["branchId"] = task_data->branchId;
		data["clSeqNo"] = task_data->clSeqNo;
		data["clientId"] = task_data->clientId;
		data["clEnvId"] = task_data->clEnvId;
		data["subSecurityType"] = task_data->subSecurityType;
		data["ordStatus"] = task_data->ordStatus;
		data["ordType"] = task_data->ordType;
		data["ordBuySellType"] = task_data->ordBuySellType;
		data["securityType"] = task_data->securityType;
		data["origOrdPrice"] = task_data->origOrdPrice;
		data["cumAmt"] = task_data->cumAmt;
		data["cumInterest"] = task_data->cumInterest;
		data["cumFee"] = task_data->cumFee;
		data["__trdCnfmOrigRecvTime"] = task_data->__trdCnfmOrigRecvTime;
		data["__trdCnfmCollectedTime"] = task_data->__trdCnfmCollectedTime;
		data["__trdCnfmActualDealTime"] = task_data->__trdCnfmActualDealTime;
		data["__trdCnfmProcessedTime"] = task_data->__trdCnfmProcessedTime;
		data["__pushingTime"] = task_data->__pushingTime;
		data["trdInterest"] = task_data->trdInterest;
		data["trdFee"] = task_data->trdFee;
		data["trdMargin"] = task_data->trdMargin;
		data["cumMargin"] = task_data->cumMargin;
		data["__TRD_CNFM_EXT_reserve"] = toUtf(task_data->__TRD_CNFM_EXT_reserve);
		delete task_data;
	}
	this->onTradeReport(error, data);
};

void TdApi::processCashAssetVariation(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		OesCashAssetReportT *task_data = (OesCashAssetReportT*)task->task_data;
		data["cashAcctId"] = toUtf(task_data->cashAcctId);
		data["custId"] = toUtf(task_data->custId);
		data["currType"] = task_data->currType;
		data["cashType"] = task_data->cashType;
		data["cashAcctStatus"] = task_data->cashAcctStatus;
		data["isFundTrsfDisabled"] = task_data->isFundTrsfDisabled;
		data["__CASH_ASSET_BASE_filler"] = task_data->__CASH_ASSET_BASE_filler;
		data["beginningBal"] = task_data->beginningBal;
		data["beginningAvailableBal"] = task_data->beginningAvailableBal;
		data["beginningDrawableBal"] = task_data->beginningDrawableBal;
		data["disableBal"] = task_data->disableBal;
		data["reversalAmt"] = task_data->reversalAmt;
		data["manualFrzAmt"] = task_data->manualFrzAmt;
		data["totalDepositAmt"] = task_data->totalDepositAmt;
		data["totalWithdrawAmt"] = task_data->totalWithdrawAmt;
		data["withdrawFrzAmt"] = task_data->withdrawFrzAmt;
		data["totalSellAmt"] = task_data->totalSellAmt;
		data["totalBuyAmt"] = task_data->totalBuyAmt;
		data["buyFrzAmt"] = task_data->buyFrzAmt;
		data["totalFeeAmt"] = task_data->totalFeeAmt;
		data["feeFrzAmt"] = task_data->feeFrzAmt;
		data["marginAmt"] = task_data->marginAmt;
		data["marginFrzAmt"] = task_data->marginFrzAmt;
		data["currentTotalBal"] = task_data->currentTotalBal;
		data["currentAvailableBal"] = task_data->currentAvailableBal;
		data["currentDrawableBal"] = task_data->currentDrawableBal;
		data["{"] = task_data->{;
		data["initialMargin"] = task_data->initialMargin;
		data["totalExerciseFrzAmt"] = task_data->totalExerciseFrzAmt;
		data["pendingSupplMargin"] = task_data->pendingSupplMargin;
		data["sseAvailablePurchaseLimit"] = task_data->sseAvailablePurchaseLimit;
		data["szseAvailablePurchaseLimit"] = task_data->szseAvailablePurchaseLimit;
		data["totalMarketMargin"] = task_data->totalMarketMargin;
		data["totalNetMargin"] = task_data->totalNetMargin;
		data["optionExt"] = task_data->optionExt;
		data["__CASH_ASSET_EXT_reserve"] = toUtf(task_data->__CASH_ASSET_EXT_reserve);
		delete task_data;
	}
	this->onCashAssetVariation(data);
};


	void TdApi::processStockHoldingVariation(Task *task)
	{
		gil_scoped_acquire acquire;
		dict data;
		if (task->task_data)
		{
			OesStkHoldingReportT *task_data = (OesStkHoldingReportT*)task->task_data;
			data["invAcctId"] = toUtf(task_data->invAcctId);
			data["securityId"] = toUtf(task_data->securityId);
			data["mktId"] = task_data->mktId;
			data["securityType"] = task_data->securityType;
			data["subSecurityType"] = task_data->subSecurityType;
			data["productType"] = task_data->productType;
			data["__HOLD_BASE_filler"] = task_data->__HOLD_BASE_filler;
			data["originalHld"] = task_data->originalHld;
			data["originalCostAmt"] = task_data->originalCostAmt;
			data["totalBuyHld"] = task_data->totalBuyHld;
			data["totalSellHld"] = task_data->totalSellHld;
			data["sellFrzHld"] = task_data->sellFrzHld;
			data["manualFrzHld"] = task_data->manualFrzHld;
			data["totalBuyAmt"] = task_data->totalBuyAmt;
			data["totalSellAmt"] = task_data->totalSellAmt;
			data["totalBuyFee"] = task_data->totalBuyFee;
			data["totalSellFee"] = task_data->totalSellFee;
			data["totalTrsfInHld"] = task_data->totalTrsfInHld;
			data["totalTrsfOutHld"] = task_data->totalTrsfOutHld;
			data["trsfOutFrzHld"] = task_data->trsfOutFrzHld;
			data["originalLockHld"] = task_data->originalLockHld;
			data["totalLockHld"] = task_data->totalLockHld;
			data["totalUnlockHld"] = task_data->totalUnlockHld;
			data["originalAvlHld"] = task_data->originalAvlHld;
			data["maxReduceQuota"] = task_data->maxReduceQuota;
			data["sellAvlHld"] = task_data->sellAvlHld;
			data["trsfOutAvlHld"] = task_data->trsfOutAvlHld;
			data["lockAvlHld"] = task_data->lockAvlHld;
			data["__filler"] = task_data->__filler;
			data["sumHld"] = task_data->sumHld;
			data["costPrice"] = task_data->costPrice;
			delete task_data;
		}
		this->onStockHoldingVariation(data);
	};

	void TdApi::processOptionHoldingVariation(Task *task)
	{
		gil_scoped_acquire acquire;
		dict data;
		if (task->task_data)
		{
			OesOptHoldingReportT *task_data = (OesOptHoldingReportT*)task->task_data;
			data["invAcctId"] = toUtf(task_data->invAcctId);
			data["securityId"] = toUtf(task_data->securityId);
			data["mktId"] = task_data->mktId;
			data["positionType"] = task_data->positionType;
			data["productType"] = task_data->productType;
			data["securityType"] = task_data->securityType;
			data["subSecurityType"] = task_data->subSecurityType;
			data["contractType"] = task_data->contractType;
			data["hedgeFlag"] = task_data->hedgeFlag;
			data["__HOLD_BASE_filler"] = task_data->__HOLD_BASE_filler;
			data["originalQty"] = task_data->originalQty;
			data["originalAvlQty"] = task_data->originalAvlQty;
			data["originalCostAmt"] = task_data->originalCostAmt;
			data["originalCarryingAmt"] = task_data->originalCarryingAmt;
			data["totalOpenQty"] = task_data->totalOpenQty;
			data["uncomeQty"] = task_data->uncomeQty;
			data["totalCloseQty"] = task_data->totalCloseQty;
			data["closeFrzQty"] = task_data->closeFrzQty;
			data["manualFrzQty"] = task_data->manualFrzQty;
			data["totalInPremium"] = task_data->totalInPremium;
			data["totalOutPremium"] = task_data->totalOutPremium;
			data["totalOpenFee"] = task_data->totalOpenFee;
			data["totalCloseFee"] = task_data->totalCloseFee;
			data["exerciseFrzQty"] = task_data->exerciseFrzQty;
			data["positionMargin"] = task_data->positionMargin;
			data["__OPT_HOLDING_BASE_reserve"] = toUtf(task_data->__OPT_HOLDING_BASE_reserve);
			data["closeAvlQty"] = task_data->closeAvlQty;
			data["exerciseAvlQty"] = task_data->exerciseAvlQty;
			data["sumQty"] = task_data->sumQty;
			data["costPrice"] = task_data->costPrice;
			data["carryingAvgPrice"] = task_data->carryingAvgPrice;
			data["coveredAvlUnderlyingQty"] = task_data->coveredAvlUnderlyingQty;
			data["availableLongPositionLimit"] = task_data->availableLongPositionLimit;
			data["availableTotalPositionLimit"] = task_data->availableTotalPositionLimit;
			data["availableDailyBuyOpenLimit"] = task_data->availableDailyBuyOpenLimit;
			data["__OPT_HOLDING_EXT_filler2"] = task_data->__OPT_HOLDING_EXT_filler2;
			data["__OPT_HOLDING_EXT_reserve"] = toUtf(task_data->__OPT_HOLDING_EXT_reserve);
			delete task_data;
		}
		this->onOptionHoldingVariation(data);
	};

	void TdApi::processOptionUnderlyingHoldingVariation(Task *task)
	{
		gil_scoped_acquire acquire;
		dict data;
		if (task->task_data)
		{
			OesOptUnderlyingHoldingReportT *task_data = (OesOptUnderlyingHoldingReportT*)task->task_data;
			data["invAcctId"] = toUtf(task_data->invAcctId);
			data["underlyingSecurityId"] = toUtf(task_data->underlyingSecurityId);
			data["mktId"] = task_data->mktId;
			data["underlyingMktId"] = task_data->underlyingMktId;
			data["underlyingSecurityType"] = task_data->underlyingSecurityType;
			data["underlyingSubSecurityType"] = task_data->underlyingSubSecurityType;
			data["__OPT_UNDERLYING_HOLD_BASE_filler"] = task_data->__OPT_UNDERLYING_HOLD_BASE_filler;
			data["originalHld"] = task_data->originalHld;
			data["originalAvlHld"] = task_data->originalAvlHld;
			data["originalCoveredQty"] = task_data->originalCoveredQty;
			data["initialCoveredQty"] = task_data->initialCoveredQty;
			data["coveredQty"] = task_data->coveredQty;
			data["coveredGapQty"] = task_data->coveredGapQty;
			data["coveredAvlQty"] = task_data->coveredAvlQty;
			data["lockAvlQty"] = task_data->lockAvlQty;
			data["sumHld"] = task_data->sumHld;
			data["maxReduceQuota"] = task_data->maxReduceQuota;
			delete task_data;
		}
		this->onOptionUnderlyingHoldingVariation(data);
	};

	void TdApi::processSettlementConfirmedRpt(Task *task)
	{
		gil_scoped_acquire acquire;
		dict error;
		if (task->task_error)
		{
			OesRptMsgHeadT *task_error = (OesRptMsgHeadT*)task->task_error;
			delete task_error;
		}
		dict data;
		if (task->task_data)
		{
			OesOptSettlementConfirmReportT *task_data = (OesOptSettlementConfirmReportT*)task->task_data;
			data["custId"] = toUtf(task_data->custId);
			data["clientId"] = task_data->clientId;
			data["clEnvId"] = task_data->clEnvId;
			data["__filler2"] = task_data->__filler2;
			data["transDate"] = task_data->transDate;
			data["transTime"] = task_data->transTime;
			data["rejReason"] = task_data->rejReason;
			data["__OPT_SETTLEMENT_CONFIRM_BASE_reserve"] = toUtf(task_data->__OPT_SETTLEMENT_CONFIRM_BASE_reserve);
			delete task_data;
		}
		this->onSettlementConfirmedRpt(error, data);
	};

	void TdApi::processFundTrsfReject(Task *task)
	{
		gil_scoped_acquire acquire;
		dict error;
		if (task->task_error)
		{
			OesRptMsgHeadT *task_error = (OesRptMsgHeadT*)task->task_error;
			delete task_error;
		}
		dict data;
		if (task->task_data)
		{
			OesFundTrsfRejectT *task_data = (OesFundTrsfRejectT*)task->task_data;
			data["clSeqNo"] = task_data->clSeqNo;
			data["direct"] = task_data->direct;
			data["isAllotOnly"] = task_data->isAllotOnly;
			data["__FUND_TRSF_BASE_filler"] = task_data->__FUND_TRSF_BASE_filler;
			data["cashAcctId"] = toUtf(task_data->cashAcctId);
			data["trdPasswd"] = toUtf(task_data->trdPasswd);
			data["trsfPasswd"] = toUtf(task_data->trsfPasswd);
			data["occurAmt"] = task_data->occurAmt;
			data["ordDate"] = task_data->ordDate;
			data["ordTime"] = task_data->ordTime;
			data["clientId"] = task_data->clientId;
			data["clEnvId"] = task_data->clEnvId;
			data["__filler"] = task_data->__filler;
			data["rejReason"] = task_data->rejReason;
			data["errorInfo"] = toUtf(task_data->errorInfo);
			delete task_data;
		}
		this->onFundTrsfReject(error, data);
	};

	void TdApi::processFundTrsfReport(Task *task)
	{
		gil_scoped_acquire acquire;
		dict error;
		if (task->task_error)
		{
			OesRptMsgHeadT *task_error = (OesRptMsgHeadT*)task->task_error;
			delete task_error;
		}
		dict data;
		if (task->task_data)
		{
			OesFundTrsfReportT *task_data = (OesFundTrsfReportT*)task->task_data;
			data["clSeqNo"] = task_data->clSeqNo;
			data["clientId"] = task_data->clientId;
			data["clEnvId"] = task_data->clEnvId;
			data["direct"] = task_data->direct;
			data["cashAcctId"] = toUtf(task_data->cashAcctId);
			data["occurAmt"] = task_data->occurAmt;
			delete task_data;
		}
		this->onFundTrsfReport(error, data);
	};

	void TdApi::processMarketState(Task *task)
	{
		gil_scoped_acquire acquire;
		dict data;
		if (task->task_data)
		{
			OesMarketStateItemT *task_data = (OesMarketStateItemT*)task->task_data;
			data["pMarketStateItem"] = toUtf(task_data->pMarketStateItem);
			delete task_data;
		}
		this->onMarketState(data);
	};

	void TdApi::processNotifyReport(Task *task)
	{
		gil_scoped_acquire acquire;
		dict data;
		if (task->task_data)
		{
			OesNotifyInfoReportT *task_data = (OesNotifyInfoReportT*)task->task_data;
			data["notifySeqNo"] = task_data->notifySeqNo;
			data["notifySource"] = task_data->notifySource;
			data["notifyType"] = task_data->notifyType;
			data["notifyLevel"] = task_data->notifyLevel;
			data["notifyScope"] = task_data->notifyScope;
			data["tranTime"] = task_data->tranTime;
			data["__NOTIFY_INFO_filler"] = task_data->__NOTIFY_INFO_filler;
			data["custId"] = toUtf(task_data->custId);
			data["content"] = toUtf(task_data->content);
			delete task_data;
		}
		this->onNotifyReport(data);
	};

	void TdApi::processReportSynchronizationRsp(Task *task)
	{
		gil_scoped_acquire acquire;
		dict data;
		if (task->task_data)
		{
			OesReportSynchronizationRspT *task_data = (OesReportSynchronizationRspT*)task->task_data;
			data["lastRptSeqNum"] = task_data->lastRptSeqNum;
			data["subscribeEnvId"] = task_data->subscribeEnvId;
			data["__filler"] = task_data->__filler;
			data["subscribeRptTypes"] = task_data->subscribeRptTypes;
			delete task_data;
		}
		this->onReportSynchronizationRsp(data);
	};

	void TdApi::processQueryOrder(Task *task)
	{
		gil_scoped_acquire acquire;
		dict data;
		if (task->task_data)
		{
			OesOrdItemT *task_data = (OesOrdItemT*)task->task_data;
			data["pOrder"] = toUtf(task_data->pOrder);
			delete task_data;
		}
		dict error;
		if (task->task_error)
		{
			OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
			error["seqNo"] = task_error->seqNo;
			error["isEnd"] = task_error->isEnd;
			error["__filler"] = task_error->__filler;
			error["userInfo"] = task_error->userInfo;
			delete task_error;
		}
		this->onQueryOrder(data, error, task->task_id);
	};

	void TdApi::processQueryTrade(Task *task)
	{
		gil_scoped_acquire acquire;
		dict data;
		if (task->task_data)
		{
			OesTrdItemT *task_data = (OesTrdItemT*)task->task_data;
			data["pTrade"] = toUtf(task_data->pTrade);
			delete task_data;
		}
		dict error;
		if (task->task_error)
		{
			OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
			error["seqNo"] = task_error->seqNo;
			error["isEnd"] = task_error->isEnd;
			error["__filler"] = task_error->__filler;
			error["userInfo"] = task_error->userInfo;
			delete task_error;
		}
		this->onQueryTrade(data, error, task->task_id);
	};

	void TdApi::processQueryCashAsset(Task *task)
	{
		gil_scoped_acquire acquire;
		dict data;
		if (task->task_data)
		{
			OesCashAssetItemT *task_data = (OesCashAssetItemT*)task->task_data;
			data["cashAcctId"] = toUtf(task_data->cashAcctId);
			data["custId"] = toUtf(task_data->custId);
			data["currType"] = task_data->currType;
			data["cashType"] = task_data->cashType;
			data["cashAcctStatus"] = task_data->cashAcctStatus;
			data["isFundTrsfDisabled"] = task_data->isFundTrsfDisabled;
			data["__CASH_ASSET_BASE_filler"] = task_data->__CASH_ASSET_BASE_filler;
			data["beginningBal"] = task_data->beginningBal;
			data["beginningAvailableBal"] = task_data->beginningAvailableBal;
			data["beginningDrawableBal"] = task_data->beginningDrawableBal;
			data["disableBal"] = task_data->disableBal;
			data["reversalAmt"] = task_data->reversalAmt;
			data["manualFrzAmt"] = task_data->manualFrzAmt;
			data["totalDepositAmt"] = task_data->totalDepositAmt;
			data["totalWithdrawAmt"] = task_data->totalWithdrawAmt;
			data["withdrawFrzAmt"] = task_data->withdrawFrzAmt;
			data["totalSellAmt"] = task_data->totalSellAmt;
			data["totalBuyAmt"] = task_data->totalBuyAmt;
			data["buyFrzAmt"] = task_data->buyFrzAmt;
			data["totalFeeAmt"] = task_data->totalFeeAmt;
			data["feeFrzAmt"] = task_data->feeFrzAmt;
			data["marginAmt"] = task_data->marginAmt;
			data["marginFrzAmt"] = task_data->marginFrzAmt;
			data["currentTotalBal"] = task_data->currentTotalBal;
			data["currentAvailableBal"] = task_data->currentAvailableBal;
			data["currentDrawableBal"] = task_data->currentDrawableBal;
			data["{"] = task_data->{;
			data["initialMargin"] = task_data->initialMargin;
			data["totalExerciseFrzAmt"] = task_data->totalExerciseFrzAmt;
			data["pendingSupplMargin"] = task_data->pendingSupplMargin;
			data["sseAvailablePurchaseLimit"] = task_data->sseAvailablePurchaseLimit;
			data["szseAvailablePurchaseLimit"] = task_data->szseAvailablePurchaseLimit;
			data["totalMarketMargin"] = task_data->totalMarketMargin;
			data["totalNetMargin"] = task_data->totalNetMargin;
			data["optionExt"] = task_data->optionExt;
			data["__CASH_ASSET_EXT_reserve"] = toUtf(task_data->__CASH_ASSET_EXT_reserve);
			delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryCashAsset(data, error, task->task_id);
		};

		void TdApi::processQueryStkHolding(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesStkHoldingItemT *task_data = (OesStkHoldingItemT*)task->task_data;
				data["invAcctId"] = toUtf(task_data->invAcctId);
				data["securityId"] = toUtf(task_data->securityId);
				data["mktId"] = task_data->mktId;
				data["securityType"] = task_data->securityType;
				data["subSecurityType"] = task_data->subSecurityType;
				data["productType"] = task_data->productType;
				data["__HOLD_BASE_filler"] = task_data->__HOLD_BASE_filler;
				data["originalHld"] = task_data->originalHld;
				data["originalCostAmt"] = task_data->originalCostAmt;
				data["totalBuyHld"] = task_data->totalBuyHld;
				data["totalSellHld"] = task_data->totalSellHld;
				data["sellFrzHld"] = task_data->sellFrzHld;
				data["manualFrzHld"] = task_data->manualFrzHld;
				data["totalBuyAmt"] = task_data->totalBuyAmt;
				data["totalSellAmt"] = task_data->totalSellAmt;
				data["totalBuyFee"] = task_data->totalBuyFee;
				data["totalSellFee"] = task_data->totalSellFee;
				data["totalTrsfInHld"] = task_data->totalTrsfInHld;
				data["totalTrsfOutHld"] = task_data->totalTrsfOutHld;
				data["trsfOutFrzHld"] = task_data->trsfOutFrzHld;
				data["originalLockHld"] = task_data->originalLockHld;
				data["totalLockHld"] = task_data->totalLockHld;
				data["totalUnlockHld"] = task_data->totalUnlockHld;
				data["originalAvlHld"] = task_data->originalAvlHld;
				data["maxReduceQuota"] = task_data->maxReduceQuota;
				data["sellAvlHld"] = task_data->sellAvlHld;
				data["trsfOutAvlHld"] = task_data->trsfOutAvlHld;
				data["lockAvlHld"] = task_data->lockAvlHld;
				data["__filler"] = task_data->__filler;
				data["sumHld"] = task_data->sumHld;
				data["costPrice"] = task_data->costPrice;
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryStkHolding(data, error, task->task_id);
		};

		void TdApi::processQueryLotWinning(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesLotWinningItemT *task_data = (OesLotWinningItemT*)task->task_data;
				data["pLotWinning"] = toUtf(task_data->pLotWinning);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryLotWinning(data, error, task->task_id);
		};

		void TdApi::processQueryCustInfo(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesCustItemT *task_data = (OesCustItemT*)task->task_data;
				data["pCust"] = toUtf(task_data->pCust);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryCustInfo(data, error, task->task_id);
		};

		void TdApi::processQueryInvAcct(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesInvAcctItemT *task_data = (OesInvAcctItemT*)task->task_data;
				data["invAcctId"] = toUtf(task_data->invAcctId);
				data["mktId"] = task_data->mktId;
				data["acctType"] = task_data->acctType;
				data["status"] = task_data->status;
				data["ownerType"] = task_data->ownerType;
				data["optInvLevel"] = task_data->optInvLevel;
				data["isTradeDisabled"] = task_data->isTradeDisabled;
				data["__INV_ACCT_BASE_filler"] = task_data->__INV_ACCT_BASE_filler;
				data["limits"] = task_data->limits;
				data["permissions"] = task_data->permissions;
				data["pbuId"] = task_data->pbuId;
				data["stkPositionLimitRatio"] = task_data->stkPositionLimitRatio;
				data["subscriptionQuota"] = task_data->subscriptionQuota;
				data["kcSubscriptionQuota"] = task_data->kcSubscriptionQuota;
				data["__INV_ACCT_BASE_reserve"] = toUtf(task_data->__INV_ACCT_BASE_reserve);
				data["custId"] = toUtf(task_data->custId);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryInvAcct(data, error, task->task_id);
		};

		void TdApi::processQueryCommissionRate(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesCommissionRateItemT *task_data = (OesCommissionRateItemT*)task->task_data;
				data["custId"] = toUtf(task_data->custId);
				data["securityId"] = toUtf(task_data->securityId);
				data["mktId"] = task_data->mktId;
				data["securityType"] = task_data->securityType;
				data["subSecurityType"] = task_data->subSecurityType;
				data["bsType"] = task_data->bsType;
				data["feeType"] = task_data->feeType;
				data["currType"] = task_data->currType;
				data["calcFeeMode"] = task_data->calcFeeMode;
				data["__filler"] = task_data->__filler;
				data["feeRate"] = task_data->feeRate;
				data["minFee"] = task_data->minFee;
				data["maxFee"] = task_data->maxFee;
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryCommissionRate(data, error, task->task_id);
		};

		void TdApi::processQueryFundTransferSerial(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesFundTransferSerialItemT *task_data = (OesFundTransferSerialItemT*)task->task_data;
				data["pFundTrsf"] = toUtf(task_data->pFundTrsf);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryFundTransferSerial(data, error, task->task_id);
		};

		void TdApi::processQueryIssue(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesIssueItemT *task_data = (OesIssueItemT*)task->task_data;
				data["pIssue"] = toUtf(task_data->pIssue);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryIssue(data, error, task->task_id);
		};

		void TdApi::processQueryStock(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesStockItemT *task_data = (OesStockItemT*)task->task_data;
				data["pStock"] = toUtf(task_data->pStock);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryStock(data, error, task->task_id);
		};

		void TdApi::processQueryEtf(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesEtfItemT *task_data = (OesEtfItemT*)task->task_data;
				data["pEtf"] = toUtf(task_data->pEtf);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryEtf(data, error, task->task_id);
		};

		void TdApi::processQueryEtfComponent(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesEtfComponentItemT *task_data = (OesEtfComponentItemT*)task->task_data;
				data["securityId"] = toUtf(task_data->securityId);
				data["mktId"] = task_data->mktId;
				data["subFlag"] = task_data->subFlag;
				data["securityType"] = task_data->securityType;
				data["subSecurityType"] = task_data->subSecurityType;
				data["prevClose"] = task_data->prevClose;
				data["qty"] = task_data->qty;
				data["premiumRate"] = task_data->premiumRate;
				data["creationSubCash"] = task_data->creationSubCash;
				data["redemptionCashSub"] = task_data->redemptionCashSub;
				data["fundId"] = toUtf(task_data->fundId);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryEtfComponent(data, error, task->task_id);
		};

		void TdApi::processQueryMarketState(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesMarketStateItemT *task_data = (OesMarketStateItemT*)task->task_data;
				data["pMarketState"] = toUtf(task_data->pMarketState);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryMarketState(data, error, task->task_id);
		};

		void TdApi::processQueryOption(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesOptionItemT *task_data = (OesOptionItemT*)task->task_data;
				data["pOption"] = toUtf(task_data->pOption);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryOption(data, error, task->task_id);
		};

		void TdApi::processQueryOptHolding(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesOptHoldingItemT *task_data = (OesOptHoldingItemT*)task->task_data;
				data["invAcctId"] = toUtf(task_data->invAcctId);
				data["securityId"] = toUtf(task_data->securityId);
				data["mktId"] = task_data->mktId;
				data["positionType"] = task_data->positionType;
				data["productType"] = task_data->productType;
				data["securityType"] = task_data->securityType;
				data["subSecurityType"] = task_data->subSecurityType;
				data["contractType"] = task_data->contractType;
				data["hedgeFlag"] = task_data->hedgeFlag;
				data["__HOLD_BASE_filler"] = task_data->__HOLD_BASE_filler;
				data["originalQty"] = task_data->originalQty;
				data["originalAvlQty"] = task_data->originalAvlQty;
				data["originalCostAmt"] = task_data->originalCostAmt;
				data["originalCarryingAmt"] = task_data->originalCarryingAmt;
				data["totalOpenQty"] = task_data->totalOpenQty;
				data["uncomeQty"] = task_data->uncomeQty;
				data["totalCloseQty"] = task_data->totalCloseQty;
				data["closeFrzQty"] = task_data->closeFrzQty;
				data["manualFrzQty"] = task_data->manualFrzQty;
				data["totalInPremium"] = task_data->totalInPremium;
				data["totalOutPremium"] = task_data->totalOutPremium;
				data["totalOpenFee"] = task_data->totalOpenFee;
				data["totalCloseFee"] = task_data->totalCloseFee;
				data["exerciseFrzQty"] = task_data->exerciseFrzQty;
				data["positionMargin"] = task_data->positionMargin;
				data["__OPT_HOLDING_BASE_reserve"] = toUtf(task_data->__OPT_HOLDING_BASE_reserve);
				data["closeAvlQty"] = task_data->closeAvlQty;
				data["exerciseAvlQty"] = task_data->exerciseAvlQty;
				data["sumQty"] = task_data->sumQty;
				data["costPrice"] = task_data->costPrice;
				data["carryingAvgPrice"] = task_data->carryingAvgPrice;
				data["coveredAvlUnderlyingQty"] = task_data->coveredAvlUnderlyingQty;
				data["availableLongPositionLimit"] = task_data->availableLongPositionLimit;
				data["availableTotalPositionLimit"] = task_data->availableTotalPositionLimit;
				data["availableDailyBuyOpenLimit"] = task_data->availableDailyBuyOpenLimit;
				data["__OPT_HOLDING_EXT_filler2"] = task_data->__OPT_HOLDING_EXT_filler2;
				data["__OPT_HOLDING_EXT_reserve"] = toUtf(task_data->__OPT_HOLDING_EXT_reserve);
				data["contractId"] = toUtf(task_data->contractId);
				data["contractSymbol"] = toUtf(task_data->contractSymbol);
				data["prevSettlPrice"] = task_data->prevSettlPrice;
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryOptHolding(data, error, task->task_id);
		};

		void TdApi::processQueryOptUnderlyingHolding(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesOptUnderlyingHoldingItemT *task_data = (OesOptUnderlyingHoldingItemT*)task->task_data;
				data["pUnderlyingHld"] = toUtf(task_data->pUnderlyingHld);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryOptUnderlyingHolding(data, error, task->task_id);
		};

		void TdApi::processQueryOptPositionLimit(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesOptPositionLimitItemT *task_data = (OesOptPositionLimitItemT*)task->task_data;
				data["invAcctId"] = toUtf(task_data->invAcctId);
				data["underlyingSecurityId"] = toUtf(task_data->underlyingSecurityId);
				data["mktId"] = task_data->mktId;
				data["underlyingMktId"] = task_data->underlyingMktId;
				data["underlyingSecurityType"] = task_data->underlyingSecurityType;
				data["underlyingSubSecurityType"] = task_data->underlyingSubSecurityType;
				data["__filler1"] = task_data->__filler1;
				data["longPositionLimit"] = task_data->longPositionLimit;
				data["totalPositionLimit"] = task_data->totalPositionLimit;
				data["dailyBuyOpenLimit"] = task_data->dailyBuyOpenLimit;
				data["__filler2"] = task_data->__filler2;
				data["originalLongQty"] = task_data->originalLongQty;
				data["originalShortQty"] = task_data->originalShortQty;
				data["originalCoveredQty"] = task_data->originalCoveredQty;
				data["availableLongPositionLimit"] = task_data->availableLongPositionLimit;
				data["availableTotalPositionLimit"] = task_data->availableTotalPositionLimit;
				data["availableDailyBuyOpenLimit"] = task_data->availableDailyBuyOpenLimit;
				data["__reserve"] = toUtf(task_data->__reserve);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryOptPositionLimit(data, error, task->task_id);
		};

		void TdApi::processQueryOptPurchaseLimit(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesOptPurchaseLimitItemT *task_data = (OesOptPurchaseLimitItemT*)task->task_data;
				data["custId"] = toUtf(task_data->custId);
				data["cashAcctId"] = toUtf(task_data->cashAcctId);
				data["invAcctId"] = toUtf(task_data->invAcctId);
				data["mktId"] = task_data->mktId;
				data["custType"] = task_data->custType;
				data["__filler"] = task_data->__filler;
				data["purchaseLimit"] = task_data->purchaseLimit;
				data["originalUsedPurchaseAmt"] = task_data->originalUsedPurchaseAmt;
				data["totalOpenPurchaseAmt"] = task_data->totalOpenPurchaseAmt;
				data["frzPurchaseAmt"] = task_data->frzPurchaseAmt;
				data["totalClosePurchaseAmt"] = task_data->totalClosePurchaseAmt;
				data["availablePurchaseLimit"] = task_data->availablePurchaseLimit;
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryOptPurchaseLimit(data, error, task->task_id);
		};

		void TdApi::processQueryOptExerciseAssign(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesOptExerciseAssignItemT *task_data = (OesOptExerciseAssignItemT*)task->task_data;
				data["pExerciseAssign"] = toUtf(task_data->pExerciseAssign);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryOptExerciseAssign(data, error, task->task_id);
		};

		void TdApi::processQueryNotifyInfo(Task *task)
		{
			gil_scoped_acquire acquire;
			dict data;
			if (task->task_data)
			{
				OesNotifyInfoItemT *task_data = (OesNotifyInfoItemT*)task->task_data;
				data["pNotifyInfo"] = toUtf(task_data->pNotifyInfo);
				delete task_data;
			}
			dict error;
			if (task->task_error)
			{
				OesQryCursorT *task_error = (OesQryCursorT*)task->task_error;
				error["seqNo"] = task_error->seqNo;
				error["isEnd"] = task_error->isEnd;
				error["__filler"] = task_error->__filler;
				error["userInfo"] = task_error->userInfo;
				delete task_error;
			}
			this->onQueryNotifyInfo(data, error, task->task_id);
		};



///-------------------------------------------------------------------------------------
///主动函数
///-------------------------------------------------------------------------------------

void TdApi::createFtdcTraderApi(string pszFlowPath)
{
    this->api = CThostFtdcTraderApi::CreateFtdcTraderApi(pszFlowPath.c_str());
    this->api->RegisterSpi(this);
};

void TdApi::release()
{
    this->api->Release();
};

void TdApi::init()
{
    this->active = true;
    this->task_thread = thread(&TdApi::processTask, this);

    this->api->Init();
};

int TdApi::join()
{
    int i = this->api->Join();
    return i;
};

int TdApi::exit()
{
    this->active = false;
    this->task_queue.terminate();
    this->task_thread.join();

    this->api->RegisterSpi(NULL);
    this->api->Release();
    this->api = NULL;
    return 1;
};

string TdApi::getTradingDay()
{
    string day = this->api->GetTradingDay();
    return day;
};

void TdApi::registerFront(string pszFrontAddress)
{
    this->api->RegisterFront((char*)pszFrontAddress.c_str());
};

void TdApi::subscribePrivateTopic(int nType)
{
    this->api->SubscribePrivateTopic((THOST_TE_RESUME_TYPE) nType);
};

void TdApi::subscribePublicTopic(int nType)
{
    this->api->SubscribePublicTopic((THOST_TE_RESUME_TYPE)nType);
};

int TdApi::queryOrder(const dict &req, int reqid)
{
	OesQryOrdFilterT myreq = OesQryOrdFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "invAcctId", myreq.invAcctId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "isUnclosedOnly", &myreq.isUnclosedOnly);
	getInt8(req, "clEnvId", &myreq.clEnvId);
	getUint8(req, "securityType", &myreq.securityType);
	getUint8(req, "bsType", &myreq.bsType);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "clOrdId", &myreq.clOrdId);
	getInt64(req, "clSeqNo", &myreq.clSeqNo);
	getInt32(req, "startTime", &myreq.startTime);
	getInt32(req, "endTime", &myreq.endTime);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryOrder(&myreq, reqid);
	return i;
};

int TdApi::queryTrade(const dict &req, int reqid)
{
	OesQryTrdFilterT myreq = OesQryTrdFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "invAcctId", myreq.invAcctId);
	getUint8(req, "mktId", &myreq.mktId);
	getInt8(req, "clEnvId", &myreq.clEnvId);
	getUint8(req, "securityType", &myreq.securityType);
	getUint8(req, "bsType", &myreq.bsType);
	getUint32(req, "__filler", &myreq.__filler);
	getInt64(req, "clOrdId", &myreq.clOrdId);
	getInt64(req, "clSeqNo", &myreq.clSeqNo);
	getInt32(req, "startTime", &myreq.startTime);
	getInt32(req, "endTime", &myreq.endTime);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryTrade(&myreq, reqid);
	return i;
};

int TdApi::queryCashAsset(const dict &req, int reqid)
{
	OesQryCashAssetFilterT myreq = OesQryCashAssetFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "cashAcctId", myreq.cashAcctId);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryCashAsset(&myreq, reqid);
	return i;
};

int TdApi::queryStkHolding(const dict &req, int reqid)
{
	OesQryStkHoldingFilterT myreq = OesQryStkHoldingFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "invAcctId", myreq.invAcctId);
	getString(req, "securityId", myreq.securityId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "securityType", &myreq.securityType);
	getUint8(req, "productType", &myreq.productType);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryStkHolding(&myreq, reqid);
	return i;
};

int TdApi::queryLotWinning(const dict &req, int reqid)
{
	OesQryLotWinningFilterT myreq = OesQryLotWinningFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "invAcctId", myreq.invAcctId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "lotType", &myreq.lotType);
	getUint8(req, "__filler", &myreq.__filler);
	getInt32(req, "startDate", &myreq.startDate);
	getInt32(req, "endDate", &myreq.endDate);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryLotWinning(&myreq, reqid);
	return i;
};

int TdApi::queryCustInfo(const dict &req, int reqid)
{
	OesQryCustFilterT myreq = OesQryCustFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryCustInfo(&myreq, reqid);
	return i;
};

int TdApi::queryInvAcct(const dict &req, int reqid)
{
	OesQryInvAcctFilterT myreq = OesQryInvAcctFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "invAcctId", myreq.invAcctId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryInvAcct(&myreq, reqid);
	return i;
};

int TdApi::queryCommissionRate(const dict &req, int reqid)
{
	OesQryCommissionRateFilterT myreq = OesQryCommissionRateFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "securityType", &myreq.securityType);
	getUint8(req, "bsType", &myreq.bsType);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryCommissionRate(&myreq, reqid);
	return i;
};

int TdApi::queryFundTransferSerial(const dict &req, int reqid)
{
	OesQryFundTransferSerialFilterT myreq = OesQryFundTransferSerialFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "cashAcctId", myreq.cashAcctId);
	getInt32(req, "clSeqNo", &myreq.clSeqNo);
	getInt8(req, "clEnvId", &myreq.clEnvId);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryFundTransferSerial(&myreq, reqid);
	return i;
};

int TdApi::queryIssue(const dict &req, int reqid)
{
	OesQryIssueFilterT myreq = OesQryIssueFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "securityId", myreq.securityId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "productType", &myreq.productType);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryIssue(&myreq, reqid);
	return i;
};

int TdApi::queryStock(const dict &req, int reqid)
{
	OesQryStockFilterT myreq = OesQryStockFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "securityId", myreq.securityId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "securityType", &myreq.securityType);
	getUint8(req, "subSecurityType", &myreq.subSecurityType);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryStock(&myreq, reqid);
	return i;
};

int TdApi::queryEtf(const dict &req, int reqid)
{
	OesQryEtfFilterT myreq = OesQryEtfFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "fundId", myreq.fundId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryEtf(&myreq, reqid);
	return i;
};

int TdApi::queryEtfComponent(const dict &req, int reqid)
{
	OesQryEtfComponentFilterT myreq = OesQryEtfComponentFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "fundId", myreq.fundId);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryEtfComponent(&myreq, reqid);
	return i;
};

int TdApi::queryMarketState(const dict &req, int reqid)
{
	OesQryMarketStateFilterT myreq = OesQryMarketStateFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getUint8(req, "exchId", &myreq.exchId);
	getUint8(req, "platformId", &myreq.platformId);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryMarketState(&myreq, reqid);
	return i;
};

int TdApi::queryCounterCash(const dict &req, int reqid)
{
	char myreq = char();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "char", myreq.char);
	int i = this->api->QueryCounterCash(&myreq, reqid);
	return i;
};

int TdApi::queryOption(const dict &req, int reqid)
{
	OesQryOptionFilterT myreq = OesQryOptionFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "securityId", myreq.securityId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryOption(&myreq, reqid);
	return i;
};

int TdApi::queryOptHolding(const dict &req, int reqid)
{
	OesQryOptHoldingFilterT myreq = OesQryOptHoldingFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "invAcctId", myreq.invAcctId);
	getString(req, "securityId", myreq.securityId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "positionType", &myreq.positionType);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryOptHolding(&myreq, reqid);
	return i;
};

int TdApi::queryOptUnderlyingHolding(const dict &req, int reqid)
{
	OesQryOptUnderlyingHoldingFilterT myreq = OesQryOptUnderlyingHoldingFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "invAcctId", myreq.invAcctId);
	getString(req, "underlyingSecurityId", myreq.underlyingSecurityId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "underlyingSecurityType", &myreq.underlyingSecurityType);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryOptUnderlyingHolding(&myreq, reqid);
	return i;
};

int TdApi::queryOptPositionLimit(const dict &req, int reqid)
{
	OesQryOptPositionLimitFilterT myreq = OesQryOptPositionLimitFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "invAcctId", myreq.invAcctId);
	getString(req, "underlyingSecurityId", myreq.underlyingSecurityId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "underlyingSecurityType", &myreq.underlyingSecurityType);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryOptPositionLimit(&myreq, reqid);
	return i;
};

int TdApi::queryOptPurchaseLimit(const dict &req, int reqid)
{
	OesQryOptPurchaseLimitFilterT myreq = OesQryOptPurchaseLimitFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "invAcctId", myreq.invAcctId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryOptPurchaseLimit(&myreq, reqid);
	return i;
};

int TdApi::queryOptExerciseAssign(const dict &req, int reqid)
{
	OesQryOptExerciseAssignFilterT myreq = OesQryOptExerciseAssignFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getString(req, "invAcctId", myreq.invAcctId);
	getString(req, "securityId", myreq.securityId);
	getUint8(req, "mktId", &myreq.mktId);
	getUint8(req, "positionType", &myreq.positionType);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryOptExerciseAssign(&myreq, reqid);
	return i;
};

int TdApi::queryOptSettlementStatement(const dict &req, int reqid)
{
	char myreq = char();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "char", myreq.char);
	int i = this->api->QueryOptSettlementStatement(&myreq, reqid);
	return i;
};

int TdApi::queryNotifyInfo(const dict &req, int reqid)
{
	OesQryNotifyInfoFilterT myreq = OesQryNotifyInfoFilterT();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "custId", myreq.custId);
	getUint8(req, "notifyLevel", &myreq.notifyLevel);
	getUint8(req, "__filler", &myreq.__filler);
	getInt64(req, "userInfo", &myreq.userInfo);
	int i = this->api->QueryNotifyInfo(&myreq, reqid);
	return i;
};


///-------------------------------------------------------------------------------------
///Boost.Python封装
///-------------------------------------------------------------------------------------

class PyTdApi : public TdApi
{
public:
    using TdApi::TdApi;
    
	void onBusinessReject(const dict &error, const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onBusinessReject, error, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onOrderInsert(const dict &error, const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onOrderInsert, error, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onOrderReport(const dict &error, const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onOrderReport, error, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onTradeReport(const dict &error, const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onTradeReport, error, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onCashAssetVariation(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onCashAssetVariation, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onStockHoldingVariation(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onStockHoldingVariation, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onOptionHoldingVariation(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onOptionHoldingVariation, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onOptionUnderlyingHoldingVariation(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onOptionUnderlyingHoldingVariation, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onSettlementConfirmedRpt(const dict &error, const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onSettlementConfirmedRpt, error, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onFundTrsfReject(const dict &error, const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onFundTrsfReject, error, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onFundTrsfReport(const dict &error, const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onFundTrsfReport, error, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onMarketState(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onMarketState, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onNotifyReport(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onNotifyReport, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onReportSynchronizationRsp(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onReportSynchronizationRsp, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryOrder(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryOrder, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryTrade(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryTrade, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryCashAsset(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryCashAsset, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryStkHolding(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryStkHolding, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryLotWinning(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryLotWinning, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryCustInfo(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryCustInfo, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryInvAcct(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryInvAcct, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryCommissionRate(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryCommissionRate, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryFundTransferSerial(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryFundTransferSerial, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryIssue(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryIssue, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryStock(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryStock, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryEtf(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryEtf, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryEtfComponent(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryEtfComponent, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryMarketState(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryMarketState, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryOption(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryOption, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryOptHolding(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryOptHolding, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryOptUnderlyingHolding(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryOptUnderlyingHolding, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryOptPositionLimit(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryOptPositionLimit, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryOptPurchaseLimit(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryOptPurchaseLimit, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryOptExerciseAssign(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryOptExerciseAssign, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onQueryNotifyInfo(const dict &data, const dict &error, int reqid) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onQueryNotifyInfo, data, error, reqid);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};




};


PYBIND11_MODULE(vnoestd, m)
{
    class_<TdApi, PyTdApi> TdApi(m, "TdApi", module_local());
    TdApi
        .def(init<>())
        .def("createFtdcTraderApi", &TdApi::createFtdcTraderApi)
        .def("release", &TdApi::release)
        .def("init", &TdApi::init)
        .def("join", &TdApi::join)
        .def("exit", &TdApi::exit)
        .def("getTradingDay", &TdApi::getTradingDay)
        .def("registerFront", &TdApi::registerFront)
        .def("subscribePublicTopic", &TdApi::subscribePublicTopic)
        .def("subscribePrivateTopic", &TdApi::subscribePrivateTopic)

		.def("queryOrder", &TdApi::queryOrder)
		.def("queryTrade", &TdApi::queryTrade)
		.def("queryCashAsset", &TdApi::queryCashAsset)
		.def("queryStkHolding", &TdApi::queryStkHolding)
		.def("queryLotWinning", &TdApi::queryLotWinning)
		.def("queryCustInfo", &TdApi::queryCustInfo)
		.def("queryInvAcct", &TdApi::queryInvAcct)
		.def("queryCommissionRate", &TdApi::queryCommissionRate)
		.def("queryFundTransferSerial", &TdApi::queryFundTransferSerial)
		.def("queryIssue", &TdApi::queryIssue)
		.def("queryStock", &TdApi::queryStock)
		.def("queryEtf", &TdApi::queryEtf)
		.def("queryEtfComponent", &TdApi::queryEtfComponent)
		.def("queryMarketState", &TdApi::queryMarketState)
		.def("queryCounterCash", &TdApi::queryCounterCash)
		.def("queryOption", &TdApi::queryOption)
		.def("queryOptHolding", &TdApi::queryOptHolding)
		.def("queryOptUnderlyingHolding", &TdApi::queryOptUnderlyingHolding)
		.def("queryOptPositionLimit", &TdApi::queryOptPositionLimit)
		.def("queryOptPurchaseLimit", &TdApi::queryOptPurchaseLimit)
		.def("queryOptExerciseAssign", &TdApi::queryOptExerciseAssign)
		.def("queryOptSettlementStatement", &TdApi::queryOptSettlementStatement)
		.def("queryNotifyInfo", &TdApi::queryNotifyInfo)

		.def("onBusinessReject", &TdApi::onBusinessReject)
		.def("onOrderInsert", &TdApi::onOrderInsert)
		.def("onOrderReport", &TdApi::onOrderReport)
		.def("onTradeReport", &TdApi::onTradeReport)
		.def("onCashAssetVariation", &TdApi::onCashAssetVariation)
		.def("onStockHoldingVariation", &TdApi::onStockHoldingVariation)
		.def("onOptionHoldingVariation", &TdApi::onOptionHoldingVariation)
		.def("onOptionUnderlyingHoldingVariation", &TdApi::onOptionUnderlyingHoldingVariation)
		.def("onSettlementConfirmedRpt", &TdApi::onSettlementConfirmedRpt)
		.def("onFundTrsfReject", &TdApi::onFundTrsfReject)
		.def("onFundTrsfReport", &TdApi::onFundTrsfReport)
		.def("onMarketState", &TdApi::onMarketState)
		.def("onNotifyReport", &TdApi::onNotifyReport)
		.def("onReportSynchronizationRsp", &TdApi::onReportSynchronizationRsp)
		.def("onQueryOrder", &TdApi::onQueryOrder)
		.def("onQueryTrade", &TdApi::onQueryTrade)
		.def("onQueryCashAsset", &TdApi::onQueryCashAsset)
		.def("onQueryStkHolding", &TdApi::onQueryStkHolding)
		.def("onQueryLotWinning", &TdApi::onQueryLotWinning)
		.def("onQueryCustInfo", &TdApi::onQueryCustInfo)
		.def("onQueryInvAcct", &TdApi::onQueryInvAcct)
		.def("onQueryCommissionRate", &TdApi::onQueryCommissionRate)
		.def("onQueryFundTransferSerial", &TdApi::onQueryFundTransferSerial)
		.def("onQueryIssue", &TdApi::onQueryIssue)
		.def("onQueryStock", &TdApi::onQueryStock)
		.def("onQueryEtf", &TdApi::onQueryEtf)
		.def("onQueryEtfComponent", &TdApi::onQueryEtfComponent)
		.def("onQueryMarketState", &TdApi::onQueryMarketState)
		.def("onQueryOption", &TdApi::onQueryOption)
		.def("onQueryOptHolding", &TdApi::onQueryOptHolding)
		.def("onQueryOptUnderlyingHolding", &TdApi::onQueryOptUnderlyingHolding)
		.def("onQueryOptPositionLimit", &TdApi::onQueryOptPositionLimit)
		.def("onQueryOptPurchaseLimit", &TdApi::onQueryOptPurchaseLimit)
		.def("onQueryOptExerciseAssign", &TdApi::onQueryOptExerciseAssign)
		.def("onQueryNotifyInfo", &TdApi::onQueryNotifyInfo)
		;

}
