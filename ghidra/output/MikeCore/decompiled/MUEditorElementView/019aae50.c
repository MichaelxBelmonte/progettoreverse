// Function: FUN_019aae50
// Address: 019aae50
// Size: 827 bytes
// Class: MUEditorElementView


undefined8 * FUN_019aae50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  undefined *puVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  undefined8 uVar11;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  iVar2 = *(int *)(unaff_RSI[0x3d] + 0xc);
  if (iVar2 == 1) {
    FUN_00d23310();
    lVar6 = local_40;
    local_50 = local_38[0];
    pcVar8 = &local_50;
    pcVar3 = local_38;
    if (local_38[0] == '\0') {
      pcVar3 = pcVar8;
    }
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 == '\0') && (lVar6 != 0)) {
      FUN_00d50b00();
    }
    cVar1 = (**(code **)(*unaff_RSI + 0x9a0))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00d23310();
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = pcVar8;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)pcVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*unaff_RSI + 0x9f0))();
      FUN_012e9900(param_1,param_2);
      if (local_50 == '\0') {
        return unaff_RDI;
      }
      if (local_40 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    iVar2 = *(int *)(unaff_RSI[0x3d] + 0xc);
  }
  if (iVar2 < 2) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    (**(code **)(*unaff_RSI + 0x9f0))();
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &DAT_02572358;
    *puVar5 = &DAT_02572358;
    (*DAT_02572370)();
    lVar6 = unaff_RSI[0x3d];
    if (0 < *(int *)(lVar6 + 0xc)) {
      lVar10 = 0;
      do {
        pVar7 = (pthread_key_t)puVar9;
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar10 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        cVar1 = (**(code **)(*unaff_RSI + 0x9a0))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar11 = FUN_012e9900(param_1,param_2);
          lVar6 = CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (lVar6 != 0) {
              uVar11 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38[0] = '\0';
          local_40 = lVar6;
          FUN_00d214d0(uVar11,*(undefined4 *)((longlong)puVar5 + 0xc));
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
        }
        lVar10 = lVar10 + 1;
        lVar6 = unaff_RSI[0x3d];
        puVar9 = (undefined *)(longlong)*(int *)(lVar6 + 0xc);
      } while (lVar10 < (longlong)puVar9);
    }
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


