// Function: FUN_01a47e50
// Address: 01a47e50
// Size: 2650 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a480d5) */
/* WARNING: Removing unreachable block (ram,0x01a480e5) */

void FUN_01a47e50(double param_1,double param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  undefined8 in_RCX;
  longlong *in_RDX;
  longlong lVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  double unaff_R14;
  bool bVar13;
  undefined8 uVar14;
  double dVar15;
  longlong local_168;
  char local_160;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  undefined8 *local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  double local_d0;
  double local_90;
  char local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60 [8];
  char local_58;
  undefined7 uStack_57;
  char local_50 [32];
  
  iVar1 = *(int *)(*unaff_RSI + 0xc);
  if (iVar1 == 0) {
    if (*(int *)(*in_RDX + 0xc) == 0) goto LAB_01a48050;
LAB_01a47f55:
    FUN_00d23310();
    pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_88[0]);
    pcVar9 = &local_68;
    if (local_88[0] != '\0') {
      pcVar9 = local_88;
    }
    local_68 = local_88[0];
    *pcVar9 = '\0';
    if ((local_88[0] != '\0') && (local_90 != 0.0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01274b60();
    lVar3 = CONCAT71(uStack_57,local_58);
    bVar13 = lVar3 != 0;
    local_d0 = unaff_R14;
    if ((local_50[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_90 != 0.0)) {
      FUN_00d50b20();
    }
    dVar15 = local_d0;
    if (iVar1 == 0) {
      if (lVar3 != 0) goto LAB_01a480f8;
      goto LAB_01a48050;
    }
  }
  else {
    FUN_00d23310();
    in_RCX = CONCAT71((int7)((ulonglong)in_RCX >> 8),local_88[0]);
    pcVar9 = local_50 + 8;
    if (local_88[0] != '\0') {
      pcVar9 = local_88;
    }
    local_50[8] = local_88[0];
    *pcVar9 = '\0';
    if ((local_88[0] != '\0') && (local_90 != 0.0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01274b60();
    dVar15 = local_90;
    if (local_168 == 0) {
      unaff_R14 = local_90;
      if (*(int *)(*in_RDX + 0xc) != 0) goto LAB_01a47f55;
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50[8] != '\0') && (dVar15 != 0.0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
LAB_01a480f8:
    FUN_01a48e20();
    if ((local_88[0] == '\0') && (local_90 != 0.0)) {
      FUN_00d50b00();
    }
    FUN_01a48e20();
    if ((local_88[0] == '\0') && (local_90 != 0.0)) {
      FUN_00d50b00();
    }
    FUN_00c9fe20();
    local_68 = local_88[0];
    pcVar9 = local_88;
    if (local_88[0] == '\0') {
      pcVar9 = &local_68;
    }
    *pcVar9 = '\0';
    if ((local_88[0] != '\0') && (local_90 != 0.0)) {
      FUN_00d50b20();
    }
    if (local_68 == '\0') {
      if (local_90 != 0.0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_01a49410();
    lVar3 = CONCAT71(uStack_57,local_58);
    if (local_50[0] == '\0') {
      if (((lVar3 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if (local_90 != 0.0) {
      FUN_00d50b20();
    }
    FUN_00c9fe20();
    pcVar9 = local_88;
    if (local_88[0] == '\0') {
      pcVar9 = &local_58;
    }
    local_58 = local_88[0];
    *pcVar9 = '\0';
    if ((local_88[0] != '\0') && (local_90 != 0.0)) {
      FUN_00d50b20();
    }
    if (local_58 == '\0') {
      if (local_90 != 0.0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_88[0] = '\0';
    uVar14 = FUN_00d23480();
    if ((local_88[0] != '\0') && (local_90 != 0.0)) {
      uVar14 = FUN_00d50b20();
    }
    if (local_90 != 0.0) {
      uVar14 = FUN_00d50b20();
    }
    pcVar4 = DAT_02572370;
    if (lVar3 != 0) {
      local_88[0] = '\0';
      local_70 = 0;
      local_78 = 0;
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar12 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar12 * 8);
          local_108 = '\0';
          local_110 = lVar2;
          uVar14 = FUN_01a49500(uVar14,&local_110);
          puVar6 = (undefined8 *)CONCAT71(uStack_57,local_58);
          if (local_50[0] == '\0') {
            if (((puVar6 != (undefined8 *)0x0) && (uVar14 = FUN_00d50b00(), local_50[0] != '\0')) &&
               (CONCAT71(uStack_57,local_58) != 0)) {
              uVar14 = FUN_00d50b20();
            }
          }
          else {
            local_50[0] = '\0';
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          local_f8 = '\0';
          local_100 = lVar2;
          FUN_01a49500(uVar14,&local_100);
          puVar7 = (undefined8 *)CONCAT71(uStack_57,local_58);
          if (local_50[0] == '\0') {
            if (((puVar7 != (undefined8 *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
               (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50[0] = '\0';
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &DAT_02572358;
            (*pcVar4)();
          }
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &DAT_02572358;
            (*pcVar4)();
          }
          local_50[0x10] = '\0';
          FUN_00d23310();
          local_68 = local_50[0];
          pcVar9 = local_50;
          if (local_50[0] == '\0') {
            pcVar9 = &local_68;
          }
          lVar2 = CONCAT71(uStack_57,local_58);
          *pcVar9 = '\0';
          if ((local_50[0] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 == 0) {
            FUN_00d23310();
            local_50[0x18] = local_50[0];
            pcVar9 = local_50 + 0x18;
            pcVar8 = local_50;
            if (local_50[0] == '\0') {
              pcVar8 = pcVar9;
            }
            lVar2 = CONCAT71(uStack_57,local_58);
            *pcVar8 = '\0';
            if ((local_50[0] != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            pVar10 = (pthread_key_t)pcVar9;
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            lVar11 = CONCAT71(uStack_67,local_68);
            if (lVar11 == 0) {
              lVar11 = 0;
            }
            else {
              pcVar9 = local_50 + 0x10;
              if (local_60[0] != '\0') {
                local_50[0x10] = '\x01';
                pcVar9 = local_60;
              }
              *pcVar9 = '\0';
              if (local_60[0] != '\0') {
                FUN_00d50b20();
              }
            }
            if ((local_50[0x18] != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d23310();
            local_50[0x18] = local_50[0];
            pcVar9 = local_50 + 0x18;
            pcVar8 = local_50;
            if (local_50[0] == '\0') {
              pcVar8 = pcVar9;
            }
            lVar2 = CONCAT71(uStack_57,local_58);
            *pcVar8 = '\0';
            if ((local_50[0] != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            pVar10 = (pthread_key_t)pcVar9;
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            lVar11 = CONCAT71(uStack_67,local_68);
            if (lVar11 == 0) {
              lVar11 = 0;
            }
            else {
              pcVar9 = local_50 + 0x10;
              if (local_60[0] != '\0') {
                local_50[0x10] = '\x01';
                pcVar9 = local_60;
              }
              *pcVar9 = '\0';
              if (local_60[0] != '\0') {
                FUN_00d50b20();
              }
            }
            if ((local_50[0x18] != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_d0 = (double)FUN_012f8e60(param_2);
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_012f8e60(param_1);
          local_e8 = '\0';
          local_d8 = '\0';
          local_f0 = puVar6;
          local_e0 = puVar7;
          uVar14 = (**(code **)(*unaff_RDI + 0x4b8))(local_d0 - dVar15,&local_e0);
          if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (undefined8 *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_50[0x10] != '\0') && (lVar11 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if (puVar7 != (undefined8 *)0x0) {
            uVar14 = FUN_00d50b20();
          }
          if (puVar6 != (undefined8 *)0x0) {
            uVar14 = FUN_00d50b20();
          }
          lVar12 = lVar12 + 1;
          local_78 = CONCAT44(local_78._4_4_,(int)lVar12);
        } while ((int)lVar12 < *(int *)(lVar3 + 0xc));
      }
      FUN_0049cc10();
      FUN_00d50b20();
    }
    if (local_90 == 0.0) {
      return;
    }
    FUN_00d50b20();
    FUN_00d50b20();
    return;
  }
LAB_01a48050:
  local_120 = *in_RDX;
  local_118 = '\0';
  (**(code **)(*unaff_RDI + 0x4b8))(param_2 - param_1,&local_120);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  return;
}


