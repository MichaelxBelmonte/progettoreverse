// Function: FUN_01350430
// Address: 01350430
// Size: 2985 bytes
// Class: MUAudioSourceDescription


void FUN_01350430(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong unaff_RDI;
  longlong *plVar14;
  code *pcVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 *local_160;
  undefined1 local_158;
  longlong *local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  longlong *local_130;
  undefined1 local_128;
  longlong *local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 *local_100;
  undefined1 local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  code *local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  char local_48;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar15 = DAT_02572370;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar15)();
  local_80 = (longlong *)&DAT_02572358;
  local_98 = puVar5;
  if (*(longlong *)(unaff_RDI + 0xe8) != 0) {
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = *(longlong *)(unaff_RDI + 0xe8);
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar6 = (longlong)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)(local_68 + 0xc) <= iVar13) break;
      lVar8 = *(longlong *)(local_68 + 0x10);
      plVar12 = *(longlong **)(lVar8 + 8 + lVar6 * 8);
      local_78 = plVar12;
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
      plVar11 = local_78;
      pVar9 = (pthread_key_t)lVar8;
      if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar12 = plVar11, lVar6 != 0)) {
        plVar12 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      fVar17 = (float)(**(code **)(*plVar12 + 0x3e0))();
      plVar12 = local_78;
      if (*(float *)(unaff_RDI + 0x70) <= fVar17) {
        pvVar7 = _pthread_getspecific(pVar9);
        plVar11 = local_78;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar12 = plVar11, lVar6 != 0)) {
          plVar12 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        fVar17 = (float)(**(code **)(*plVar12 + 0x3e0))();
        if (fVar17 <= *(float *)(unaff_RDI + 0x74)) {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_014bc1c0();
          if (*(float *)(unaff_RDI + 0x78) <= fVar17) {
            local_50 = local_78;
            local_48 = '\0';
            cVar2 = FUN_00d24090();
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar2 == '\0') {
              local_50 = local_78;
              local_48 = '\0';
              FUN_00d21140();
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_0131c810();
  }
  if (*(longlong *)(unaff_RDI + 0x40) != 0) {
    local_88 = pcVar15;
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = *(longlong *)(unaff_RDI + 0x40);
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar6 = (longlong)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)(local_68 + 0xc) <= iVar13) break;
      lVar8 = *(longlong *)(local_68 + 0x10);
      local_78 = *(longlong **)(lVar8 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar9 = (pthread_key_t)lVar8;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar12 = local_50;
      if ((((local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      if (((cVar2 == '\0') && (plVar12 != *(longlong **)(unaff_RDI + 0x118))) &&
         ((plVar12 != *(longlong **)(unaff_RDI + 0x128) &&
          (plVar12 != *(longlong **)(unaff_RDI + 0x120))))) {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar17 = (float)FUN_013de3b0();
        if (fVar17 < *(float *)(unaff_RDI + 0x70)) {
LAB_013508ab:
          bVar1 = false;
LAB_013508ae:
          local_50 = local_78;
          local_48 = '\0';
          bVar3 = FUN_00d24090();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar1) {
            bVar3 = bVar3 ^ 1;
            goto joined_r0x013508f6;
          }
          if (bVar3 != 0) goto LAB_01350a00;
        }
        else {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_013de3b0();
          if (*(float *)(unaff_RDI + 0x74) <= fVar17 && fVar17 != *(float *)(unaff_RDI + 0x74))
          goto LAB_013508ab;
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_014bc1c0();
          bVar1 = true;
          if (fVar17 < *(float *)(unaff_RDI + 0x78)) goto LAB_013508ae;
          bVar3 = 0;
joined_r0x013508f6:
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if (bVar3 == 0) goto LAB_01350a00;
        }
        local_50 = local_78;
        local_48 = '\0';
        FUN_00d21140();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01350a00:
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001150f0();
    pcVar15 = local_88;
  }
  plVar12 = local_80;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_88 = (code *)puVar5;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = plVar12;
  uVar18 = (*pcVar15)();
  local_160 = local_98;
  local_158 = 0;
  local_90 = puVar5;
  uVar18 = FUN_013514e0(uVar18,&local_160);
  local_a0 = local_78;
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b00();
  }
  uVar16 = *(uint *)((longlong)puVar4 + 0xc);
  if (0 < (int)uVar16) {
    lVar6 = (ulonglong)uVar16 + 1;
    do {
      uVar16 = uVar16 - 1;
      plVar11 = (longlong *)(ulonglong)uVar16;
      plVar12 = *(longlong **)(puVar4[2] + (longlong)plVar11 * 8);
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_80 = plVar12;
      pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
      plVar12 = local_80;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_80, lVar8 != 0)) {
        plVar11 = local_80;
        plVar12 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      pVar9 = (pthread_key_t)plVar11;
      (**(code **)(*plVar12 + 0x380))();
      pvVar7 = _pthread_getspecific(pVar9);
      plVar12 = local_80;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_80, lVar8 != 0)) {
        plVar12 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x388))();
      FUN_00e7b4e0();
      plVar12 = local_80;
      local_150 = local_80;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_e0 = 0;
      local_d8 = '\0';
      local_d0 = 0;
      local_c8 = '\0';
      uVar18 = FUN_01351de0(1,&local_150,&local_140,&local_e0);
      plVar11 = local_78;
      if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b00();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        local_c0 = (undefined8 *)local_88;
        local_b8 = '\0';
        FUN_015b4ee0();
        if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = plVar11;
        FUN_00d21140();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  uVar16 = *(uint *)((longlong)local_98 + 0xc);
  if (0 < (int)uVar16) {
    lVar6 = (ulonglong)uVar16 + 1;
    do {
      uVar16 = uVar16 - 1;
      plVar12 = *(longlong **)(local_98[2] + (ulonglong)uVar16 * 8);
      uVar10 = uVar16;
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(uVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar11 = local_78;
      if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(uVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      uVar18 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pvVar7 = _pthread_getspecific(uVar10);
        plVar14 = plVar11;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar14 + 0x380))();
        pvVar7 = _pthread_getspecific(uVar10);
        plVar14 = plVar11;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar14 + 0x388))();
        uVar18 = FUN_00e7b4e0();
        local_128 = 0;
        local_130 = plVar12;
        cVar2 = FUN_01353c30(uVar18,1);
        uVar18 = extraout_XMM0_Da_00;
        if (cVar2 != '\0') {
          local_b0 = (undefined8 *)local_88;
          local_a8 = '\0';
          FUN_015b4ee0();
          if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          local_70 = '\0';
          local_78 = plVar12;
          uVar18 = FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  if (0xe < *(int *)((longlong)local_88 + 0x18) + 7U) {
    local_120 = local_a0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    uVar18 = FUN_013469e0(uVar18,&local_110);
    local_100 = (undefined8 *)local_88;
    local_f8 = 0;
    FUN_01353f80(uVar18,&local_100);
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


