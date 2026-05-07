// Function: FUN_016b8970
// Address: 016b8970
// Size: 873 bytes
// Class: MUAraAudioSource
// String references:
//   "properties != NULL"
//   "musicalContext"
//   "properties->structSize >= ARA::kARARegionSequencePropertiesMinSize"


/* WARNING: Removing unreachable block (ram,0x016b8c71) */
/* WARNING: Removing unreachable block (ram,0x016b89f6) */
/* WARNING: Removing unreachable block (ram,0x016b89ff) */
/* WARNING: Removing unreachable block (ram,0x016b8c7a) */

void FUN_016b8970(pthread_key_t param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
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
LAB_016b8af6:
                    /* WARNING: Could not recover jumptable at 0x016b8b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
    return;
  }
  if (*unaff_RSI < 0x1c) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar4 = "properties->structSize >= ARA::kARARegionSequencePropertiesMinSize";
    goto LAB_016b8af6;
  }
  if (*(longlong *)((longlong)unaff_RSI + 0x14) == 0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar4 = "musicalContext";
    goto LAB_016b8af6;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a40();
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
      goto LAB_016b8b2f;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
      local_50 = local_40;
      goto LAB_016b8b2f;
    }
  }
  local_50 = 0;
LAB_016b8b2f:
  FUN_012c7b60();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7e50();
  if ((*unaff_RSI < 0x1d) || (*(longlong *)((longlong)unaff_RSI + 0x1c) == 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c7f30();
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar2 = *(undefined4 **)((longlong)unaff_RSI + 0x1c);
    FUN_01cfbee0(*puVar2,puVar2[1],puVar2[2]);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012c7f30();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


