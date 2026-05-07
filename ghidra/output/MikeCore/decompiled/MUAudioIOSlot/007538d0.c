// Function: FUN_007538d0
// Address: 007538d0
// Size: 839 bytes
// Class: MUAudioIOSlot


/* WARNING: Removing unreachable block (ram,0x00753a95) */
/* WARNING: Removing unreachable block (ram,0x00753a9e) */
/* WARNING: Removing unreachable block (ram,0x007539cc) */
/* WARNING: Removing unreachable block (ram,0x007539d9) */

void FUN_007538d0(pthread_key_t param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x498))();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00753905;
    }
    bVar2 = true;
    if (*unaff_RSI == 0) goto LAB_00753bfb;
  }
  else {
LAB_00753905:
    if ((longlong *)*unaff_RSI == local_40) goto LAB_00753bfb;
    bVar2 = true;
    if (local_40 != (longlong *)0x0) {
      FUN_00753e50();
      cVar3 = FUN_00751ba0();
      if (cVar3 == '\0') {
        FUN_00cafd20();
        (**(code **)(*unaff_RDI + 0x628))();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        (**(code **)(*local_40 + 0x3a8))();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_40 + 0x3c8))();
      }
      FUN_00d50b20();
      bVar2 = false;
      plVar5 = (longlong *)0x0;
    }
  }
  FUN_01d37120();
  if (*unaff_RSI != 0) {
    cVar3 = FUN_00751ba0();
    if (cVar3 == '\0') {
      FUN_00cafd20();
      plVar1 = (longlong *)*unaff_RSI;
      (**(code **)(*unaff_RDI + 0x628))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x3a0))();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))();
    }
    FUN_007549f0();
    FUN_00cb1f10();
    FUN_01b3fd00();
    FUN_00db2780();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00756200();
  local_40 = plVar5;
  if (!bVar2) {
    return;
  }
LAB_00753bfb:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


