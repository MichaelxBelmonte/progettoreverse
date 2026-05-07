// Function: FUN_016b2af0
// Address: 016b2af0
// Size: 1369 bytes
// Class: MUAraDocumentController
// String references:
//   "properties != NULL"
//   "properties->structSize >= ARA::kARAAudioSourcePropertiesMinSize"
//   "persistentID != NULL"
//   "gn_strlen(persistentID) > 0"
//   "sampleRate > 10.0"
//   "sampleCount > 1"
//   "properties->channelCount > 0"
//   "false && \"channel layout information uses wrong Companion API\""
//   "!ARA_IMPLEMENTS_FIELD(properties, ARAAudioSourceProperties, channelArrangementDataType)"


/* WARNING: Removing unreachable block (ram,0x016b2d37) */
/* WARNING: Removing unreachable block (ram,0x016b2d44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b2af0(undefined8 param_1)

{
  double dVar1;
  ulonglong uVar2;
  int iVar3;
  void *pvVar4;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar5;
  pthread_key_t pVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  ulonglong *unaff_RSI;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  if (unaff_RSI == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar8 = "properties != NULL";
LAB_016b2be8:
                    /* WARNING: Could not recover jumptable at 0x016b2bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar8);
    return;
  }
  if (*unaff_RSI < 0x30) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar8 = "properties->structSize >= ARA::kARAAudioSourcePropertiesMinSize";
    goto LAB_016b2be8;
  }
  uVar2 = unaff_RSI[1];
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  pVar6 = (pthread_key_t)param_1;
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar2 == 0) {
    local_38 = '\0';
    local_40 = 0;
LAB_016b2c08:
    local_50 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_016b2c08;
      FUN_00d50b00();
      local_50 = local_40;
    }
    else {
      local_50 = local_40;
      local_38 = '\0';
    }
  }
  uVar9 = FUN_01667bd0();
  if (local_50 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  uVar2 = unaff_RSI[2];
  if (((uVar2 == 0) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)(uVar9,"persistentID != NULL");
  }
  iVar3 = FUN_00e7dde0();
  if (((iVar3 < 1) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)(extraout_XMM0_Qa,"gn_strlen(persistentID) > 0");
  }
  if ((uVar2 == 0) || (iVar3 = FUN_00e7dde0(), iVar3 < 1)) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01733bc0();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d91a70();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01733bc0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  dVar1 = (double)unaff_RSI[4];
  if (((dVar1 <= _DAT_0241eeb8) && (DAT_02802f60 != (longlong *)0x0)) &&
     ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)(dVar1,"sampleRate > 10.0");
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01666d20(dVar1);
  if ((((longlong)unaff_RSI[3] < 2) && (DAT_02802f60 != (longlong *)0x0)) &&
     ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)(uVar9,"sampleCount > 1");
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01666df0();
  if ((((int)unaff_RSI[5] < 1) && (DAT_02802f60 != (longlong *)0x0)) &&
     ((code *)*DAT_02802f60 != (code *)0x0)) {
    uVar9 = (*(code *)*DAT_02802f60)(uVar9,"properties->channelCount > 0");
  }
  if (*unaff_RSI < 0x35) {
    pVar7 = 0;
    if (0x30 < *unaff_RSI) {
      if (DAT_02802f60 == (longlong *)0x0) {
        return;
      }
      if ((code *)*DAT_02802f60 == (code *)0x0) {
        return;
      }
      (*(code *)*DAT_02802f60)
                (0,
                 "!ARA_IMPLEMENTS_FIELD(properties, ARAAudioSourceProperties, channelArrangementDataType)"
                );
      return;
    }
    goto switchD_016b2f1a_caseD_0;
  }
  pVar7 = 0x16b3160;
  switch((int)unaff_RSI[6]) {
  case 0:
    goto switchD_016b2f1a_caseD_0;
  case 1:
    pVar7 = 0x16b3160;
    break;
  case 2:
    pVar7 = 0x16b3160;
    lVar5 = FUN_00bce6e0();
    if (lVar5 != 0) goto switchD_016b2f1a_caseD_0;
    break;
  case 3:
    pVar7 = 0x16b3160;
    break;
  default:
    pVar7 = pVar6;
    if ((DAT_02802f60 != (longlong *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar9,"false && \"channel layout information uses wrong Companion API\"");
    }
    goto switchD_016b2f1a_caseD_0;
  }
  FUN_00bce6e0();
switchD_016b2f1a_caseD_0:
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016b29c0();
  FUN_01666ee0();
  return;
}


