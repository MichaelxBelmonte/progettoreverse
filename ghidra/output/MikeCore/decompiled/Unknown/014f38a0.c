// Function: FUN_014f38a0
// Address: 014f38a0
// Size: 736 bytes
// Class: Unknown


undefined8 * FUN_014f38a0(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_68;
  char local_60 [8];
  longlong local_58;
  char local_50;
  int local_44;
  char local_38 [8];
  
  iVar2 = FUN_014c2f20();
  if ((param_2 < iVar2) || (iVar2 = FUN_014c2f80(), iVar2 < param_2)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_44 = FUN_014c2f20();
    local_44 = param_2 - local_44;
    if (local_44 < *(int *)(unaff_RSI[0x21] + 0xc)) {
      puVar4 = (undefined8 *)0x0;
      bVar1 = false;
      do {
        FUN_00d23340();
        local_38[0] = local_60[0];
        pcVar8 = local_38;
        pcVar3 = local_60;
        if (local_60[0] == '\0') {
          pcVar3 = pcVar8;
        }
        *pcVar3 = '\0';
        if ((local_60[0] != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        pVar7 = (pthread_key_t)pcVar8;
        if ((local_38[0] == '\0') && (local_68 != 0)) {
          FUN_00d50b00();
        }
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_010fe5f0();
          *puVar4 = &DAT_025e7818;
          puVar4[7] = &DAT_025e7c80;
          puVar4[0x27] = 0;
          puVar4[0x28] = 0;
          *(undefined8 *)((longlong)puVar4 + 0x141) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x149) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x154) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x15c) = 0;
          FUN_00d500e0();
          pvVar5 = _pthread_getspecific(pVar7);
          if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            lVar10 = unaff_RSI[0x27];
            puVar9 = puVar4;
            if (lVar10 != 0) goto LAB_014f3a43;
LAB_014f3a17:
            if (puVar9[0x27] != 0) {
              puVar9[0x27] = lVar10;
LAB_014f3a6d:
              FUN_00d50b20();
              if (lVar10 != 0) goto LAB_014f3a7a;
            }
          }
          else {
            lVar10 = unaff_RSI[0x27];
            puVar9 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            if (lVar10 == 0) goto LAB_014f3a17;
LAB_014f3a43:
            FUN_00d50b00();
            lVar6 = puVar9[0x27];
            if (lVar6 != lVar10) {
              FUN_00d50b00();
              puVar9[0x27] = lVar10;
              if (lVar6 == 0) goto LAB_014f3a7a;
              goto LAB_014f3a6d;
            }
LAB_014f3a7a:
            FUN_00d50b20();
          }
          bVar1 = true;
        }
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = local_68;
        local_50 = '\0';
        FUN_014c2e20();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d23740();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
      } while (local_44 < *(int *)(unaff_RSI[0x21] + 0xc));
      (**(code **)(*unaff_RSI + 0x450))();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ef8f0();
      FUN_014ef8f0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar1) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar4 = (undefined8 *)0x0;
    }
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


