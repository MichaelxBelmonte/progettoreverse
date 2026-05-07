// Function: FUN_01268f00
// Address: 01268f00
// Size: 7699 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x01269a91) */
/* WARNING: Removing unreachable block (ram,0x01269a9d) */
/* WARNING: Removing unreachable block (ram,0x01269a77) */
/* WARNING: Removing unreachable block (ram,0x01269a83) */
/* WARNING: Removing unreachable block (ram,0x0126a054) */
/* WARNING: Removing unreachable block (ram,0x0126a060) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01268f00(longlong *param_1)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  pthread_key_t pVar10;
  longlong *plVar12;
  longlong unaff_RDI;
  bool bVar13;
  undefined4 uVar14;
  double dVar15;
  undefined8 extraout_XMM0_Qb;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  longlong local_268;
  char local_260;
  longlong local_258;
  char local_250;
  longlong local_248;
  char local_240;
  longlong local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  double local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  double local_40;
  longlong *local_38;
  longlong lVar11;
  
  local_40 = *(double *)(unaff_RDI + 0xf0);
  local_80 = (double)CONCAT44(local_80._4_4_,*(undefined4 *)(unaff_RDI + 0x110));
  plVar5 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar5 + 0x18))();
  local_38 = plVar5;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb6d0();
  local_98 = (longlong *)0x0;
  if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
LAB_012690a2:
    local_a8 = 0;
LAB_012690ab:
    local_78 = (longlong *)0x0;
    fVar1 = local_80._0_4_;
LAB_012690b6:
    local_a0 = (longlong *)CONCAT44(local_a0._4_4_,fVar1);
  }
  else {
    local_88 = 0;
    local_48 = (longlong *)0x0;
    local_a8 = 0;
    local_78 = (longlong *)0x0;
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      local_88 = 0;
      local_48 = (longlong *)0x0;
      local_a8 = 0;
      local_78 = (longlong *)0x0;
      FUN_00e8b990();
    }
    local_88 = 0;
    local_48 = (longlong *)0x0;
    local_a8 = 0;
    local_78 = (longlong *)0x0;
    cVar3 = FUN_012df8b0();
    if (cVar3 == '\0') goto LAB_012690a2;
    if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
LAB_01269d9a:
      local_a8 = 0;
      local_78 = (longlong *)0x0;
joined_r0x01269dad:
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != (longlong *)0x0) goto LAB_01269dc8;
      goto LAB_012690ab;
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    local_78 = local_70;
    param_1 = local_70;
    if (local_70 == (longlong *)0x0) goto LAB_01269d9a;
    if (local_68 == '\0') {
      uVar9 = FUN_00d50b00();
      local_a8 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      goto joined_r0x01269dad;
    }
    local_a8 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
LAB_01269dc8:
    local_88 = 0;
    local_48 = (longlong *)0x0;
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = local_78;
    if (pvVar6 != (void *)0x0) {
      local_88 = 0;
      local_48 = (longlong *)0x0;
      lVar7 = FUN_00e8b990();
      plVar5 = local_78;
      if (lVar7 != 0) {
        plVar5 = (longlong *)local_78[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        param_1 = local_78;
      }
    }
    fVar1 = *(float *)(plVar5 + 0x22);
    local_a0 = (longlong *)CONCAT44(local_a0._4_4_,fVar1);
    if ((fVar1 != *(float *)(unaff_RDI + 0x110)) ||
       (NAN(fVar1) || NAN(*(float *)(unaff_RDI + 0x110)))) {
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_012dfc00();
      local_98 = (longlong *)(dVar15 * *(double *)(unaff_RDI + 0xf0));
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      plVar5 = local_78;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_78, lVar7 != 0)) {
        plVar5 = (longlong *)local_78[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        param_1 = local_78;
      }
      local_48 = (longlong *)plVar5[0x1e];
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_012dfc00();
      dVar17 = (double)local_98 * DAT_023942d0;
      local_98 = (longlong *)(dVar17 + 0.0);
      fVar1 = (float)((dVar17 / ((double)local_48 * dVar15 * DAT_023942d0 + dVar17)) *
                      (double)(local_a0._0_4_ - *(float *)(unaff_RDI + 0x110)) +
                     (double)*(float *)(unaff_RDI + 0x110));
      goto LAB_012690b6;
    }
  }
  if (*(longlong *)(unaff_RDI + 0xa0) == 0) {
LAB_012691a3:
    local_88 = 0;
LAB_012691a9:
    local_48 = (longlong *)0x0;
  }
  else {
    local_88 = 0;
    local_48 = (longlong *)0x0;
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      local_88 = 0;
      local_48 = (longlong *)0x0;
      FUN_00e8b990();
    }
    local_88 = 0;
    local_48 = (longlong *)0x0;
    cVar3 = FUN_012df8b0();
    if (cVar3 == '\0') goto LAB_012691a3;
    if (*(longlong *)(unaff_RDI + 0xa0) == 0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
LAB_01269edb:
      local_88 = 0;
      local_48 = (longlong *)0x0;
joined_r0x01269eeb:
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) goto LAB_01269f06;
      goto LAB_012691a9;
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    local_48 = local_70;
    param_1 = local_70;
    if (local_70 == (longlong *)0x0) goto LAB_01269edb;
    if (local_68 == '\0') {
      uVar9 = FUN_00d50b00();
      local_88 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      goto joined_r0x01269eeb;
    }
    local_88 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
LAB_01269f06:
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = local_48;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_48, lVar7 != 0)) {
      plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      param_1 = local_48;
    }
    fVar1 = *(float *)(plVar5 + 0x22);
    local_80 = (double)CONCAT44(local_80._4_4_,fVar1);
    if ((fVar1 != *(float *)(unaff_RDI + 0x110)) ||
       (NAN(fVar1) || NAN(*(float *)(unaff_RDI + 0x110)))) {
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e0 = (double)FUN_012dfc00();
      local_e0 = local_e0 * *(double *)(unaff_RDI + 0xf0);
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      plVar5 = local_48;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_48, lVar7 != 0)) {
        plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        param_1 = local_48;
      }
      dVar15 = (double)plVar5[0x1e];
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_012dfc00();
      dVar18 = local_e0 * DAT_023942d0;
      local_40 = local_40 - dVar18;
      local_80 = (double)CONCAT44(local_80._4_4_,
                                  (float)((dVar18 / (dVar15 * dVar17 * DAT_023942d0 + dVar18)) *
                                          (double)(local_80._0_4_ - *(float *)(unaff_RDI + 0x110)) +
                                         (double)*(float *)(unaff_RDI + 0x110)));
    }
  }
  if (((double)local_98 != 0.0) || (NAN((double)local_98))) {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x410))();
    if ((local_260 != '\0') && (local_268 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x410))(local_98,SUB84((double)*(float *)(unaff_RDI + 0x110),0));
    if ((local_250 != '\0') && (local_258 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x410))();
    if ((local_240 != '\0') && (local_248 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  plVar5 = local_38;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
    param_1 = local_38;
    plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x410))(local_40);
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != *(double *)(unaff_RDI + 0xf0)) ||
     (NAN(local_40) || NAN(*(double *)(unaff_RDI + 0xf0)))) {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x410))(*(undefined8 *)(unaff_RDI + 0xf0));
    if ((local_220 != '\0') && (local_228 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0125e7c0();
  if (local_70 == (longlong *)0x0) {
    bVar13 = false;
  }
  else {
    if (*(longlong *)(unaff_RDI + 0xd8) == 0) {
      local_b0 = '\0';
      local_b8 = (longlong *)0x0;
LAB_01269517:
      bVar13 = false;
    }
    else {
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef490();
      if (local_b8 == (longlong *)0x0) goto LAB_01269517;
      local_40 = *(double *)(unaff_RDI + 0xf0);
      FUN_0125e7c0();
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_013de9b0();
      if (local_40 <= dVar15) {
        bVar13 = false;
      }
      else {
        iVar4 = FUN_0126b4b0();
        bVar13 = iVar4 == 1;
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar10 = (pthread_key_t)param_1;
  plVar5 = local_38;
  if (bVar13) {
    FUN_0125e7c0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc240();
    plVar5 = local_b8;
    pvVar6 = _pthread_getspecific(pVar10);
    plVar8 = local_b8;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = plVar8, lVar7 != 0)) {
      plVar5 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x400))();
    plVar8 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_0125e7c0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc240();
    plVar5 = local_b8;
    pvVar6 = _pthread_getspecific(pVar10);
    plVar12 = local_b8;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = plVar12, lVar7 != 0)) {
      plVar5 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x400))();
    plVar12 = local_38;
    local_a0 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    plVar5 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012698e5;
      }
    }
    else if (local_70 != (longlong *)0x0) {
LAB_012698e5:
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = plVar5;
      local_58 = 0xffffffff;
      local_50 = 0;
      while( true ) {
        lVar7 = (longlong)(int)local_58;
        iVar4 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar4);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar4) break;
        lVar11 = local_60[2];
        local_70 = *(longlong **)(lVar11 + 8 + lVar7 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar11);
        pVar10 = (pthread_key_t)lVar11;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        FUN_01264500();
        FUN_013fae90();
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar4 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar4 = 0;
          }
          local_58 = CONCAT44(iVar4,(int)local_58);
        }
      }
      FUN_01a81420();
      FUN_00d50b20();
      plVar12 = local_38;
    }
    pVar10 = 0;
    FUN_013f9470();
    local_98 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    plVar5 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01269b57;
      }
    }
    else if (local_70 != (longlong *)0x0) {
LAB_01269b57:
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = plVar5;
      local_58 = 0xffffffff;
      local_50 = 0;
      while( true ) {
        lVar7 = (longlong)(int)local_58;
        iVar4 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar4);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar4) break;
        lVar11 = local_60[2];
        local_70 = *(longlong **)(lVar11 + 8 + lVar7 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar11);
        pVar10 = (pthread_key_t)lVar11;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_80 = (double)FUN_013faf20();
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_013faed0();
        pvVar6 = _pthread_getspecific(pVar10);
        plVar5 = plVar8;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar5 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        dVar15 = (double)(**(code **)(*plVar5 + 0x380))(local_40);
        local_40 = 0.0;
        if ((dVar15 != 0.0) || (NAN(dVar15))) {
          local_40 = local_80 / dVar15;
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar14 = 0;
        uVar16 = 0;
        if (0.0 <= local_40) {
          uVar14 = SUB84(local_40,0);
          uVar16 = (undefined4)((ulonglong)local_40 >> 0x20);
        }
        dVar15 = DAT_0238fee8;
        if ((double)CONCAT44(uVar16,uVar14) <= DAT_0238fee8) {
          dVar15 = (double)CONCAT44(uVar16,uVar14);
        }
        FUN_013faee0(dVar15);
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar4 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar4 = 0;
          }
          local_58 = CONCAT44(iVar4,(int)local_58);
        }
      }
      FUN_01a81420();
      FUN_00d50b20();
      plVar12 = local_38;
    }
    local_118 = '\0';
    param_1 = (longlong *)0x0;
    local_120 = plVar12;
    FUN_013f8740(0,&local_120);
    plVar2 = local_70;
    plVar5 = local_38;
    if (local_70 == plVar12) {
joined_r0x0126a019:
      local_38 = plVar5;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar5 = plVar2;
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (local_38 != (longlong *)0x0) {
          local_38 = plVar2;
          FUN_00d50b20();
          plVar5 = local_38;
        }
        goto joined_r0x0126a019;
      }
      if (local_38 != (longlong *)0x0) {
        local_38 = local_70;
        FUN_00d50b20();
      }
      local_68 = '\0';
    }
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_98 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_a0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  local_38 = plVar5;
  local_40 = (double)FUN_01267080();
  dVar15 = (double)FUN_012671f0();
  pVar10 = (pthread_key_t)param_1;
  uVar9 = extraout_XMM0_Qb;
  if (NAN(local_40)) {
joined_r0x0126acaa:
    if (local_40 <= 0.0) goto LAB_0126a0eb;
LAB_0126a104:
    dVar17 = *(double *)(unaff_RDI + 0xf0);
    uVar14 = SUB84(dVar17,0);
    uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
    if (dVar17 < local_40) goto LAB_0126a11e;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    if (0.0 <= dVar15) goto LAB_0126a139;
LAB_0126a143:
    uVar14 = SUB84(local_40,0);
    uVar16 = (undefined4)((ulonglong)local_40 >> 0x20);
    if (local_40 <= (double)local_98) {
      uVar14 = SUB84(local_98,0);
      uVar16 = (undefined4)((ulonglong)local_98 >> 0x20);
    }
    local_98 = (longlong *)
               (~-(ulonglong)(!NAN(local_40) && !NAN(local_40)) & (ulonglong)local_98 |
               CONCAT44(uVar16,uVar14) & -(ulonglong)(!NAN(local_40) && !NAN(local_40)));
  }
  else {
    if (dVar15 < local_40) {
      dVar15 = (local_40 + dVar15) * DAT_023942d0;
      uVar9 = 0;
      local_40 = dVar15;
      goto joined_r0x0126acaa;
    }
    if (0.0 < local_40) goto LAB_0126a104;
LAB_0126a0eb:
    uVar14 = SUB84(DAT_023908c8,0);
    uVar16 = (undefined4)((ulonglong)DAT_023908c8 >> 0x20);
LAB_0126a11e:
    local_40 = (double)CONCAT44(uVar16,uVar14);
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    if (dVar15 < 0.0) goto LAB_0126a143;
LAB_0126a139:
    uStack_90 = uVar9;
    local_98 = (longlong *)dVar15;
    if (!NAN((double)local_98)) goto LAB_0126a143;
  }
  if (NAN((double)local_98)) {
    bVar13 = true;
    if (NAN(local_40)) goto LAB_0126a949;
  }
  else if (*(double *)(unaff_RDI + 0xf0) <= (double)local_98) {
    if (NAN(local_40)) goto LAB_0126a949;
    local_98 = (longlong *)DAT_023908c8;
    uStack_90 = 0;
    bVar13 = true;
  }
  else {
    bVar13 = true;
    if (NAN(local_40)) {
      bVar13 = false;
    }
  }
  plVar8 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar8 + 0x18))();
  plVar5 = local_38;
  pVar10 = (pthread_key_t)param_1;
  if (bVar13) {
    if (DAT_02391030 <=
        (double)((ulonglong)(*(double *)(unaff_RDI + 0x128) + DAT_023b19a0) & _DAT_023908f0)) {
      pvVar6 = _pthread_getspecific(pVar10);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(0,0);
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      if (DAT_0240d198 < local_40) {
        local_80 = DAT_0240d198;
        do {
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          plVar12 = plVar8;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          uVar14 = _pow(local_80 / local_40,(int)*(undefined8 *)(unaff_RDI + 0x128));
          plVar5 = local_38;
          (**(code **)(*plVar12 + 0x410))(local_80,uVar14);
          if ((local_1e0 != '\0') && (local_1e8 != 0)) {
            FUN_00d50b20();
          }
          local_80 = local_80 + DAT_0240d198;
        } while (local_80 < local_40);
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(local_40,SUB84(DAT_0238fee8,0));
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar6 = _pthread_getspecific(pVar10);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(0,0);
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(local_40,SUB84(DAT_0238fee8,0));
      if ((local_200 != '\0') && (local_208 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar6 = _pthread_getspecific(pVar10);
    plVar12 = plVar8;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    local_40 = 0.0;
    (**(code **)(*plVar12 + 0x410))(0,SUB84(DAT_0238fee8,0));
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
  }
  pVar10 = (pthread_key_t)param_1;
  if (NAN((double)local_98)) {
    if (local_40 < *(double *)(unaff_RDI + 0xf0)) {
      pvVar6 = _pthread_getspecific(pVar10);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      plVar5 = local_38;
      (**(code **)(*plVar12 + 0x410))(*(undefined8 *)(unaff_RDI + 0xf0),SUB84(DAT_0238fee8,0));
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else if (DAT_02391030 <=
           (double)((ulonglong)(*(double *)(unaff_RDI + 0x130) + DAT_023b19a0) & _DAT_023908f0)) {
    local_80 = *(double *)(unaff_RDI + 0xf0);
    if (local_40 < (double)local_98) {
      pvVar6 = _pthread_getspecific(pVar10);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(local_98,SUB84(DAT_0238fee8,0));
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
    }
    pVar10 = (pthread_key_t)param_1;
    local_40 = DAT_0240d198 + (double)local_98;
    if (local_40 < *(double *)(unaff_RDI + 0xf0)) {
      local_80 = local_80 - (double)local_98;
      do {
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        plVar12 = plVar8;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        uVar14 = _pow(DAT_0238fee8 - (local_40 - (double)local_98) / local_80,
                      (int)*(undefined8 *)(unaff_RDI + 0x130));
        plVar5 = local_38;
        (**(code **)(*plVar12 + 0x410))(local_40,uVar14);
        if ((local_180 != '\0') && (local_188 != 0)) {
          FUN_00d50b20();
        }
        pVar10 = (pthread_key_t)param_1;
        local_40 = local_40 + DAT_0240d198;
      } while (local_40 < *(double *)(unaff_RDI + 0xf0));
    }
    pvVar6 = _pthread_getspecific(pVar10);
    plVar12 = plVar8;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar12 + 0x410))(*(undefined8 *)(unaff_RDI + 0xf0),0);
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 < (double)local_98) {
      pvVar6 = _pthread_getspecific(pVar10);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(local_98,SUB84(DAT_0238fee8,0));
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar6 = _pthread_getspecific(pVar10);
    plVar12 = plVar8;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar12 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar12 + 0x410))(*(undefined8 *)(unaff_RDI + 0xf0),0);
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_108 = '\0';
  local_f8 = '\0';
  pVar10 = 0;
  local_110 = plVar8;
  local_100 = plVar5;
  FUN_013f8740(0,&local_100);
  plVar2 = local_70;
  plVar12 = local_38;
  if (local_70 == plVar5) {
joined_r0x0126a8e5:
    local_38 = plVar12;
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar12 = plVar2;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (local_38 != (longlong *)0x0) {
        local_38 = plVar2;
        FUN_00d50b20();
        plVar12 = local_38;
      }
      goto joined_r0x0126a8e5;
    }
    if (local_38 != (longlong *)0x0) {
      local_38 = local_70;
      FUN_00d50b20();
    }
    local_68 = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = plVar12;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0126a949:
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb720();
  plVar5 = (longlong *)(unaff_RDI + 0x188);
  FUN_00d64850();
  plVar8 = (longlong *)*plVar5;
  if (plVar8 != local_38) {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *plVar5 = (longlong)local_38;
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  lVar7 = FUN_00e8b990();
  if (lVar7 != 0) {
    FUN_00e8b990();
    local_e8 = 0;
    local_f0 = *plVar5;
    if (local_f0 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    FUN_00cb00c0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = local_38;
  if (((char)local_88 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


