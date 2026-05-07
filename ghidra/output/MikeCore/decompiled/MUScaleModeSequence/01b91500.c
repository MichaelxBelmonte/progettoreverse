// Function: FUN_01b91500
// Address: 01b91500
// Size: 641 bytes
// Class: MUScaleModeSequence


longlong * FUN_01b91500(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x1f8) == 0) {
LAB_01b916e8:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  lVar1 = *(longlong *)(unaff_RSI + 0x1f8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_38 = '\0';
  local_40 = 0;
  do {
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_00e7bdb0();
      param_1 = FUN_00e7bdb0();
      cVar4 = FUN_01252960(param_1,uVar6,&local_40,0);
      if (cVar4 == '\0') {
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        goto LAB_01b916e8;
      }
    } while (local_40 == 0);
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    lVar1 = *param_2;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = local_40;
  } while (local_68 != lVar1);
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01b91721;
    }
    *unaff_RDI = 0;
  }
  else {
    *unaff_RDI = local_40;
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01b91721:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


