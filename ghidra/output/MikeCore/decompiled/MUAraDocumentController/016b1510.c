// Function: FUN_016b1510
// Address: 016b1510
// Size: 913 bytes
// Class: MUAraDocumentController
// String references:
//   "properties != NULL"
//   "properties->structSize >= ARA::kARAMusicalContextPropertiesMinSize"


/* WARNING: Removing unreachable block (ram,0x016b183b) */
/* WARNING: Removing unreachable block (ram,0x016b1674) */
/* WARNING: Removing unreachable block (ram,0x016b167d) */
/* WARNING: Removing unreachable block (ram,0x016b1844) */

void FUN_016b1510(pthread_key_t param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  ulonglong *unaff_RSI;
  longlong local_38;
  char local_30;
  
  if (unaff_RSI == (ulonglong *)0x0) {
    if ((DAT_02802f60 != (longlong *)0x0) &&
       (UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      pcVar4 = "properties != NULL";
LAB_016b1613:
                    /* WARNING: Could not recover jumptable at 0x016b161f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
      return;
    }
  }
  else if (*unaff_RSI < 8) {
    if ((DAT_02802f60 != (longlong *)0x0) &&
       (UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      pcVar4 = "properties->structSize >= ARA::kARAMusicalContextPropertiesMinSize";
      goto LAB_016b1613;
    }
  }
  else {
    if ((*unaff_RSI == 8) || (unaff_RSI[1] == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f5a0();
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d93290();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_0170f5a0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((*unaff_RSI < 9) || (unaff_RSI[1] == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f690();
      uVar1 = *unaff_RSI;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f690();
      uVar1 = *unaff_RSI;
    }
    if ((uVar1 < 0x15) || (*(longlong *)((longlong)unaff_RSI + 0x14) == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f710();
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar2 = *(undefined4 **)((longlong)unaff_RSI + 0x14);
      FUN_01cfbee0(*puVar2,puVar2[1],puVar2[2]);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_0170f710();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


