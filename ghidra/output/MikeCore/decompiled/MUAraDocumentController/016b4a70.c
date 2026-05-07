// Function: FUN_016b4a70
// Address: 016b4a70
// Size: 795 bytes
// Class: MUAraDocumentController
// String references:
//   "properties != NULL"
//   "persistentID != NULL"
//   "gn_strlen(persistentID) > 0"
//   "properties->structSize >= ARA::kARAAudioModificationPropertiesMinSize"


/* WARNING: Removing unreachable block (ram,0x016b4cb8) */
/* WARNING: Removing unreachable block (ram,0x016b4cc5) */

void FUN_016b4a70(pthread_key_t param_1)

{
  ulonglong uVar1;
  int iVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  ulonglong *unaff_RSI;
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
    pcVar4 = "properties != NULL";
LAB_016b4b68:
                    /* WARNING: Could not recover jumptable at 0x016b4b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
    return;
  }
  if (*unaff_RSI < 0x18) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar4 = "properties->structSize >= ARA::kARAAudioModificationPropertiesMinSize";
    goto LAB_016b4b68;
  }
  uVar1 = unaff_RSI[1];
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar1 == 0) {
    local_38 = '\0';
    local_40 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 != '\0') {
      local_50 = local_40;
      local_38 = '\0';
      goto LAB_016b4ba2;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
      local_50 = local_40;
      goto LAB_016b4ba2;
    }
  }
  local_50 = 0;
LAB_016b4ba2:
  FUN_01650680();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = unaff_RSI[2];
  if (((uVar1 == 0) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)();
  }
  iVar2 = FUN_00e7dde0();
  if (((iVar2 < 1) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)();
  }
  if ((uVar1 == 0) || (iVar2 = FUN_00e7dde0(), iVar2 < 1)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01733bc0();
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
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
  return;
}


