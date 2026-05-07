// Function: FUN_016b0100
// Address: 016b0100
// Size: 589 bytes
// Class: MUAraDocumentController
// String references:
//   "properties != NULL"
//   "properties->structSize >= ARA::kARADocumentPropertiesMinSize"


/* WARNING: Removing unreachable block (ram,0x016b0151) */
/* WARNING: Removing unreachable block (ram,0x016b015a) */
/* WARNING: Removing unreachable block (ram,0x016b02d6) */
/* WARNING: Removing unreachable block (ram,0x016b02df) */

void FUN_016b0100(pthread_key_t param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  int iVar6;
  ulonglong *unaff_RSI;
  longlong local_60;
  char local_58;
  longlong local_38;
  
  lVar2 = local_60;
  if (unaff_RSI == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar5 = "properties != NULL";
LAB_016b0211:
                    /* WARNING: Could not recover jumptable at 0x016b021d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar5);
    return;
  }
  if (*unaff_RSI < 0x10) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar5 = "properties->structSize >= ARA::kARADocumentPropertiesMinSize";
    goto LAB_016b0211;
  }
  FUN_0167ab60();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  uVar1 = unaff_RSI[1];
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    if (uVar1 == 0) goto LAB_016b01a3;
LAB_016b022b:
    FUN_00d93290();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_016b01b3;
      FUN_00d50b00();
      local_38 = local_60;
    }
    else {
      local_38 = local_60;
      local_58 = '\0';
    }
  }
  else {
    if (uVar1 != 0) goto LAB_016b022b;
LAB_016b01a3:
    local_58 = '\0';
    local_60 = 0;
LAB_016b01b3:
    local_38 = 0;
  }
  FUN_01538290();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01689950();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_016b0333;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_016b0333;
  for (iVar6 = 0; iVar6 < *(int *)(local_60 + 0xc); iVar6 = iVar6 + 1) {
    FUN_01693550();
  }
  FUN_016be7c0();
  FUN_00d50b20();
LAB_016b0333:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


