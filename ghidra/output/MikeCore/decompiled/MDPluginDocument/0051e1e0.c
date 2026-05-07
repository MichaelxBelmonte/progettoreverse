// Function: FUN_0051e1e0
// Address: 0051e1e0
// Size: 697 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x0051e404) */
/* WARNING: Removing unreachable block (ram,0x0051e40d) */
/* WARNING: Removing unreachable block (ram,0x0051e243) */
/* WARNING: Removing unreachable block (ram,0x0051e24f) */

void FUN_0051e1e0(char *param_1)

{
  void *pvVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong lVar4;
  longlong *plVar5;
  longlong local_90;
  char local_88;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_012d2610();
  if (local_88 == '\0') {
    if (local_90 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_90 == 0) {
    return;
  }
  if (0 < *(int *)(local_90 + 0xc)) {
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(local_90 + 0x10) + lVar4 * 8);
      pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      local_38[0] = local_40[0];
      param_1 = local_38;
      pcVar2 = local_40;
      if (local_40[0] == '\0') {
        pcVar2 = param_1;
      }
      *pcVar2 = '\0';
      plVar5 = local_48;
      if ((local_40[0] == '\0') || (local_48 == (longlong *)0x0)) {
        if ((local_48 == (longlong *)0x0) && (plVar3 != (longlong *)0x0)) {
          local_38[0] = '\0';
          plVar5 = plVar3;
        }
      }
      else {
        FUN_00d50b20();
      }
      if ((longlong *)*unaff_RSI == plVar5) {
        plVar3 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar3 + 0x18))();
        pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        FUN_0051e640();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        local_48 = plVar3;
      }
      if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(local_90 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  return;
}


