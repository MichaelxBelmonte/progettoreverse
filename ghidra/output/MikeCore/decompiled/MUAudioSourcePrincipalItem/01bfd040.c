// Function: FUN_01bfd040
// Address: 01bfd040
// Size: 1564 bytes
// Class: MUAudioSourcePrincipalItem


void FUN_01bfd040(void)

{
  undefined *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  undefined *puVar9;
  char *pcVar10;
  int iVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  longlong local_f0;
  char local_e8;
  undefined *local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  undefined4 local_a4;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  float local_8c;
  undefined *local_88;
  char local_80 [8];
  undefined *local_78;
  undefined8 local_70;
  int local_68;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a13070();
  (**(code **)(*local_48 + 0xe20))();
  iVar11 = *(int *)(local_88 + 0xc);
  if (local_80[0] != '\0') {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar11 != 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &DAT_02572358;
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x960))();
    local_8c = (float)FUN_00d8d7b0();
    if ((local_80[0] != '\0') && (local_88 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a13070();
    (**(code **)(*local_48 + 0xe20))();
    puVar1 = local_88;
    if (local_80[0] == '\0') {
      if (((local_88 != (undefined *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
         (local_88 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80[0] = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar1 != (undefined *)0x0) {
      local_80[0] = '\0';
      local_88 = (undefined *)0x0;
      local_78 = puVar1;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_70._4_4_ = 0;
      local_50 = puVar4;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar11 = -local_70._4_4_;
          }
          else {
            iVar11 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar11);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar11 = 0;
          }
          local_70 = CONCAT44(iVar11,(int)local_70);
        }
        lVar5 = (longlong)(int)local_70;
        iVar11 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar11);
        if (*(int *)(local_78 + 0xc) <= iVar11) break;
        local_88 = *(undefined **)(*(longlong *)(local_78 + 0x10) + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_78 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        plVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_48 = plVar2;
        local_40[0] = '\0';
        uVar12 = FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        local_c8 = local_88;
        local_c0 = '\0';
        FUN_019a54a0(uVar12,&local_c8);
        plVar2 = local_48;
        if (local_40[0] == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((local_c0 != '\0') && (local_c8 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        fVar13 = local_8c;
        if (plVar2 != (longlong *)0x0) {
          fVar13 = (float)FUN_00d459e0();
          fVar13 = fVar13 + local_8c;
        }
        fVar14 = 0.0;
        if ((0.0 <= fVar13) && (fVar14 = fVar13, DAT_02390d34 < fVar13)) {
          fVar14 = DAT_02390d34;
        }
        local_a4 = FUN_01bf6fe0(fVar14);
        FUN_00d23340();
        plVar3 = local_48;
        local_a0 = local_40[0];
        pcVar10 = &local_a0;
        pcVar7 = local_40;
        if (local_40[0] == '\0') {
          pcVar7 = pcVar10;
        }
        *pcVar7 = '\0';
        if ((local_40[0] != '\0') && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar8 = (pthread_key_t)pcVar10;
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc100(local_a4);
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      puVar9 = local_78;
      FUN_001159b0();
      FUN_00d50b20();
      puVar4 = local_50;
    }
    FUN_01a13070();
    (**(code **)(*(longlong *)CONCAT71(uStack_9f,local_a0) + 0xe20))();
    FUN_00d23310();
    puVar1 = local_88;
    pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar9 >> 8),local_80[0]);
    pcVar10 = local_38;
    if (local_80[0] != '\0') {
      pcVar10 = local_80;
    }
    local_38[0] = local_80[0];
    *pcVar10 = '\0';
    if ((local_80[0] != '\0') && (local_88 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = '\0';
    local_b8 = puVar4;
    FUN_013880c0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (puVar1 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xe8) == *unaff_RSI) {
    FUN_00e38430();
  }
  return;
}


