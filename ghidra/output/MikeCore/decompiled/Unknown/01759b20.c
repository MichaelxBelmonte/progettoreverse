// Function: FUN_01759b20
// Address: 01759b20
// Size: 831 bytes
// Class: Unknown


void FUN_01759b20(undefined8 param_1,char param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  pthread_key_t pVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 local_70;
  undefined1 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_40 = *unaff_RSI;
  local_38 = '\0';
  local_70 = 0;
  local_68 = 0;
  pVar4 = 1;
  FUN_01759fb0(DAT_023b26e8,DAT_02420c90,&local_70,1);
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_01759bb4;
    }
  }
  else if (local_60 != 0) {
LAB_01759bb4:
    if (param_2 == '\0') {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017548e0();
    }
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar3 + 0x18))();
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_60;
    local_48 = '\0';
    FUN_0150bf50();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae40();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    lVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018232c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


