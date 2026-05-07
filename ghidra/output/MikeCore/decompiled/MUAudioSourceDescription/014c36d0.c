// Function: FUN_014c36d0
// Address: 014c36d0
// Size: 685 bytes
// Class: MUAudioSourceDescription


longlong * FUN_014c36d0(pthread_key_t param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  int iVar6;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_014c34a0();
  lVar5 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == 0) goto LAB_014c371a;
  }
  else {
    if (local_40 != 0) goto LAB_014c3963;
LAB_014c371a:
    cVar2 = (**(code **)(*unaff_RSI + 1000))();
    iVar6 = -1;
    if ((cVar2 != '\0') && (lVar1 = **(longlong **)(unaff_RSI[0x21] + 0x10), lVar1 != 0)) {
      FUN_00d50b00();
      iVar6 = *(int *)(lVar1 + 0xc);
      FUN_00d50b20();
    }
    if (param_2 < iVar6) {
      FUN_014bc340();
      lVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_014bc340();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if ((local_40 != 0) && (lVar5 = local_40, local_38[0] == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) goto LAB_014c3963;
      cVar2 = (**(code **)(*unaff_RSI + 1000))();
      if ((cVar2 == '\0') ||
         (lVar5 = **(longlong **)(unaff_RSI[0x21] + 0x10),
         **(longlong **)(unaff_RSI[0x21] + 0x10) == 0)) {
LAB_014c3960:
        lVar5 = 0;
        goto LAB_014c3963;
      }
    }
    else {
      FUN_014bc420();
      lVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_014bc420();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if ((local_40 != 0) && (lVar5 = local_40, local_38[0] == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) goto LAB_014c3963;
      cVar2 = (**(code **)(*unaff_RSI + 1000))();
      if (cVar2 == '\0') goto LAB_014c3960;
      FUN_00d23340();
      pcVar4 = &local_50;
      if (local_38[0] != '\0') {
        pcVar4 = local_38;
      }
      local_50 = local_38[0];
      *pcVar4 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = local_40;
      if ((local_50 != '\0') || (local_40 == 0)) goto LAB_014c3963;
    }
  }
  FUN_00d50b00();
LAB_014c3963:
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


