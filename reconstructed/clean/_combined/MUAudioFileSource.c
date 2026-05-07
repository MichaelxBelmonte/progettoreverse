// ===================================================================
// MUAudioFileSource — Complete reconstructed pseudocode
// 98 functions
// ===================================================================


// ============================================================
// 0047dd70
// ============================================================
// Function: FUN_0047dd70
// Address: 0047dd70
// Size: 11519 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"
//   "%@: %.0f hz %@"
//   "MUCustomAudioSource"

void FUN_0047dd70(void* param_1,uint64_t param_2)

{
  int64_t ****pppplVar1;
  char cVar2;
  byte bVar3;
  uint8_t uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t **pplVar10;
  int64_t lVar11;
  int64_t ******pppppplVar12;
  undefined7 uVar14;
  int64_t *******ppppppplVar13;
  void* pVar15;
  int64_t *******ppppppplVar16;
  int64_t ******pppppplVar17;
  int64_t *****ppppplVar18;
  int64_t *******ppppppplVar19;
  int64_t *******this_ptr;
  uint64_t unaff_R13;
  uint64_t uVar20;
  int64_t *******unaff_R14;
  int64_t *******ppppppplVar21;
  int64_t *******ppppppplVar22;
  uint64_t uVar23;
  bool bVar24;
  uint32_t uVar25;
  float fVar26;
  uint64_t uVar27;
  uint64_t extraout_XMM0_Qa;
  uint uVar28;
  int64_t *******local_228;
  int64_t *******local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t *******local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  uint32_t local_164;
  uint64_t local_160;
  int64_t *******local_158;
  char local_150;
  int64_t *******local_148;
  char local_140;
  int64_t *******local_138;
  char local_130;
  int64_t *******local_128;
  char local_120;
  uint64_t local_118;
  uint64_t local_110;
  uint32_t local_104;
  int64_t ******local_100;
  uint64_t local_f8;
  int64_t *local_f0;
  char local_e8;
  int local_dc;
  uint64_t local_d8;
  int64_t *******local_d0;
  int64_t ******local_c8;
  int64_t *******local_c0;
  uint64_t local_b8;
  int64_t *******local_b0;
  char local_a8;
  int64_t *******local_a0;
  char local_98 [8];
  int64_t *******local_90;
  uint64_t local_88;
  uint64_t local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  int64_t *******local_60;
  int64_t *******local_58;
  int64_t *******local_50;
  int64_t ******local_48;
  
  uVar28 = (uint)((uint64_t)param_2 >> 0x20);
  local_48 = this_ptr[0x23];
  if (local_48 == (int64_t ******)0x0) {
    local_110 = 0;
    local_100 = (int64_t ******)0x0;
    local_118 = 0;
    local_50 = (int64_t *******)0x0;
  }
  else {
    FUN_00d50b00();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    ppppppplVar21 = (int64_t *******)&local_a0;
    FUN_01320d00();
    ppppppplVar19 = local_a0;
    if ((g_026fdd70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      g_026e3238 = FUN_00115af0();
      g_026e3220 = "MUAudioFileSource";
      g_026e3228 = 0xa0;
      g_026e3230 = FUN_00136df0;
      g_026e3240 = 0;
      ram_00000000026e3248 = 0;
      g_026e3250 = 0;
      ram_00000000026e3258 = 0;
      g_026e3260 = 0;
      ram_00000000026e3268 = 0;
      g_026e3270 = 0;
      ram_00000000026e3278 = 0;
      g_026e3280 = 0;
      ram_00000000026e3288 = 0;
      g_026e3290 = 0;
      ram_00000000026e3298 = 0;
      g_026e32a0 = 0;
      ram_00000000026e32a8 = 0;
      g_026e32b0 = 0;
      ram_00000000026e32b8 = 0;
      g_026e32c0 = 0;
      ram_00000000026e32c8 = 0;
      g_026e32d0 = 0;
      ram_00000000026e32d8 = 0;
      g_026e32e0 = 0;
      ___cxa_guard_release();
    }
    if (ppppppplVar19 == (int64_t *******)0x0) {
LAB_0047de23:
      ppppppplVar21 = (int64_t *******)&g_02802688;
    }
    else {
      (*(*ppppppplVar19)[0x6c])();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_0047de23;
    }
    ppppppplVar19 = (int64_t *******)*ppppppplVar21;
    local_50 = ppppppplVar19;
    ppppppplVar16 = ppppppplVar19;
    if (ppppppplVar19 == (int64_t *******)0x0) {
      local_118 = 0;
      local_50 = (int64_t *******)0x0;
    }
    else {
      if (*(char *)(ppppppplVar21 + 1) == '\0') {
        ppppppplVar19 = (int64_t *******)FUN_00d50b00();
      }
      else {
        *(void*)(ppppppplVar21 + 1) = 0;
      }
      local_118 = CONCAT71((int7)((uint64_t)ppppppplVar19 >> 8),1);
    }
    pVar15 = (void*)ppppppplVar16;
    if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 == (int64_t *******)0x0) {
      pvVar7 = _pthread_getspecific(pVar15);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      ppppppplVar21 = (int64_t *******)&local_a0;
      FUN_01320d00();
      ppppppplVar19 = local_a0;
      if ((g_0272a620 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_02799028 = FUN_00115af0();
        g_02799010 = "MUCustomAudioSource";
        g_02799018 = 0x78;
        g_02799020 = FUN_0049c5f0;
        g_02799030 = 0;
        ram_0000000002799038 = 0;
        g_02799040 = 0;
        ram_0000000002799048 = 0;
        g_02799050 = 0;
        ram_0000000002799058 = 0;
        g_02799060 = 0;
        ram_0000000002799068 = 0;
        g_02799070 = 0;
        ram_0000000002799078 = 0;
        g_02799080 = 0;
        ram_0000000002799088 = 0;
        g_02799090 = 0;
        ram_0000000002799098 = 0;
        g_027990a0 = 0;
        ram_00000000027990a8 = 0;
        g_027990b0 = 0;
        ram_00000000027990b8 = 0;
        g_027990c0 = 0;
        ram_00000000027990c8 = 0;
        g_027990d0 = 0;
        ___cxa_guard_release();
      }
      if (ppppppplVar19 == (int64_t *******)0x0) {
LAB_0047e0c1:
        ppppppplVar21 = (int64_t *******)&g_02802688;
      }
      else {
        (*(*ppppppplVar19)[0x6c])();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_0047e0c1;
      }
      pppppplVar12 = *ppppppplVar21;
      pppppplVar17 = pppppplVar12;
      if (pppppplVar12 == (int64_t ******)0x0) {
        local_110 = 0;
        local_100 = (int64_t ******)0x0;
      }
      else {
        local_100 = pppppplVar12;
        if (*(char *)(ppppppplVar21 + 1) == '\0') {
          pppppplVar12 = (int64_t ******)FUN_00d50b00();
        }
        else {
          *(void*)(ppppppplVar21 + 1) = 0;
        }
        local_110 = CONCAT71((int7)((uint64_t)pppppplVar12 >> 8),1);
      }
      pVar15 = (void*)pppppplVar17;
      if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_110 = 0;
      local_100 = (int64_t ******)0x0;
    }
    FUN_0048a720();
    pvVar7 = _pthread_getspecific(pVar15);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      pVar15 = (void*)local_48;
    }
    uVar5 = FUN_013d8010();
    unaff_R13 = (uint64_t)uVar5;
    pvVar7 = _pthread_getspecific(pVar15);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_013d80e0();
    unaff_R14 = (int64_t *******)(uint64_t)uVar5;
  }
  bVar3 = FUN_00742b20();
  *(byte *)(this_ptr + 0x4f) = bVar3 ^ 1;
  *(void*)((int64_t)this_ptr + 0x279) = 0;
  if ((local_48 == (int64_t ******)0x0) ||
     (local_50 == (int64_t *******)0x0 && local_100 == (int64_t ******)0x0)) {
    local_d8 = 0;
    local_c0 = (int64_t *******)0x0;
    ppppppplVar21 = this_ptr;
    goto LAB_0047ee34;
  }
  ppppppplVar21 = this_ptr;
  FUN_01f27fe0();
  uVar9 = (*(*local_a0)[0x8a])();
  ppppppplVar19 = (int64_t *******)(uVar9 & 0xffffffff);
  if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((char)ppppppplVar19 == '\0') {
    local_d8 = 0;
    local_c0 = (int64_t *******)0x0;
  }
  else {
    pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      ppppppplVar21 = local_50;
    }
    FUN_0123abe0();
    ppppppplVar19 = local_b0;
    local_150 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != (int64_t *******)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_150 = '\x01';
    local_158 = ppppppplVar19;
    FUN_014fff90();
    unaff_R14 = local_a0;
    if (local_98[0] == '\0') {
      if (((local_a0 != (int64_t *******)0x0) && (FUN_00d50b00(), local_98[0] != '\0')) &&
         (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_98[0] = '\0';
    }
    if ((local_150 != '\0') && (local_158 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    local_d0 = unaff_R14;
    if ((unaff_R14 != (int64_t *******)0x0) &&
       (cVar2 = (*(*unaff_R14)[0x73])(), cVar2 != '\0')) {
      *(void*)((int64_t)this_ptr + 0x27b) = 1;
    }
    pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      ppppppplVar21 = local_50;
    }
    FUN_0123b100();
    if (local_a0 == (int64_t *******)0x0) {
      ppppppplVar19 = (int64_t *******)0x0;
    }
    else {
      pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        ppppppplVar21 = local_50;
      }
      FUN_0123b100();
      FUN_00b8c7f0();
      ppppppplVar19 =
           (int64_t *******)
           CONCAT71((int7)((uint64_t)ppppppplVar19 >> 8),local_b0 != (int64_t *******)0x0);
      if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (CONCAT71(local_f0._1_7_,(char)local_f0) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((char)ppppppplVar19 != '\0') {
      *(void*)((int64_t)this_ptr + 0x27c) = 1;
    }
    local_98[0] = '\0';
    local_a0 = (int64_t *******)0x0;
    FUN_00da5ad0();
    local_90 = local_b0;
    if (local_a8 == '\0') {
      local_88 = local_88 & 0xffffffffffffff00;
    }
    else {
      local_88 = CONCAT71(local_88._1_7_,1);
      local_a8 = '\0';
    }
    local_80 = FUN_00da7170();
    FUN_00da7180();
    local_dc = CONCAT31(local_dc._1_3_,(char)unaff_R13);
    if (local_90 == (int64_t *******)0x0) {
      local_d8 = 0;
      ppppppplVar21 = (int64_t *******)0x0;
    }
    else {
      unaff_R14 = (int64_t *******)&local_148;
      unaff_R13 = 0;
      ppppppplVar16 = (int64_t *******)0x0;
      do {
        pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        local_140 = 0;
        ppppppplVar19 = (int64_t *******)CONCAT71(local_f0._1_7_,(char)local_f0);
        if (local_e8 == '\0') {
          if (ppppppplVar19 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e8 = '\0';
        }
        local_140 = '\x01';
        local_148 = ppppppplVar19;
        uVar4 = FUN_00742b20();
        FUN_01500530((int64_t)this_ptr + 0x27a,uVar4);
        local_c0 = local_b0;
        cVar2 = (char)unaff_R13;
        ppppppplVar21 = local_b0;
        if (ppppppplVar16 == local_b0) {
          local_d8 = unaff_R13;
          ppppppplVar22 = ppppppplVar16;
          if ((cVar2 == '\0') && (ppppppplVar16 != (int64_t *******)0x0)) {
            if (local_a8 != '\0') goto LAB_0047e51a;
            local_d8 = CONCAT71((int7)((uint64_t)local_b0 >> 8),1);
            unaff_R13 = 0;
            FUN_00d50b00();
          }
joined_r0x0047e582:
          local_c0 = ppppppplVar22;
          if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_a8 == '\0') {
            uVar27 = 0;
            if (local_b0 != (int64_t *******)0x0) {
              uVar27 = FUN_00d50b00();
            }
            local_d8 = CONCAT71((int7)((uint64_t)uVar27 >> 8),1);
            ppppppplVar22 = local_c0;
            if ((cVar2 != '\0') && (ppppppplVar16 != (int64_t *******)0x0)) {
              FUN_00d50b20();
              ppppppplVar22 = local_c0;
            }
            goto joined_r0x0047e582;
          }
          ppppppplVar22 = local_c0;
          if ((cVar2 != '\0') && (ppppppplVar16 != (int64_t *******)0x0)) {
            ppppppplVar21 = (int64_t *******)FUN_00d50b20();
            ppppppplVar22 = local_c0;
          }
LAB_0047e51a:
          local_c0 = ppppppplVar22;
          local_a8 = '\0';
          local_d8 = CONCAT71((int7)((uint64_t)ppppppplVar21 >> 8),1);
        }
        if ((local_140 != '\0') && (local_148 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (CONCAT71(local_f0._1_7_,(char)local_f0) != 0)) {
          FUN_00d50b20();
        }
        *(bool *)((int64_t)this_ptr + 0x279) = local_c0 != (int64_t *******)0x0;
        FUN_00da7180();
        ppppppplVar21 = local_c0;
        if (local_90 == (int64_t *******)0x0) break;
        local_90 = (int64_t *******)0x0;
        if ((char)local_88 == '\0') {
          local_88 = local_88 & 0xffffffffffffff00;
          break;
        }
        FUN_00d50b20();
        local_88 = local_88 & 0xffffffffffffff00;
        unaff_R13 = local_d8 & 0xffffffff;
        ppppppplVar21 = local_c0;
        ppppppplVar16 = local_c0;
      } while (local_90 != (int64_t *******)0x0);
    }
    local_90 = (int64_t *******)0x0;
    local_c0 = ppppppplVar21;
    if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),(uint8_t)local_dc);
    if (local_d0 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_50 != (int64_t *******)0x0) {
    unaff_R14 = (int64_t *******)&g_02802558;
    pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      ppppppplVar21 = local_50;
    }
    FUN_0123b100();
    ppppppplVar19 = local_a0;
    if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (ppppppplVar19 != (int64_t *******)0x0) {
      pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        ppppppplVar21 = local_50;
      }
      FUN_0123b100();
      iVar6 = FUN_00b88630();
      uVar14 = (undefined7)((uint64_t)ppppppplVar19 >> 8);
      ppppppplVar19 = (int64_t *******)CONCAT71(uVar14,1);
      if (iVar6 != 2) {
        pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          ppppppplVar21 = local_50;
        }
        FUN_0123b100();
        iVar6 = FUN_00b88630();
        ppppppplVar19 = (int64_t *******)CONCAT71(uVar14,iVar6 == 3);
        if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((char)ppppppplVar19 != '\0') {
        *(void*)(this_ptr + 0x4f) = 1;
      }
    }
  }
  FUN_0048a5a0();
  local_d0 = local_a0;
  if ((((local_98[0] == '\0') && (local_a0 != (int64_t *******)0x0)) &&
      (FUN_00d50b00(), local_98[0] != '\0')) && (local_a0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_0048b260();
  ppppppplVar16 = local_a0;
  local_220 = local_a0;
  if (local_98[0] == '\0') {
    if (local_a0 != (int64_t *******)0x0) {
      FUN_00d50b00();
      ppppppplVar19 = ppppppplVar16;
      goto LAB_0047e910;
    }
LAB_0047e954:
    ppppppplVar21 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar21 >> 8),1);
  }
  else {
    if (local_a0 == (int64_t *******)0x0) goto LAB_0047e954;
LAB_0047e910:
    uVar25 = (**(code **)(&UNK_00001778 + (int64_t)*ppppppplVar16))();
    local_60 = (int64_t *******)CONCAT44(local_60._4_4_,uVar25);
    (*(*this_ptr[0x28])[0x125])();
    (*(*this_ptr[0x24])[0x125])();
    ppppppplVar21 = (int64_t *******)0x0;
  }
  pppppplVar12 = this_ptr[0x1d];
  local_64 = SUB84(ppppppplVar21,0);
  if (((pppppplVar12 == (int64_t ******)0x0) || (this_ptr[0x1e] == (int64_t ******)0x0)) ||
     ((this_ptr[0x1f] == (int64_t ******)0x0 || (this_ptr[0x20] == (int64_t ******)0x0)))) {
    local_60 = (int64_t *******)0x0;
    ppppppplVar16 = (int64_t *******)0x0;
  }
  else {
    local_dc = *(int *)((int64_t)local_d0 + 0xc);
    if (local_dc == 1) {
      FUN_00d23310();
      ppppppplVar16 = local_a0;
      ppppppplVar19 = (int64_t *******)local_98;
      ppppppplVar21 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar21 >> 8),local_98[0]);
      ppppppplVar22 = (int64_t *******)&local_b0;
      if (local_98[0] != '\0') {
        ppppppplVar22 = ppppppplVar19;
      }
      local_b0 = (int64_t *******)CONCAT71(local_b0._1_7_,local_98[0]);
      *(char *)ppppppplVar22 = '\0';
      if ((local_98[0] != '\0') && (ppppppplVar16 != (int64_t *******)0x0)) {
        ppppppplVar19 = (int64_t *******)FUN_00d50b20();
      }
      if (ppppppplVar16 == (int64_t *******)0x0) {
        ppppppplVar16 = (int64_t *******)0x0;
        local_60 = (int64_t *******)0x0;
      }
      else {
        local_60 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar19 >> 8),1);
        if ((char)local_b0 == '\0') {
          FUN_00d50b00();
        }
      }
      bVar24 = (unaff_R13 & 1) == 0;
      pppppplVar12 = this_ptr[0x1d];
    }
    else {
      local_60 = (int64_t *******)0x0;
      ppppppplVar16 = (int64_t *******)0x0;
      bVar24 = false;
    }
    (*(*pppppplVar12)[0x133])();
    (*(*this_ptr[0x1e])[0x133])();
    (*(*this_ptr[0x1f])[0x133])();
    pppppplVar12 = this_ptr[0x20];
    if (ppppppplVar16 == (int64_t *******)0x0) {
      ppppppplVar21 = (int64_t *******)0x0;
    }
    else {
      pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar6 = FUN_01326de0();
      ppppppplVar21 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar21 >> 8),1);
      if (iVar6 != 2) {
        pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_01326de0();
        ppppppplVar21 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar21 >> 8),iVar6 == 4)
        ;
      }
    }
    uVar27 = (*(*pppppplVar12)[0x133])();
    pppppplVar12 = this_ptr[0x49];
    if (pppppplVar12 != (int64_t ******)0x0) {
      (*(*this_ptr[0x20])[0x134])();
      ppppppplVar21 = (int64_t *******)*pppppplVar12;
      uVar27 = (*ppppppplVar21[0x133])();
    }
    lVar8 = g_02708728;
    unaff_R14 = (int64_t *******)this_ptr[0x1d];
    if (bVar24) {
      pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7bd0();
      (*(*unaff_R14)[0x125])();
      fVar26 = (float)(*(*this_ptr[0x26])[0x126])();
      if ((fVar26 != 0.0) || (NAN(fVar26))) {
LAB_0047fd46:
        uVar28 = 0;
        pppppplVar12 = (int64_t ******)0x0;
        ppppppplVar19 = (int64_t *******)0x0;
      }
      else {
        uVar27 = (*(*this_ptr[0x24])[0x126])();
        lVar8 = g_02708720;
        uVar28 = 0;
        if (((float)uVar27 != 0.0) || (NAN((float)uVar27))) goto LAB_0047fd46;
        if (g_02708720 != 0) {
          uVar27 = FUN_00d50b00();
        }
        local_218 = lVar8;
        local_210 = '\x01';
        FUN_01e57260(uVar27,&local_218);
        ppppppplVar19 = local_a0;
        if (local_a0 == (int64_t *******)0x0) {
          pppppplVar12 = (int64_t ******)0x0;
        }
        else {
          uVar14 = (undefined7)((uint64_t)unaff_R14 >> 8);
          if (local_98[0] == '\0') {
            FUN_00d50b00();
            pppppplVar12 = (int64_t ******)CONCAT71(uVar14,1);
            if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_98[0] = '\0';
            pppppplVar12 = (int64_t ******)CONCAT71(uVar14,1);
          }
        }
        if ((local_210 != '\0') && (local_218 != 0)) {
          FUN_00d50b20();
        }
      }
      local_200 = '\0';
      local_208 = 0;
      local_c8 = pppppplVar12;
      local_58 = ppppppplVar19;
      (*(*this_ptr[0x1d])[0xd5])();
      unaff_R13 = unaff_R13 & 0xffffffff;
      if ((local_200 != '\0') && (local_208 != 0)) {
        FUN_00d50b20();
      }
      ppppppplVar19 = (int64_t *******)&local_a0;
      (*(*this_ptr[0x1d])[0x138])();
      ppppppplVar22 = local_a0;
      FUN_0049bd70();
      if (ppppppplVar22 == (int64_t *******)0x0) {
LAB_0047febf:
        ppppppplVar19 = (int64_t *******)&g_02802688;
      }
      else {
        (*(*ppppppplVar22)[0x6c])();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_0047febf;
      }
      pppppplVar12 = *ppppppplVar19;
      if (*(char *)(ppppppplVar19 + 1) == '\0') {
        if (pppppplVar12 != (int64_t ******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(ppppppplVar19 + 1) = 0;
      }
      unaff_R14 = local_58;
      if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      ppppppplVar19 = (int64_t *******)pppppplVar12[10];
      if (ppppppplVar19 != unaff_R14) {
        if (unaff_R14 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
        pppppplVar12[10] = (int64_t *****)unaff_R14;
        if (ppppppplVar19 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (((char)local_c8 != '\0') && (unaff_R14 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_02708728 != 0) {
        uVar27 = FUN_00d50b00();
      }
      local_1f8 = lVar8;
      local_1f0 = '\x01';
      FUN_01e57260(uVar27,&local_1f8);
      ppppppplVar19 = local_a0;
      local_130 = 0;
      if (local_98[0] == '\0') {
        if (local_a0 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98[0] = '\0';
      }
      local_130 = '\x01';
      local_138 = ppppppplVar19;
      (*(*unaff_R14)[0xd5])();
      if ((local_130 != '\0') && (local_138 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
    }
    pVar15 = (void*)ppppppplVar21;
    if (local_dc == 1) {
      pppppplVar12 = this_ptr[0x1e];
      pvVar7 = _pthread_getspecific(pVar15);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7ca0();
      (*(*pppppplVar12)[0x125])();
      pppppplVar12 = this_ptr[0x1f];
      pvVar7 = _pthread_getspecific(pVar15);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7d70();
      (*(*pppppplVar12)[0x125])();
      pppppplVar12 = this_ptr[0x20];
      pvVar7 = _pthread_getspecific(pVar15);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7e40();
      (*(*pppppplVar12)[0x125])();
      local_dc = CONCAT31(local_dc._1_3_,(char)unaff_R13);
      local_f8 = 0;
      local_c8 = (int64_t ******)0x0;
      uVar27 = (*(*this_ptr[0x24])[0x126])();
      lVar8 = g_02708730;
      if ((float)uVar27 <= 0.0) {
        if (g_02708730 != 0) {
          uVar27 = FUN_00d50b00();
        }
        local_1e8 = lVar8;
        local_1e0 = '\x01';
        FUN_01e57260(uVar27,&local_1e8);
        ppppppplVar21 = local_a0;
        if (local_a0 == (int64_t *******)0x0) {
          ppppppplVar21 = (int64_t *******)0x0;
          uVar9 = 0;
        }
        else if (local_98[0] == '\0') {
          FUN_00d50b00();
          uVar9 = 1;
          if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98[0] = '\0';
          uVar9 = 1;
        }
        if ((local_1e0 != '\0') && (local_1e8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar9 = 0;
        ppppppplVar21 = (int64_t *******)0x0;
      }
      ppppppplVar19 = (int64_t *******)&local_a0;
      local_58 = ppppppplVar21;
      (*(*this_ptr[0x1e])[0x138])();
      ppppppplVar21 = local_a0;
      FUN_0049bd70();
      if (ppppppplVar21 == (int64_t *******)0x0) {
LAB_00480183:
        ppppppplVar19 = (int64_t *******)&g_02802688;
      }
      else {
        (*(*ppppppplVar21)[0x6c])();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_00480183;
      }
      pppppplVar12 = *ppppppplVar19;
      if (pppppplVar12 == (int64_t ******)0x0) {
        local_104 = 1;
        local_160 = 0;
        local_f8 = 0;
        local_c8 = (int64_t ******)0x0;
      }
      else {
        local_c8 = pppppplVar12;
        if (*(char *)(ppppppplVar19 + 1) == '\0') {
          pppppplVar12 = (int64_t ******)FUN_00d50b00();
        }
        else {
          *(void*)(ppppppplVar19 + 1) = 0;
        }
        uVar14 = (undefined7)((uint64_t)pppppplVar12 >> 8);
        local_160 = CONCAT71(uVar14,1);
        local_104 = 0;
        local_f8 = CONCAT71(uVar14,1);
      }
      if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      ppppppplVar22 = local_58;
      ppppppplVar21 = (int64_t *******)local_c8[10];
      if (ppppppplVar21 != local_58) {
        if (local_58 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
        local_c8[10] = (int64_t *****)ppppppplVar22;
        if (ppppppplVar21 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
      }
      uVar27 = (*(*this_ptr[0x24])[0x126])();
      lVar8 = g_02708738;
      cVar2 = (char)uVar9;
      local_b8 = uVar9;
      if (0.0 <= (float)uVar27) {
        if (g_02708738 != 0) {
          uVar27 = FUN_00d50b00();
        }
        local_1d8 = lVar8;
        local_1d0 = '\x01';
        uVar27 = FUN_01e57260(uVar27,&local_1d8);
        ppppppplVar21 = local_a0;
        if (local_a0 == local_58) {
          if ((cVar2 == '\0') && (local_58 != (int64_t *******)0x0)) {
            ppppppplVar21 = local_58;
            if (local_98[0] != '\0') goto LAB_00480325;
            local_b8 = CONCAT71((int7)((uint64_t)uVar27 >> 8),1);
            FUN_00d50b00();
          }
LAB_00480399:
          ppppppplVar21 = local_58;
          if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_98[0] == '\0') {
            if (local_a0 != (int64_t *******)0x0) {
              uVar27 = FUN_00d50b00();
            }
            local_b8 = CONCAT71((int7)((uint64_t)uVar27 >> 8),1);
            if ((cVar2 == '\0') || (local_58 == (int64_t *******)0x0)) {
              local_58 = ppppppplVar21;
            }
            else {
              local_58 = ppppppplVar21;
              FUN_00d50b20();
            }
            goto LAB_00480399;
          }
          if ((cVar2 != '\0') && (local_58 != (int64_t *******)0x0)) {
            local_58 = local_a0;
            uVar27 = FUN_00d50b20();
          }
LAB_00480325:
          local_98[0] = '\0';
          local_b8 = CONCAT71((int7)((uint64_t)uVar27 >> 8),1);
        }
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (ppppppplVar22 == (int64_t *******)0x0) {
        ppppppplVar21 = (int64_t *******)0x0;
      }
      else if (cVar2 == '\0') {
        local_b8 = 0;
        ppppppplVar21 = (int64_t *******)0x0;
      }
      else {
        local_b8 = 0;
        ppppppplVar21 = (int64_t *******)0x0;
        FUN_00d50b20();
      }
      ppppppplVar22 = (int64_t *******)&local_a0;
      local_58 = ppppppplVar21;
      (*(*this_ptr[0x1f])[0x138])();
      ppppppplVar21 = local_a0;
      ppppppplVar13 = (int64_t *******)FUN_0049bd70();
      if (ppppppplVar21 == (int64_t *******)0x0) {
LAB_00480428:
        ppppppplVar22 = (int64_t *******)&g_02802688;
      }
      else {
        (*(*ppppppplVar21)[0x6c])();
        cVar2 = FUN_00e85ea0();
        ppppppplVar19 = ppppppplVar13;
        if (cVar2 == '\0') goto LAB_00480428;
      }
      pppppplVar12 = *ppppppplVar22;
      uVar14 = (undefined7)((uint64_t)ppppppplVar19 >> 8);
      if (pppppplVar12 == local_c8) {
        if (((byte)local_104 & pppppplVar12 != (int64_t ******)0x0) == 1) {
          if (*(char *)(ppppppplVar22 + 1) != '\0') goto LAB_00480481;
          uVar9 = CONCAT71(uVar14,1);
          FUN_00d50b00();
        }
        else {
          uVar9 = local_f8 & 0xffffffff;
        }
      }
      else {
        if (*(char *)(ppppppplVar22 + 1) == '\0') {
          if (pppppplVar12 != (int64_t ******)0x0) {
            FUN_00d50b00();
          }
          uVar9 = CONCAT71(uVar14,1);
          if ((char)local_160 != '\0') {
            local_c8 = pppppplVar12;
            FUN_00d50b20();
            goto LAB_004804db;
          }
        }
        else {
          local_c8 = pppppplVar12;
          if ((char)local_160 != '\0') {
            FUN_00d50b20();
            local_c8 = pppppplVar12;
          }
LAB_00480481:
          *(void*)(ppppppplVar22 + 1) = 0;
          pppppplVar12 = local_c8;
        }
        uVar9 = CONCAT71(uVar14,1);
        local_c8 = pppppplVar12;
      }
LAB_004804db:
      if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      ppppppplVar19 = local_58;
      ppppppplVar21 = (int64_t *******)local_c8[10];
      if (ppppppplVar21 != local_58) {
        if (local_58 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
        local_c8[10] = (int64_t *****)ppppppplVar19;
        if (ppppppplVar21 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
      }
      uVar23 = local_b8;
      local_f8 = uVar9 & 0xffffffff;
      pVar15 = (void*)uVar9;
      uVar27 = (*(*this_ptr[0x25])[0x126])();
      uVar20 = local_b8;
      if (((float)uVar27 != 0.0) || (NAN((float)uVar27))) {
LAB_00480606:
        uVar20 = uVar23;
        uVar28 = 0;
        if (ppppppplVar19 == (int64_t *******)0x0) {
          ppppppplVar19 = (int64_t *******)0x0;
        }
        else if ((char)local_b8 == '\0') {
          local_b8 = 0;
          ppppppplVar19 = (int64_t *******)0x0;
        }
        else {
          uVar20 = uVar20 & 0xffffffffffffff00;
          local_b8 = 0;
          ppppppplVar19 = (int64_t *******)0x0;
          local_f8 = uVar9 & 0xffffffff;
          uVar27 = FUN_00d50b20();
        }
      }
      else {
        local_f8 = uVar9 & 0xffffffff;
        pVar15 = (void*)uVar9;
        uVar27 = (*(*this_ptr[0x24])[0x126])();
        lVar8 = g_02708740;
        uVar28 = 0;
        uVar23 = uVar20;
        if (((float)uVar27 != 0.0) || (NAN((float)uVar27))) goto LAB_00480606;
        if (g_02708740 != 0) {
          uVar27 = FUN_00d50b00();
        }
        local_1c8 = lVar8;
        local_1c0 = '\x01';
        uVar27 = FUN_01e57260(uVar27,&local_1c8);
        ppppppplVar19 = local_a0;
        uVar14 = (undefined7)((uint64_t)ppppppplVar21 >> 8);
        if (local_a0 == local_58) {
          if (((char)local_b8 == '\0') && (local_58 != (int64_t *******)0x0)) {
            ppppppplVar19 = local_58;
            if (local_98[0] != '\0') goto LAB_00480669;
            uVar23 = CONCAT71(uVar14,1);
            uVar27 = FUN_00d50b00();
          }
          else {
            uVar23 = local_b8 & 0xffffffff;
          }
LAB_004806cf:
          ppppppplVar19 = local_58;
          if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
            uVar27 = FUN_00d50b20();
          }
        }
        else {
          if (local_98[0] == '\0') {
            if (local_a0 != (int64_t *******)0x0) {
              uVar27 = FUN_00d50b00();
            }
            uVar23 = CONCAT71(uVar14,1);
            if (((char)local_b8 == '\0') || (local_58 == (int64_t *******)0x0)) {
              local_58 = ppppppplVar19;
            }
            else {
              local_58 = ppppppplVar19;
              uVar27 = FUN_00d50b20();
            }
            goto LAB_004806cf;
          }
          if (((char)local_b8 != '\0') && (local_58 != (int64_t *******)0x0)) {
            local_58 = local_a0;
            uVar27 = FUN_00d50b20();
          }
LAB_00480669:
          local_98[0] = '\0';
          uVar23 = CONCAT71(uVar14,1);
        }
        local_b8 = uVar23;
        if ((local_1c0 != '\0') && (local_1c8 != 0)) {
          uVar27 = FUN_00d50b20();
        }
      }
      lVar8 = g_02708748;
      unaff_R14 = (int64_t *******)this_ptr[0x20];
      local_58 = ppppppplVar19;
      if (g_02708748 != 0) {
        uVar27 = FUN_00d50b00();
      }
      local_1b8 = lVar8;
      local_1b0 = '\x01';
      FUN_01e57260(uVar27,&local_1b8);
      ppppppplVar21 = local_58;
      unaff_R13 = CONCAT71((int7)(uVar20 >> 8),(uint8_t)local_dc);
      pvVar7 = _pthread_getspecific(pVar15);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7e40();
      local_164 = FUN_012a52b0();
      local_228 = ppppppplVar21;
      ppppppplVar21 = (int64_t *******)&local_228;
      uVar27 = FUN_0049c630(ppppppplVar21,&local_164,3);
      FUN_00d8cb40(uVar27,&local_a0);
      local_128 = local_b0;
      local_120 = 0;
      if (local_a8 == '\0') {
        if (local_b0 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      ppppppplVar19 = local_58;
      local_120 = '\x01';
      (*(*unaff_R14)[0xd5])();
      if ((local_120 != '\0') && (local_128 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      local_a0 = (int64_t *******)&g_024f9300;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      local_a0 = (int64_t *******)&g_024c5048;
      if (((char)local_88 != '\0') && (local_90 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (CONCAT71(local_f0._1_7_,(char)local_f0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_b8 != '\0') && (ppppppplVar19 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar9 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  if (this_ptr[0x27] != (int64_t ******)0x0) {
    if (ppppppplVar16 == (int64_t *******)0x0) {
      FUN_00d23310();
      ppppppplVar16 = local_a0;
      ppppppplVar21 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar21 >> 8),local_98[0]);
      ppppppplVar22 = (int64_t *******)&local_b0;
      if (local_98[0] != '\0') {
        ppppppplVar22 = (int64_t *******)local_98;
      }
      local_b0 = (int64_t *******)CONCAT71(local_b0._1_7_,local_98[0]);
      *(char *)ppppppplVar22 = '\0';
      if ((local_98[0] != '\0') && (ppppppplVar16 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar16 == (int64_t *******)0x0) {
        ppppppplVar16 = (int64_t *******)0x0;
        uVar9 = (uint64_t)local_60 & 0xffffffff;
      }
      else {
        uVar9 = CONCAT71((int7)((uint64_t)ppppppplVar19 >> 8),1);
        if ((char)local_b0 == '\0') {
          FUN_00d50b00();
        }
      }
      local_60 = (int64_t *******)(uVar9 & 0xffffffff);
    }
    pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_01326de0();
    if (iVar6 == 2) {
      bVar24 = false;
    }
    else {
      pvVar7 = _pthread_getspecific((void*)ppppppplVar21);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar6 = FUN_01326de0();
      bVar24 = iVar6 != 4;
    }
    (*(*this_ptr[0x27])[0x133])();
    if (bVar24) {
      FUN_0048b260();
      ppppppplVar19 = local_a0;
      if (local_98[0] == '\0') {
        if (local_a0 != (int64_t *******)0x0) {
          FUN_00d50b00();
          goto LAB_0047ebae;
        }
      }
      else if (local_a0 != (int64_t *******)0x0) {
LAB_0047ebae:
        uVar5 = (**(code **)(&g_00001798 + (int64_t)*ppppppplVar19))();
        unaff_R14 = (int64_t *******)(uint64_t)uVar5;
        uVar27 = (**(code **)(&g_000017a8 + (int64_t)*ppppppplVar19))();
        uVar5 = -(uint)((float)uVar27 <= g_02394270);
        FUN_0048b760(CONCAT44(~(uint)((uint64_t)uVar27 >> 0x20) & uVar28 & _UNK_02390144,
                              ~uVar5 & (uint)((float)((uint)SQRT((float)uVar27) & g_02390140) *
                                             g_023b3e00)) | (uint64_t)(g_023b3e04 & uVar5));
        FUN_00d50b20();
      }
    }
    else {
      (*(*this_ptr[0x27])[0x126])();
      FUN_0048b760();
    }
  }
  if (this_ptr[0x21] == (int64_t ******)0x0) {
LAB_0047ecde:
    pppppplVar12 = this_ptr[0x22];
  }
  else {
    pppplVar1 = (*this_ptr[0x21])[0x133];
    if ((*(int *)((int64_t)local_d0 + 0xc) != 1) ||
       (ppppppplVar21 = (int64_t *******)(unaff_R13 & 0xffffff01), (unaff_R13 & 1) != 0)) {
      (*pppplVar1)();
      goto LAB_0047ecde;
    }
    (*pppplVar1)();
    FUN_00d23310();
    ppppppplVar19 = local_a0;
    pVar15 = (void*)CONCAT71((int7)((uint64_t)ppppppplVar21 >> 8),local_98[0]);
    ppppppplVar21 = (int64_t *******)&local_b0;
    if (local_98[0] != '\0') {
      ppppppplVar21 = (int64_t *******)local_98;
    }
    local_b0 = (int64_t *******)CONCAT71(local_b0._1_7_,local_98[0]);
    *(char *)ppppppplVar21 = '\0';
    if ((local_98[0] != '\0') && (ppppppplVar19 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = (undefined7)((uint64_t)unaff_R14 >> 8);
    if (ppppppplVar19 == ppppppplVar16) {
      if (((char)local_60 == '\0') && (ppppppplVar19 != (int64_t *******)0x0)) {
        uVar9 = CONCAT71(uVar14,1);
        if ((char)local_b0 == '\0') {
          FUN_00d50b00();
        }
      }
      else if (((char)local_b0 == '\0') || (ppppppplVar19 == (int64_t *******)0x0)) {
        uVar9 = (uint64_t)local_60 & 0xffffffff;
      }
      else {
        FUN_00d50b20();
        uVar9 = (uint64_t)local_60 & 0xffffffff;
      }
    }
    else if ((char)local_b0 == '\0') {
      if (ppppppplVar19 != (int64_t *******)0x0) {
        FUN_00d50b00();
      }
      uVar9 = CONCAT71(uVar14,1);
      if (((char)local_60 == '\0') || (ppppppplVar16 == (int64_t *******)0x0)) goto LAB_0047ed52;
      FUN_00d50b20();
      ppppppplVar16 = ppppppplVar19;
    }
    else {
      uVar9 = CONCAT71(uVar14,1);
      if (((char)local_60 == '\0') || (ppppppplVar16 == (int64_t *******)0x0)) {
LAB_0047ed52:
        uVar9 = CONCAT71(uVar14,1);
        ppppppplVar16 = ppppppplVar19;
      }
      else {
        FUN_00d50b20();
        ppppppplVar16 = ppppppplVar19;
      }
    }
    pvVar7 = _pthread_getspecific(pVar15);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013d7f40();
    ppppppplVar21 = this_ptr;
    (*(*this_ptr[0x21])[0x123])();
    local_60 = (int64_t *******)(uVar9 & 0xffffffff);
    pppppplVar12 = this_ptr[0x22];
  }
  if (pppppplVar12 != (int64_t ******)0x0) {
    (*(*pppppplVar12)[0x123])();
  }
  if ((char)local_64 == '\0') {
    FUN_00d50b20();
  }
  ppppppplVar19 = local_d0;
  if (((char)local_60 != '\0') && (ppppppplVar16 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar19 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
LAB_0047ee34:
  pVar15 = (void*)ppppppplVar21;
  pppppplVar12 = this_ptr[0x33];
  if (pppppplVar12 != (int64_t ******)0x0) {
    if (this_ptr[0x23] == (int64_t ******)0x0) {
      uVar27 = FUN_00d6f370();
      local_1a8 = g_026f6e88;
      if (g_026f6e88 != 0) {
        uVar27 = FUN_00d50b00();
      }
      local_1a0 = '\x01';
      FUN_00d70f90(uVar27,1);
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      (*(*this_ptr[0x33])[0x123])();
    }
    else {
      pvVar7 = _pthread_getspecific(pVar15);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01390340();
      (*(*pppppplVar12)[0x123])();
    }
  }
  if (this_ptr[0x23] != (int64_t ******)0x0) {
    pvVar7 = _pthread_getspecific(pVar15);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01335010();
    pppppplVar12 = this_ptr[0x33];
    if (cVar2 == '\0') {
      ppppppplVar21 = this_ptr;
      if (pppppplVar12 != (int64_t ******)0x0) {
        (*(*pppppplVar12)[0x133])();
      }
      pVar15 = (void*)ppppppplVar21;
      if (this_ptr[0x34] != (int64_t ******)0x0) {
        (*(*this_ptr[0x34])[0x133])();
        FUN_01cee390();
      }
    }
    else {
      ppppppplVar21 = this_ptr;
      if (pppppplVar12 != (int64_t ******)0x0) {
        (*(*pppppplVar12)[0x133])();
      }
      pVar15 = (void*)ppppppplVar21;
      if (this_ptr[0x34] != (int64_t ******)0x0) {
        pvVar7 = _pthread_getspecific(pVar15);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134a7d0();
        ppppplVar18 = *this_ptr[0x34];
        (*ppppplVar18[0x133])();
        pVar15 = (void*)ppppplVar18;
        FUN_01cee390();
      }
    }
  }
  local_d0 = (int64_t *******)((uint64_t)local_d0 & 0xffffffff00000000);
  if (local_48 != (int64_t ******)0x0) {
    pvVar7 = _pthread_getspecific(pVar15);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      pVar15 = (void*)local_48;
    }
    cVar2 = FUN_01334f30();
    if (cVar2 != '\0') {
      FUN_0048b260();
      ppppppplVar21 = local_a0;
      if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar21 != (int64_t *******)0x0) {
        FUN_0048b260();
        ppppppplVar21 = local_a0;
        uVar25 = FUN_01953cb0();
        local_d0 = (int64_t *******)CONCAT44(local_d0._4_4_,uVar25);
        if ((local_98[0] != '\0') && (ppppppplVar21 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  (*(*this_ptr[0x46])[0x125])();
  (*(*this_ptr[0x45])[0x125])();
  (*(*this_ptr[0x4e])[0x133])();
  (*(*this_ptr[0x45])[0x133])();
  (*(*this_ptr[0x46])[0x133])();
  if (local_48 == (int64_t ******)0x0) {
    pVar15 = 0;
  }
  else {
    pvVar7 = _pthread_getspecific(pVar15);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_01326de0();
    pppppplVar12 = (int64_t ******)0x0;
    pVar15 = 0;
    if (iVar6 == 1) {
      pvVar7 = _pthread_getspecific(0);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pppppplVar12 = local_48;
      }
      FUN_0132dd90();
      pvVar7 = _pthread_getspecific((void*)pppppplVar12);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pppppplVar12 = local_48;
      }
      FUN_01334f30();
      pVar15 = (void*)CONCAT71((int7)((uint64_t)pppppplVar12 >> 8),1);
    }
  }
  (*(*this_ptr[0x47])[0x133])();
  (*(*this_ptr[0x47])[0x123])();
  (*(*this_ptr[0x48])[0x133])();
  (*(*this_ptr[0x48])[0x123])();
  pppppplVar12 = this_ptr[0x4a];
  if (pppppplVar12 != (int64_t ******)0x0) {
    (*(*this_ptr[0x27])[0x134])();
    ppppplVar18 = *pppppplVar12;
    (*ppppplVar18[0x133])();
    pVar15 = (void*)ppppplVar18;
  }
  pppppplVar12 = this_ptr[0x4b];
  if (pppppplVar12 != (int64_t ******)0x0) {
    (*(*this_ptr[0x26])[0x134])();
    ppppplVar18 = *pppppplVar12;
    (*ppppplVar18[0x133])();
    pVar15 = (void*)ppppplVar18;
  }
  pppppplVar12 = this_ptr[0x4c];
  if (pppppplVar12 != (int64_t ******)0x0) {
    (*(*this_ptr[0x24])[0x134])();
    ppppplVar18 = *pppppplVar12;
    (*ppppplVar18[0x133])();
    pVar15 = (void*)ppppplVar18;
  }
  pppppplVar12 = this_ptr[0x4d];
  if (pppppplVar12 != (int64_t ******)0x0) {
    (*(*this_ptr[0x25])[0x134])();
    ppppplVar18 = *pppppplVar12;
    (*ppppplVar18[0x133])();
    pVar15 = (void*)ppppplVar18;
  }
  FUN_0049a3e0();
  FUN_0048ba10();
  if (this_ptr[0x38] != (int64_t ******)0x0) {
    FUN_00d50b00();
    local_f0._0_1_ = '\0';
    ppppppplVar21 = this_ptr;
    local_b0 = this_ptr;
    do {
      (*(*ppppppplVar21)[0x6e])();
      ppppppplVar19 = local_a0;
      if (local_a0 == ppppppplVar21) {
        if ((((char)local_f0 == '\0') && (local_a0 != (int64_t *******)0x0)) &&
           (ppppppplVar19 = ppppppplVar21, local_98[0] != '\0')) goto LAB_0047f4a0;
      }
      else {
        local_b0 = local_a0;
        if (local_98[0] == '\0') {
          if ((char)local_f0 == '\0') {
            pplVar10 = &local_f0;
          }
          else {
            FUN_00d50b20();
            pplVar10 = &local_f0;
          }
        }
        else {
          if ((char)local_f0 != '\0') {
            FUN_00d50b20();
          }
LAB_0047f4a0:
          local_f0._0_1_ = '\x01';
          pplVar10 = (int64_t **)local_98;
        }
        *(char *)pplVar10 = '\0';
        ppppppplVar21 = ppppppplVar19;
      }
      if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      ppppppplVar19 = (int64_t *******)&g_02802688;
      if (ppppppplVar21 != (int64_t *******)0x0) {
        (*(*ppppppplVar21)[0x6c])();
        cVar2 = FUN_00e85ea0();
        ppppppplVar19 = (int64_t *******)&local_b0;
        if (cVar2 == '\0') {
          ppppppplVar19 = (int64_t *******)&g_02802688;
        }
      }
      if (*ppppppplVar19 != (int64_t ******)0x0) {
        if (((char)local_f0 == '\0') && (ppppppplVar21 != (int64_t *******)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_0047f565;
      }
    } while (ppppppplVar21 != (int64_t *******)0x0);
    ppppppplVar21 = (int64_t *******)0x0;
LAB_0047f565:
    pVar15 = (void*)ppppppplVar19;
    FUN_00d50b20();
    FUN_01d64cb0();
    ppppppplVar19 = local_a0;
    if ((((local_98[0] == '\0') && (local_a0 != (int64_t *******)0x0)) &&
        (FUN_00d50b00(), local_98[0] != '\0')) && (local_a0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d5deb0();
    pppppplVar12 = this_ptr[0x23];
    if (pppppplVar12 != (int64_t ******)0x0) {
      FUN_00d50b00();
    }
    uVar27 = FUN_0048d550();
    ppppppplVar16 = local_a0;
    if ((local_98[0] == '\0') && (local_a0 != (int64_t *******)0x0)) {
      uVar27 = FUN_00d50b00();
    }
    if (pppppplVar12 != (int64_t ******)0x0) {
      uVar27 = FUN_00d50b20();
    }
    if (ppppppplVar16 != (int64_t *******)0x0) {
      local_98[0] = '\0';
      local_a0 = (int64_t *******)0x0;
      local_d0 = ppppppplVar16;
      local_90 = ppppppplVar16;
      local_88 = 0xffffffff;
      local_80 = local_80 & 0xffffffff00000000;
      local_88._4_4_ = 0;
      local_60 = ppppppplVar21;
      while( true ) {
        if (local_88._4_4_ != 0) {
          if (local_88._4_4_ < 1) {
            iVar6 = -local_88._4_4_;
          }
          else {
            iVar6 = (int)local_88 - local_88._4_4_;
            local_88 = CONCAT44(local_88._4_4_,iVar6);
            uVar27 = FUN_00d23690();
            local_80 = CONCAT44(local_80._4_4_,(int)local_80 + local_88._4_4_);
            iVar6 = 0;
          }
          local_88 = CONCAT44(iVar6,(int)local_88);
        }
        lVar8 = g_027086e8;
        lVar11 = (int64_t)(int)local_88;
        iVar6 = (int)local_88 + 1;
        local_88 = CONCAT44(local_88._4_4_,iVar6);
        if (*(int *)((int64_t)local_90 + 0xc) <= iVar6) break;
        local_198 = (int64_t *******)local_90[2][lVar11 + 1];
        local_190 = '\0';
        local_a0 = local_198;
        if (g_027086e8 != 0) {
          uVar27 = FUN_00d50b00();
        }
        local_188 = lVar8;
        local_180 = '\x01';
        FUN_01d5d9b0(uVar27,&local_188);
        if ((local_180 != '\0') && (local_188 != 0)) {
          FUN_00d50b20();
        }
        if ((local_190 != '\0') && (local_198 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        iVar6 = FUN_01d5b230();
        FUN_01d5b240(extraout_XMM0_Qa,iVar6 + -1);
        uVar27 = FUN_01d65490();
        if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          uVar27 = FUN_00d50b20();
        }
      }
      ppppppplVar21 = local_90;
      FUN_00018280();
      pVar15 = (void*)ppppppplVar21;
      ppppppplVar16 = local_d0;
      ppppppplVar21 = local_60;
    }
    local_170 = '\0';
    local_178 = 0;
    FUN_01d65120();
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if (ppppppplVar16 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
    if (ppppppplVar19 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
    if (ppppppplVar21 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01e40eb0();
  ppppppplVar21 = local_a0;
  if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar21 != (int64_t *******)0x0) {
    FUN_0048f8a0();
  }
  FUN_01e40eb0();
  ppppppplVar21 = local_a0;
  if ((local_98[0] != '\0') && (local_a0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar21 != (int64_t *******)0x0) {
    (*(*this_ptr[0x58])[0x133])();
    (*(*this_ptr[0x59])[0x133])();
    (*(*this_ptr[0x5a])[0x133])();
    pppppplVar12 = this_ptr[0x58];
    if (local_48 != (int64_t ******)0x0) {
      pvVar7 = _pthread_getspecific(pVar15);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar15 = (void*)local_48;
      }
      FUN_013d91b0();
    }
    (*(*pppppplVar12)[0x123])();
    if (local_48 != (int64_t ******)0x0) {
      pvVar7 = _pthread_getspecific(pVar15);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar15 = (void*)local_48;
      }
      FUN_013d9210();
    }
    FUN_01d6ed40();
    if (local_48 != (int64_t ******)0x0) {
      pvVar7 = _pthread_getspecific(pVar15);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d9270();
    }
    FUN_01d6ed40();
  }
  if (((char)local_d8 != '\0') && (local_c0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_110 != '\0') && (local_100 != (int64_t ******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_118 != '\0') && (local_50 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t ******)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00157780
// ============================================================
// Function: FUN_00157780
// Address: 00157780
// Size: 7660 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"
//   "MULSSGenerator"

uint32_t FUN_00157780(int64_t *param_1)

{
  void* pVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  void*puVar9;
  void*puVar10;
  void* pVar11;
  int64_t *plVar12;
  int64_t **pplVar13;
  int64_t *plVar14;
  int64_t *arg1;
  int64_t *plVar15;
  int64_t this_ptr;
  int64_t *plVar16;
  bool bVar17;
  bool bVar18;
  uint32_t uVar19;
  int64_t *local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  void*local_1a0;
  char local_198;
  void*local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  plVar12 = param_1;
  (**(code **)(*(int64_t *)*arg1 + 0x628))();
  pVar11 = (void*)plVar12;
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  plVar12 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00157815;
    }
    if (*(int64_t *)(this_ptr + 0x80) != 0) {
      *(void*)(this_ptr + 0x80) = 0;
      goto LAB_0015785a;
    }
  }
  else {
    local_68 = '\0';
LAB_00157815:
    plVar14 = *(int64_t **)(this_ptr + 0x80);
    if (plVar14 != plVar12) {
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0x80) = plVar12;
      if (plVar14 != (int64_t *)0x0) {
LAB_0015785a:
        FUN_00d50b20();
      }
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  local_48 = local_70;
  if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  plVar12 = local_70;
  if (((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar11 = (void*)local_48;
  }
  FUN_012caf10();
  if (local_70 == (int64_t *)0x0) {
    bVar17 = true;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar11);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar11 = (void*)local_48;
    }
    FUN_012caf10();
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_016c2e90();
    bVar17 = iVar4 == 0;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar17) && (*(int64_t *)(this_ptr + 0xa0) != 0)) {
    FUN_00d50b00();
    lVar7 = *(int64_t *)(this_ptr + 0xa0);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_016c2e90();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar4 != 0) {
      pvVar6 = _pthread_getspecific(pVar11);
      if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        lVar7 = *(int64_t *)(this_ptr + 0xa0);
      }
      else {
        pVar11 = (void*)local_48;
        lVar7 = *(int64_t *)(this_ptr + 0xa0);
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_012cae50();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar7 = *(int64_t *)(this_ptr + 0x98);
  if (lVar7 != 0) {
    FUN_00d50b00();
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = lVar7;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar4 = -local_58._4_4_;
        }
        else {
          iVar4 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar4);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar4 = 0;
        }
        local_58 = CONCAT44(iVar4,(int)local_58);
      }
      lVar7 = (int64_t)(int)local_58;
      iVar4 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar4);
      if (*(int *)(local_60 + 0xc) <= iVar4) break;
      local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar7 * 8);
      pvVar6 = _pthread_getspecific((void*)*(int64_t *)(local_60 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb4b0();
      plVar14 = local_70;
      if ((g_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar13 = (int64_t **)&g_02802688;
      if (plVar14 != (int64_t *)0x0) {
        (**(code **)(*plVar14 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar13 = &local_70;
        if (cVar3 == '\0') {
          pplVar13 = (int64_t **)&g_02802688;
        }
      }
      plVar14 = *pplVar13;
      if (*(char *)(pplVar13 + 1) == '\0') {
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_00157d51;
        }
      }
      else {
        *(void*)(pplVar13 + 1) = 0;
        if (plVar14 != (int64_t *)0x0) {
LAB_00157d51:
          pVar11 = (void*)pplVar13;
          if (*param_1 != 0) {
            pvVar6 = _pthread_getspecific(pVar11);
            plVar15 = plVar14;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar15 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar15 + 0x478))();
            uVar19 = (**(code **)(*local_90 + 0x388))();
            plVar15 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (int64_t *)0x0) && (uVar19 = FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                uVar19 = FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              uVar19 = FUN_00d50b20();
            }
            local_200 = plVar15;
            local_1f8 = '\0';
            (**(code **)(*(int64_t *)*param_1 + 0x400))(uVar19,&local_200);
            plVar2 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            cVar3 = (**(code **)(*plVar2 + 0x398))();
            if (cVar3 == '\0') {
LAB_00157ed0:
              pvVar6 = _pthread_getspecific(pVar11);
              plVar16 = plVar14;
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar16 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              cVar3 = (**(code **)(*plVar16 + 0x498))();
              if (cVar3 != '\0') {
                pvVar6 = _pthread_getspecific(pVar11);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1d0 = plVar2;
                local_1c8 = '\0';
                FUN_0123bf80();
                if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_1f0 = plVar2;
              local_1e8 = '\0';
              cVar3 = FUN_00b80190();
              if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar3 == '\0') goto LAB_00157ed0;
              pvVar6 = _pthread_getspecific(pVar11);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_1e0 = plVar2;
              local_1d8 = '\0';
              FUN_0123ab70();
              if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
            if (plVar15 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          pvVar6 = _pthread_getspecific(pVar11);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar14 + 0x480))();
          FUN_00d50b20();
        }
      }
    }
    lVar7 = local_60;
    FUN_00115e00();
    pVar11 = (void*)lVar7;
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  pVar1 = (void*)plVar12;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar11 = pVar1;
  }
  FUN_015058d0();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  plVar14 = local_70;
  if (local_70 == (int64_t *)0x0) {
LAB_001582c2:
    if (*(int64_t *)(this_ptr + 0x90) == 0) {
      bVar17 = false;
    }
    else {
      FUN_00d50b00();
      lVar7 = *(int64_t *)(this_ptr + 0x90);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      bVar17 = local_f0 != 0;
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (plVar14 != (int64_t *)0x0) goto LAB_00158375;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar11);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar11 = pVar1;
    }
    FUN_015058d0();
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_0124ae30();
    if (iVar4 == 0) goto LAB_001582c2;
    bVar17 = false;
LAB_00158375:
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00d50b00();
    lVar7 = *(int64_t *)(this_ptr + 0x90);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    bVar18 = local_70 != (int64_t *)0x0;
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((bool)(bVar18 & (bVar17 ^ 1U))) {
      lVar7 = *(int64_t *)(this_ptr + 0x90);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_0124ae30();
      pvVar6 = _pthread_getspecific(pVar11);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar11 = pVar1;
      }
      FUN_015058d0();
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_0124ae30();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      bVar17 = (bool)(bVar17 | iVar5 < iVar4);
    }
    if (*(int64_t *)(this_ptr + 0x90) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      if (bVar17) {
        pvVar6 = _pthread_getspecific(pVar11);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          pVar11 = pVar1;
        }
        FUN_015058d0();
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = *(int64_t *)(this_ptr + 0x90);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_1a8 = '\x01';
        local_1b0 = lVar7;
        FUN_015127c0();
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_001563c0();
  lVar7 = *(int64_t *)(this_ptr + 0x88);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar11 = (void*)local_48;
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  local_c0 = local_70;
  local_b8 = 0;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_b8 = '\x01';
  FUN_012e8aa0();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = *(int64_t *)(this_ptr + 0x88);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar11 = (void*)local_48;
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  local_b0 = local_70;
  local_a8 = 0;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_a8 = '\x01';
  FUN_012e89e0();
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar13 = &local_70;
  FUN_012e78c0();
  plVar14 = local_70;
  if ((g_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    pVar11 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar14 != (int64_t *)0x0) {
    (**(code **)(*plVar14 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00158ace;
  }
  pplVar13 = (int64_t **)&g_02802688;
LAB_00158ace:
  plVar14 = *pplVar13;
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar14 == (int64_t *)0x0) {
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9[7] = 0;
    puVar9[8] = 0;
    pVar11 = 0x25d31f0;
    *puVar9 = &g_025d31f0;
    *(void*)(puVar9 + 9) = 0;
    puVar9[10] = 0;
    *(void*)(puVar9 + 0xb) = 0;
    *(void*)((int64_t)puVar9 + 0x5c) = 0;
    *(void*)((int64_t)puVar9 + 99) = 0;
    (*g_025d3208)();
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar10 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar11 = 0x2607248;
    *puVar10 = &g_02607248;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    *(void*)((int64_t)puVar10 + 0x76) = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[0x14] = 0;
    puVar10[0x15] = 0;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    puVar10[0x18] = 0;
    puVar10[0x19] = 0;
    puVar10[0x1a] = 0;
    (*g_02607260)();
    local_198 = '\x01';
    local_1a0 = puVar10;
    FUN_012c64a0();
    if ((local_198 != '\0') && (local_1a0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar7 = *(int64_t *)(this_ptr + 0x88);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_188 = '\0';
    local_190 = puVar9;
    FUN_012e7710();
    if ((local_188 != '\0') && (local_190 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar19 = FUN_01f27fe0();
  local_180 = *arg1;
  local_178 = '\0';
  FUN_000c4290(uVar19,&local_180);
  plVar14 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_001570d0();
  if (plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar11 = (void*)local_48;
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_d8 = 0;
  lVar7 = *(int64_t *)(this_ptr + 0x88);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_e0 = lVar7;
  FUN_012e66e0();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar11 = pVar1;
  }
  FUN_015058d0();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c8 = 0;
  lVar7 = *(int64_t *)(this_ptr + 0x90);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_d0 = lVar7;
  FUN_0150f1c0();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar19 = FUN_004405c0();
  local_170 = *(int64_t *)(this_ptr + 0x88);
  if (local_170 != 0) {
    uVar19 = FUN_00d50b00();
  }
  local_168 = '\x01';
  FUN_004b8020(uVar19,&local_170);
  plVar14 = local_70;
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar14 == (int64_t *)0x0) {
    FUN_004405c0();
    FUN_004b8a30();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_004405c0();
    local_160 = *(int64_t *)(this_ptr + 0x88);
    if (local_160 != 0) {
      FUN_00d50b00();
    }
    local_158 = '\x01';
    FUN_003b6860();
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = '\x01';
    FUN_004b7a60();
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_004405c0();
    FUN_004b8a40();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x628))();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *(int64_t *)(this_ptr + 0x88);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  lVar8 = *(int64_t *)(this_ptr + 0x90);
  local_150 = lVar7;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  lVar7 = *(int64_t *)(this_ptr + 0x98);
  local_140 = lVar8;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  plVar14 = &local_130;
  local_130 = lVar7;
  uVar19 = FUN_0131ba70(plVar14,&local_140,1,1);
  pVar11 = (void*)plVar14;
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00155070();
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar7 = *(int64_t *)(this_ptr + 0x90);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_118 = '\0';
    local_120 = 0;
    FUN_0150ceb0();
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    lVar7 = *(int64_t *)(this_ptr + 0x90);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_108 = '\0';
    local_110 = 0;
    FUN_0150c7f0();
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    lVar7 = *(int64_t *)(this_ptr + 0x90);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f8 = '\0';
    local_100 = 0;
    FUN_0150d0b0();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xa0) != 0) {
    *(void*)(this_ptr + 0xa0) = 0;
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar19;
}



// ============================================================
// 01c9b940
// ============================================================
// Function: FUN_01c9b940
// Address: 01c9b940
// Size: 5097 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_01c9b940(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t *******ppppppplVar4;
  int64_t *****ppppplVar5;
  int64_t *****ppppplVar6;
  bool bVar7;
  int64_t *******ppppppplVar8;
  char cVar9;
  bool bVar10;
  void* pVar11;
  void* pVar12;
  void* pVar13;
  int64_t lVar14;
  uint64_t uVar15;
  void *pvVar16;
  void* pVar17;
  int64_t **pplVar18;
  int64_t *******ppppppplVar19;
  int64_t ******pppppplVar20;
  int iVar21;
  int64_t *arg1;
  uint64_t uVar22;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  uint8_t local_118;
  int64_t local_110;
  int local_108;
  int iStack_104;
  int local_100;
  int64_t *****local_f8;
  char local_f0;
  int64_t *******local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *******local_c8;
  char local_c0;
  int64_t *******local_b8;
  uint64_t local_b0;
  int local_a8;
  int64_t *******local_a0;
  char local_98;
  int64_t *******local_90;
  uint64_t local_88;
  int local_80;
  uint64_t local_78;
  int64_t *******local_70;
  int64_t *****local_68;
  uint64_t local_60;
  int64_t *******local_58;
  int64_t *******local_50;
  int64_t *******local_48;
  char local_40;
  int64_t *******local_38;
  
  lVar14 = *(int64_t *)(*arg1 + 0x20);
  if (lVar14 != 0) {
    FUN_00d50b00();
    local_118 = 0;
    local_120 = (int64_t *)0x0;
    local_110 = lVar14;
    local_108 = -1;
    iStack_104 = 0;
    local_100 = 0;
    bVar10 = false;
    local_78 = param_2;
LAB_01c9b9c0:
    if (iStack_104 != 0) {
      if (iStack_104 < 1) {
        iStack_104 = -iStack_104;
      }
      else {
        local_108 = local_108 - iStack_104;
        FUN_00d23690();
        local_100 = local_100 + iStack_104;
        iStack_104 = 0;
      }
    }
    lVar14 = (int64_t)local_108;
    local_108 = local_108 + 1;
    if (local_108 < *(int *)(local_110 + 0xc)) {
      plVar3 = *(int64_t **)(*(int64_t *)(local_110 + 0x10) + 8 + lVar14 * 8);
      local_120 = plVar3;
      if ((g_026fdd70 == '\0') && (iVar21 = ___cxa_guard_acquire(), iVar21 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar18 = (int64_t **)&g_02802688;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x360))();
        cVar9 = FUN_00e85ea0();
        pplVar18 = &local_120;
        if (cVar9 == '\0') {
          pplVar18 = (int64_t **)&g_02802688;
        }
      }
      ppppppplVar19 = (int64_t *******)*pplVar18;
      local_70 = ppppppplVar19;
      if (*(char *)(pplVar18 + 1) == '\0') {
        if (ppppppplVar19 != (int64_t *******)0x0) {
          FUN_00d50b00();
          goto LAB_01c9baaa;
        }
LAB_01c9bb10:
        bVar7 = true;
      }
      else {
        *(void*)(pplVar18 + 1) = 0;
        if (ppppppplVar19 == (int64_t *******)0x0) goto LAB_01c9bb10;
LAB_01c9baaa:
        pvVar16 = _pthread_getspecific((void*)pplVar18);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        ppppppplVar19 = local_c8;
        if (local_c0 == '\0') {
          if (local_c8 != (int64_t *******)0x0) {
            FUN_00d50b00();
            if ((local_c0 != '\0') && (local_c8 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01c9bb50;
          }
        }
        else if (local_c8 != (int64_t *******)0x0) {
LAB_01c9bb50:
          local_c0 = '\0';
          local_c8 = (int64_t *******)0x0;
          local_b8 = ppppppplVar19;
          local_b0 = 0xffffffff;
          local_a8 = 0;
          local_b0._4_4_ = 0;
          local_60 = 0;
          local_58 = (int64_t *******)0x0;
          local_50 = ppppppplVar19;
          do {
            if (local_b0._4_4_ != 0) {
              if (local_b0._4_4_ < 1) {
                iVar21 = -local_b0._4_4_;
              }
              else {
                iVar21 = (int)local_b0 - local_b0._4_4_;
                local_b0 = CONCAT44(local_b0._4_4_,iVar21);
                FUN_00d23690();
                local_a8 = local_a8 + local_b0._4_4_;
                iVar21 = 0;
              }
              local_b0 = CONCAT44(iVar21,(int)local_b0);
            }
            lVar14 = (int64_t)(int)local_b0;
            iVar21 = (int)local_b0 + 1;
            local_b0 = CONCAT44(local_b0._4_4_,iVar21);
            if (*(int *)((int64_t)local_b8 + 0xc) <= iVar21) {
              bVar7 = true;
              ppppppplVar19 = local_b8;
              goto LAB_01c9c2b0;
            }
            ppppppplVar4 = (int64_t *******)local_b8[2][lVar14 + 1];
            local_c8 = ppppppplVar4;
            local_a0 = ppppppplVar4;
            if ((g_026fdd70 == '\0') && (iVar21 = ___cxa_guard_acquire(), iVar21 != 0)) {
              g_026e3238 = FUN_00115af0();
              g_026e3220 = "MUAudioFileSource";
              g_026e3228 = 0xa0;
              g_026e3230 = FUN_00136df0;
              g_026e3240 = 0;
              ram_00000000026e3248 = 0;
              g_026e3250 = 0;
              ram_00000000026e3258 = 0;
              g_026e3260 = 0;
              ram_00000000026e3268 = 0;
              g_026e3270 = 0;
              ram_00000000026e3278 = 0;
              g_026e3280 = 0;
              ram_00000000026e3288 = 0;
              g_026e3290 = 0;
              ram_00000000026e3298 = 0;
              g_026e32a0 = 0;
              ram_00000000026e32a8 = 0;
              g_026e32b0 = 0;
              ram_00000000026e32b8 = 0;
              g_026e32c0 = 0;
              ram_00000000026e32c8 = 0;
              g_026e32d0 = 0;
              ram_00000000026e32d8 = 0;
              g_026e32e0 = 0;
              ___cxa_guard_release();
            }
            ppppppplVar19 = (int64_t *******)&g_02802688;
            if (ppppppplVar4 != (int64_t *******)0x0) {
              (*(*ppppppplVar4)[0x6c])();
              cVar9 = FUN_00e85ea0();
              ppppppplVar19 = (int64_t *******)&local_a0;
              if (cVar9 == '\0') {
                ppppppplVar19 = (int64_t *******)&g_02802688;
              }
            }
            if (*ppppppplVar19 != (int64_t ******)0x0) {
              pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
              if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                ppppppplVar19 = local_70;
              }
              FUN_0123abe0();
              ppppppplVar4 = local_a0;
              pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123abe0();
              ppppppplVar8 = local_48;
              local_e0 = 0;
              if (local_40 == '\0') {
                if (local_48 != (int64_t *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              local_e0 = '\x01';
              local_e8 = ppppppplVar8;
              cVar9 = (*(*ppppppplVar4)[10])();
              if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              ppppppplVar4 = local_58;
              if (cVar9 != '\0') {
                local_38 = local_c8;
                if (local_c8 == local_58) {
                  if (((char)local_60 != '\0') || (local_c8 == (int64_t *******)0x0)) {
                    local_68 = (int64_t *****)CONCAT71(local_68._1_7_,(char)local_60);
                    local_38 = local_58;
                    goto joined_r0x01c9be85;
                  }
                  if (local_c0 != '\0') {
                    local_38 = local_58;
                    goto LAB_01c9be27;
                  }
                  local_68 = (int64_t *****)CONCAT71(local_68._1_7_,1);
                  FUN_00d50b00();
                  local_38 = ppppppplVar4;
                  if (ppppppplVar4 != (int64_t *******)0x0) goto LAB_01c9be87;
LAB_01c9be39:
                  local_58 = (int64_t *******)0x0;
                }
                else {
                  if (local_c0 == '\0') {
                    if (local_c8 != (int64_t *******)0x0) {
                      FUN_00d50b00();
                    }
                    local_68 = (int64_t *****)CONCAT71(local_68._1_7_,1);
                    if (((char)local_60 != '\0') && (local_58 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (((char)local_60 != '\0') && (local_58 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01c9be27:
                    local_c0 = '\0';
                    local_68 = (int64_t *****)CONCAT71(local_68._1_7_,1);
                  }
joined_r0x01c9be85:
                  if (local_38 == (int64_t *******)0x0) goto LAB_01c9be39;
LAB_01c9be87:
                  pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                  if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    ppppppplVar19 = local_70;
                  }
                  FUN_0124c6e0();
                  iVar21 = *(int *)((int64_t)local_a0 + 0xc);
                  pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                  if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    ppppppplVar19 = local_38;
                  }
                  uVar15 = FUN_0124c6e0();
                  iVar1 = *(int *)((int64_t)local_48 + 0xc);
                  if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                    uVar15 = FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
                    uVar15 = FUN_00d50b20();
                  }
                  if (iVar21 != iVar1) goto LAB_01c9c281;
                  pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                  if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    ppppppplVar19 = local_38;
                  }
                  uVar15 = FUN_0124c6e0();
                  uVar2 = *(uint *)((int64_t)local_a0 + 0xc);
                  if ((local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
                    uVar15 = FUN_00d50b20();
                  }
                  if ((int)uVar2 < 1) {
                    bVar7 = false;
                    local_60 = CONCAT71((int7)((uint64_t)uVar15 >> 8),local_68._0_1_);
                    local_58 = local_38;
                    goto LAB_01c9c2b0;
                  }
                  bVar7 = true;
                  uVar22 = 0;
                  do {
                    pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                    if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                      ppppppplVar19 = local_38;
                    }
                    FUN_0124c6e0();
                    pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                    if (pvVar16 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                    if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                      ppppppplVar19 = local_70;
                    }
                    FUN_0124c6e0();
                    ppppplVar5 = local_48[2][uVar22];
                    local_f0 = 0;
                    if (ppppplVar5 != (int64_t *****)0x0) {
                      FUN_00d50b00();
                    }
                    local_f0 = '\x01';
                    local_f8 = ppppplVar5;
                    cVar9 = FUN_013d8180();
                    if ((local_f0 != '\0') && (local_f8 != (int64_t *****)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    uVar15 = 0;
                    if (cVar9 == '\0') {
                      bVar7 = false;
                    }
                    uVar22 = uVar22 + 1;
                  } while (uVar2 != uVar22);
                  local_58 = local_38;
                  if (bVar7) goto LAB_01c9c281;
                }
                local_60 = CONCAT71((int7)((uint64_t)local_58 >> 8),local_68._0_1_);
              }
            }
          } while( true );
        }
        bVar7 = false;
      }
      pVar17 = (void*)pplVar18;
      local_58 = (int64_t *******)0x0;
      local_60 = 0;
      goto LAB_01c9c2d0;
    }
    lVar14 = local_110;
    FUN_00115e00();
    pVar17 = (void*)lVar14;
    FUN_00d50b20();
    if (bVar10) {
      pvVar16 = _pthread_getspecific(pVar17);
      if (pvVar16 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_140 = (int64_t *)0x0;
      local_138 = '\0';
      local_130 = (int64_t *)0x0;
      local_128 = '\0';
      FUN_012cc0c0(&local_130,&local_140,1,0);
      if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
        (**(code **)(*local_130 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
        (**(code **)(*local_140 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  return;
LAB_01c9c281:
  bVar7 = false;
  local_60 = CONCAT71((int7)((uint64_t)uVar15 >> 8),local_68._0_1_);
  local_58 = local_38;
LAB_01c9c2b0:
  pVar17 = (void*)ppppppplVar19;
  FUN_00136d50();
  FUN_00d50b20();
  if (bVar7) {
    bVar7 = false;
LAB_01c9c2d0:
    pvVar16 = _pthread_getspecific(pVar17);
    if (pvVar16 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb4b0();
    bVar10 = true;
  }
  else {
    ppppppplVar19 = *(int64_t ********)(*arg1 + 0x10);
    if (ppppppplVar19 == (int64_t *******)0x0) {
      bVar7 = false;
    }
    else {
      FUN_00d50b00();
      local_c0 = '\0';
      local_c8 = (int64_t *******)0x0;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b0._4_4_ = 0;
      local_b8 = ppppppplVar19;
      while( true ) {
        if (local_b0._4_4_ != 0) {
          if (local_b0._4_4_ < 1) {
            iVar21 = -local_b0._4_4_;
          }
          else {
            iVar21 = (int)local_b0 - local_b0._4_4_;
            local_b0 = CONCAT44(local_b0._4_4_,iVar21);
            FUN_00d23690();
            local_a8 = local_a8 + local_b0._4_4_;
            iVar21 = 0;
          }
          local_b0 = CONCAT44(iVar21,(int)local_b0);
        }
        lVar14 = (int64_t)(int)local_b0;
        iVar21 = (int)local_b0 + 1;
        local_b0 = CONCAT44(local_b0._4_4_,iVar21);
        if (*(int *)((int64_t)local_b8 + 0xc) <= iVar21) break;
        local_c8 = (int64_t *******)local_b8[2][lVar14 + 1];
        pvVar16 = _pthread_getspecific((void*)local_b8[2]);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        ppppppplVar19 = local_a0;
        if (local_98 == '\0') {
          if (local_a0 != (int64_t *******)0x0) {
            FUN_00d50b00();
            if ((local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01c9c500;
          }
        }
        else if (local_a0 != (int64_t *******)0x0) {
LAB_01c9c500:
          local_98 = '\0';
          local_a0 = (int64_t *******)0x0;
          local_90 = ppppppplVar19;
          local_88 = 0xffffffff;
          local_80 = 0;
          local_88._4_4_ = 0;
          while( true ) {
            if (local_88._4_4_ != 0) {
              if (local_88._4_4_ < 1) {
                iVar21 = -local_88._4_4_;
              }
              else {
                iVar21 = (int)local_88 - local_88._4_4_;
                local_88 = CONCAT44(local_88._4_4_,iVar21);
                FUN_00d23690();
                local_80 = local_80 + local_88._4_4_;
                iVar21 = 0;
              }
              local_88 = CONCAT44(iVar21,(int)local_88);
            }
            lVar14 = (int64_t)(int)local_88;
            iVar21 = (int)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,iVar21);
            if (*(int *)((int64_t)local_90 + 0xc) <= iVar21) break;
            pppppplVar20 = local_90[2];
            local_a0 = (int64_t *******)pppppplVar20[lVar14 + 1];
            pvVar16 = _pthread_getspecific((void*)pppppplVar20);
            pVar17 = (void*)pppppplVar20;
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            if (local_40 == '\0') {
              if (local_48 != (int64_t *******)0x0) {
                local_38 = local_48;
                FUN_00d50b00();
                if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01c9c630;
              }
            }
            else {
              local_38 = local_48;
              if (local_48 != (int64_t *******)0x0) {
LAB_01c9c630:
                pvVar16 = _pthread_getspecific(pVar17);
                if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar17 = (void*)local_38;
                }
                FUN_013dd710();
                ppppppplVar19 = local_48;
                if ((((local_40 == '\0') && (local_48 != (int64_t *******)0x0)) &&
                    (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                pvVar16 = _pthread_getspecific(pVar17);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013df480();
                local_50 = local_48;
                if (((local_40 == '\0') && (local_48 != (int64_t *******)0x0)) &&
                   ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (int64_t *******)0x0)))) {
                  FUN_00d50b20();
                }
                pvVar16 = _pthread_getspecific(pVar17);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013df790();
                local_48 = local_38;
                local_40 = '\0';
                pVar11 = FUN_00d23d20();
                if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_d0 != '\0') && (local_d8 != 0)) {
                  FUN_00d50b20();
                }
                pvVar16 = _pthread_getspecific(pVar17);
                if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar17 = (void*)local_50;
                }
                FUN_01327a50();
                local_40 = '\0';
                local_48 = ppppppplVar19;
                pVar12 = FUN_00d23d20();
                if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_d0 != '\0') && (local_d8 != 0)) {
                  FUN_00d50b20();
                }
                pvVar16 = _pthread_getspecific(pVar17);
                if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar17 = (void*)local_70;
                }
                FUN_0124c6e0();
                local_48 = local_50;
                local_40 = '\0';
                pVar13 = FUN_00d23d20();
                if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_d0 != '\0') && (local_d8 != 0)) {
                  FUN_00d50b20();
                }
                if (pVar13 != 0xffffffff) {
                  pvVar16 = _pthread_getspecific(pVar17);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0124c6e0();
                  lVar14 = (int64_t)(int)pVar13;
                  local_68 = local_48[2][lVar14];
                  if (local_68 != (int64_t *****)0x0) {
                    FUN_00d50b00();
                    pVar13 = (void*)lVar14;
                  }
                  if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar16 = _pthread_getspecific(pVar13);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01327a50();
                  lVar14 = (int64_t)(int)pVar12;
                  ppppplVar5 = local_48[2][lVar14];
                  if (ppppplVar5 != (int64_t *****)0x0) {
                    FUN_00d50b00();
                    pVar12 = (void*)lVar14;
                  }
                  if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar16 = _pthread_getspecific(pVar12);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013df790();
                  lVar14 = (int64_t)(int)pVar11;
                  ppppplVar6 = local_48[2][lVar14];
                  if (ppppplVar6 != (int64_t *****)0x0) {
                    FUN_00d50b00();
                    pVar11 = (void*)lVar14;
                  }
                  if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar16 = _pthread_getspecific(pVar11);
                  if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    pVar11 = (void*)local_38;
                  }
                  FUN_013ddad0();
                  pvVar16 = _pthread_getspecific(pVar11);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_011ef3f0();
                  pvVar16 = _pthread_getspecific(pVar11);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd9a0();
                  if (ppppplVar6 != (int64_t *****)0x0) {
                    FUN_00d50b20();
                  }
                  if (ppppplVar5 != (int64_t *****)0x0) {
                    FUN_00d50b20();
                  }
                  if (local_68 != (int64_t *****)0x0) {
                    FUN_00d50b20();
                  }
                }
                if (local_50 != (int64_t *******)0x0) {
                  FUN_00d50b20();
                }
                if (ppppppplVar19 != (int64_t *******)0x0) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
      FUN_00d50b20();
      bVar7 = false;
    }
  }
  if (((char)local_60 != '\0') && (local_58 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar7) {
    FUN_00d50b20();
  }
  goto LAB_01c9b9c0;
}



// ============================================================
// 00127790
// ============================================================
// Function: FUN_00127790
// Address: 00127790
// Size: 5152 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void* FUN_00127790(void* param_1)

{
  bool bVar1;
  char cVar2;
  uint32_t uVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  char *pcVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  void*puVar11;
  uint64_t uVar12;
  void* pVar13;
  int64_t *plVar14;
  int64_t lVar15;
  void*puVar16;
  int iVar17;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar18;
  uint64_t uVar19;
  uint32_t extraout_XMM0_Da;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  void*local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  int64_t *local_c8;
  int64_t local_c0;
  int64_t *local_b8;
  int64_t local_b0;
  int64_t *local_a8;
  int64_t local_a0;
  uint64_t local_98;
  int local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  char local_40 [8];
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_b8 = plVar4;
  FUN_00757c60();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_d0 = local_b0;
  if ((char)local_a8 == '\0') {
    if (((local_b0 != 0) && (FUN_00d50b00(), (char)local_a8 != '\0')) && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8._0_1_ = '\0';
  }
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  if (local_d0 != 0) {
    local_a8._0_1_ = '\0';
    local_b0 = 0;
    local_a0 = local_d0;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_98._4_4_ = 0;
    while( true ) {
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar17 = -local_98._4_4_;
        }
        else {
          iVar17 = (int)local_98 - local_98._4_4_;
          local_98 = CONCAT44(local_98._4_4_,iVar17);
          FUN_00d23690();
          local_90 = local_90 + local_98._4_4_;
          iVar17 = 0;
        }
        local_98 = CONCAT44(iVar17,(int)local_98);
      }
      lVar6 = (int64_t)(int)local_98;
      iVar17 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar17);
      if (*(int *)(local_a0 + 0xc) <= iVar17) break;
      lVar15 = *(int64_t *)(local_a0 + 0x10);
      local_b0 = *(int64_t *)(lVar15 + 8 + lVar6 * 8);
      plVar4 = (int64_t *)FUN_00e8fc40();
      pVar13 = (void*)lVar15;
      FUN_00022d50();
      (**(code **)(*plVar4 + 0x18))();
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      plVar7 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00127a30;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_00127a30:
        local_60[0] = '\0';
        local_68 = (int64_t *)0x0;
        local_58 = plVar7;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar17 = -local_50._4_4_;
            }
            else {
              iVar17 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar17);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar17 = 0;
            }
            local_50 = CONCAT44(iVar17,(int)local_50);
          }
          lVar6 = (int64_t)(int)local_50;
          iVar17 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar17);
          if (*(int *)((int64_t)local_58 + 0xc) <= iVar17) break;
          local_68 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
          pvVar5 = _pthread_getspecific((void*)local_58[2]);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          plVar7 = (int64_t *)CONCAT71(local_78._1_7_,(char)local_78);
          if ((g_026fdd70 == '\0') && (iVar17 = ___cxa_guard_acquire(), iVar17 != 0)) {
            g_026e3238 = FUN_00115af0();
            g_026e3220 = "MUAudioFileSource";
            g_026e3228 = 0xa0;
            g_026e3230 = FUN_00136df0;
            g_026e3240 = 0;
            ram_00000000026e3248 = 0;
            g_026e3250 = 0;
            ram_00000000026e3258 = 0;
            g_026e3260 = 0;
            ram_00000000026e3268 = 0;
            g_026e3270 = 0;
            ram_00000000026e3278 = 0;
            g_026e3280 = 0;
            ram_00000000026e3288 = 0;
            g_026e3290 = 0;
            ram_00000000026e3298 = 0;
            g_026e32a0 = 0;
            ram_00000000026e32a8 = 0;
            g_026e32b0 = 0;
            ram_00000000026e32b8 = 0;
            g_026e32c0 = 0;
            ram_00000000026e32c8 = 0;
            g_026e32d0 = 0;
            ram_00000000026e32d8 = 0;
            g_026e32e0 = 0;
            ___cxa_guard_release();
          }
          plVar14 = &g_02802688;
          if (plVar7 != (int64_t *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            plVar14 = &local_78;
            if (cVar2 == '\0') {
              plVar14 = &g_02802688;
            }
          }
          plVar7 = (int64_t *)*plVar14;
          if ((char)plVar14[1] == '\0') {
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(plVar14 + 1) = 0;
          }
          pVar13 = (void*)plVar14;
          if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
            FUN_00d50b20();
          }
          if (plVar7 != (int64_t *)0x0) {
            pvVar5 = _pthread_getspecific(pVar13);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_0124d450();
            if (cVar2 != '\0') {
              pvVar5 = _pthread_getspecific(pVar13);
              plVar14 = plVar7;
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar14 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              uVar3 = (**(code **)(*plVar14 + 0x478))();
              lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
              if ((local_70 != '\0') && (lVar6 != 0)) {
                uVar3 = FUN_00d50b20();
              }
              if (lVar6 != 0) {
                local_1a8 = '\0';
                local_1b0 = plVar7;
                FUN_00129760(uVar3,&local_1b0);
                lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
                if (local_70 == '\0') {
                  if (((lVar6 != 0) && (FUN_00d50b00(), local_70 != '\0')) &&
                     (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_70 = '\0';
                }
                if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (lVar6 == 0) {
                  uVar3 = FUN_00d46530();
                  local_d8 = 0;
                  lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
                  if (local_70 == '\0') {
                    if (lVar6 != 0) {
                      uVar3 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_70 = '\0';
                  }
                  local_d8 = '\x01';
                  local_188 = '\0';
                  local_190 = plVar7;
                  local_e0 = lVar6;
                  FUN_00129810(uVar3,&local_190);
                  if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d8 != '\0') && (local_e0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  FUN_00d45870();
                  uVar3 = FUN_00d46530();
                  local_e8 = 0;
                  lVar6 = CONCAT71(local_78._1_7_,(char)local_78);
                  if (local_70 == '\0') {
                    if (lVar6 != 0) {
                      uVar3 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_70 = '\0';
                  }
                  local_e8 = '\x01';
                  local_198 = '\0';
                  local_1a0 = plVar7;
                  local_f0 = lVar6;
                  FUN_00129810(uVar3,&local_1a0);
                  if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_e8 != '\0') && (local_f0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
              }
            }
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
      uVar18 = 0xffffffff;
      uVar19 = 0;
      local_80 = plVar4;
      while( true ) {
        FUN_00ca1380();
        plVar4 = local_68;
        local_78._0_1_ = local_60[0];
        plVar7 = (int64_t *)local_60;
        if (local_60[0] == '\0') {
          plVar7 = &local_78;
        }
        *(char *)plVar7 = '\0';
        if ((local_60[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar17 = *(int *)((int64_t)plVar4 + 0xc);
        if ((char)local_78 != '\0') {
          FUN_00d50b20();
        }
        plVar4 = local_80;
        if ((int64_t)iVar17 <= (int64_t)uVar19) break;
        if (uVar19 == 0) {
LAB_00127f20:
          uVar18 = uVar19 & 0xffffffff;
        }
        else {
          FUN_00ca1380();
          plVar4 = local_68;
          local_78._0_1_ = local_60[0];
          plVar7 = (int64_t *)local_60;
          if (local_60[0] == '\0') {
            plVar7 = &local_78;
          }
          *(char *)plVar7 = '\0';
          if ((local_60[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar3 = FUN_00d45870();
          local_88 = (int64_t *)CONCAT44(local_88._4_4_,uVar3);
          FUN_00ca1380();
          plVar7 = local_68;
          local_40[0] = local_60[0];
          pcVar8 = local_60;
          if (local_60[0] == '\0') {
            pcVar8 = local_40;
          }
          *pcVar8 = '\0';
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          iVar17 = FUN_00d45870();
          if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_78 != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar17 < (int)local_88) goto LAB_00127f20;
        }
        uVar19 = uVar19 + 1;
      }
      if (-1 < (int)uVar18) {
        FUN_00c9fe20();
        plVar7 = local_68;
        local_78._0_1_ = local_60[0];
        plVar14 = (int64_t *)local_60;
        if (local_60[0] == '\0') {
          plVar14 = &local_78;
        }
        *(char *)plVar14 = '\0';
        if ((local_60[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = *(int64_t **)(plVar7[2] + uVar18 * 8);
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((char)local_78 != '\0') {
          FUN_00d50b20();
        }
        FUN_00ca1380();
        plVar14 = local_68;
        local_78._0_1_ = local_60[0];
        plVar9 = (int64_t *)local_60;
        if (local_60[0] == '\0') {
          plVar9 = &local_78;
        }
        *(char *)plVar9 = '\0';
        if ((local_60[0] != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_60[0] = '\0';
        local_68 = plVar7;
        cVar2 = FUN_00d23d70();
        uVar3 = extraout_XMM0_Da;
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_178 = '\0';
          local_170 = local_b0;
          local_168 = '\0';
          local_180 = plVar7;
          FUN_001298c0(uVar3,&local_170);
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_c8 = plVar4;
  FUN_00c9fe20();
  lVar6 = local_b0;
  pplVar10 = &local_a8;
  if ((char)local_a8 == '\0') {
    pplVar10 = &local_68;
  }
  local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_a8);
  *(void*)pplVar10 = 0;
  if (((char)local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = lVar6;
  if ((char)local_68 == '\0') {
    if (lVar6 == 0) goto LAB_00128bbf;
    FUN_00d50b00();
  }
  else if (lVar6 == 0) goto LAB_00128bbf;
  local_a8._0_1_ = '\0';
  local_b0 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a0 = local_c0;
  while( true ) {
    lVar6 = (int64_t)(int)local_98;
    iVar17 = (int)local_98 + 1;
    local_98 = CONCAT44(local_98._4_4_,iVar17);
    if (*(int *)(local_a0 + 0xc) <= iVar17) break;
    lVar15 = *(int64_t *)(local_a0 + 0x10);
    local_160 = *(int64_t *)(lVar15 + 8 + lVar6 * 8);
    local_158 = '\0';
    local_d0 = local_160;
    local_b0 = local_160;
    FUN_00129970();
    plVar4 = local_68;
    pVar13 = (void*)lVar15;
    if (local_60[0] == '\0') {
      if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar13);
    plVar7 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar7 + 0x478))();
    local_88 = local_68;
    plVar7 = local_68;
    if ((((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), plVar7 = local_88, local_60[0] != '\0')) && (local_68 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    local_148 = '\0';
    local_150 = plVar7;
    uVar3 = FUN_00721510();
    local_80 = local_68;
    if (local_60[0] == '\0') {
      if (((local_68 != (int64_t *)0x0) && (uVar3 = FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (int64_t *)0x0)) {
        uVar3 = FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
      uVar3 = FUN_00d50b20();
    }
    if (local_80 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      bVar1 = true;
    }
    else {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_024d07b0;
      *(void*)((int64_t)puVar11 + 0xc) = 0;
      *(void*)((int64_t)puVar11 + 0x14) = 0;
      *(void*)((int64_t)puVar11 + 0x1c) = 0;
      *(void*)((int64_t)puVar11 + 0x24) = 0;
      *(void*)((int64_t)puVar11 + 0x2c) = 0;
      FUN_00d500e0();
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar12 = FUN_00b7a6d0();
      puVar11[3] = uVar12;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar3 = FUN_00b88630();
      puVar16 = (void*)((int64_t)puVar11 + 0xc);
      *puVar16 = uVar3;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar13 = (void*)puVar16;
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar3 = FUN_00b86c20();
      *(void*)(puVar11 + 2) = uVar3;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar3 = FUN_00b86d10();
      *(void*)((int64_t)puVar11 + 0x14) = uVar3;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar13);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123b100();
      uVar12 = FUN_00b7a710();
      puVar11[4] = uVar12;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_88 == local_80) {
        local_140 = local_88;
        local_138 = '\0';
        FUN_00720770();
        plVar7 = local_68;
        if (local_60[0] == '\0') {
          if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
             (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
        }
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (int64_t *)0x0) {
          pvVar5 = _pthread_getspecific(pVar13);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_130 = plVar7;
          local_128 = '\0';
          FUN_0123bf80();
          if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar7 = (int64_t *)puVar11[5];
          if (plVar7 != local_88) {
            if (local_88 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            puVar11[5] = local_88;
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          goto LAB_00128918;
        }
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        bVar1 = true;
      }
      else {
        cVar2 = (**(code **)(*local_80 + 0x398))();
        plVar7 = (int64_t *)puVar11[5];
        if (cVar2 == '\0') {
          if (plVar7 != local_80) {
            FUN_00d50b00();
            puVar11[5] = local_80;
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else if (plVar7 != local_80) {
          FUN_00d50b00();
          puVar11[5] = local_80;
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
LAB_00128918:
        uVar3 = FUN_00ca1380();
        plVar7 = local_68;
        local_78._0_1_ = local_60[0];
        plVar14 = (int64_t *)local_60;
        if (local_60[0] == '\0') {
          plVar14 = &local_78;
        }
        *(char *)plVar14 = '\0';
        if ((local_60[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if ((char)local_78 == '\0') {
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_00128981;
          }
        }
        else if (plVar7 != (int64_t *)0x0) {
LAB_00128981:
          local_60[0] = '\0';
          local_68 = (int64_t *)0x0;
          local_58 = plVar7;
          local_50 = 0xffffffff;
          local_48 = 0;
          while( true ) {
            lVar6 = (int64_t)(int)local_50;
            iVar17 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar17);
            if (*(int *)((int64_t)local_58 + 0xc) <= iVar17) break;
            local_68 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
            plVar7 = (int64_t *)puVar11[5];
            local_f8 = 0;
            lVar6 = local_68[5];
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            local_f8 = '\x01';
            local_100 = lVar6;
            cVar2 = (**(code **)(*plVar7 + 0x50))();
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') {
              FUN_00136e40();
              bVar1 = false;
              FUN_00d50b20();
              goto LAB_00128b60;
            }
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar17 = -local_50._4_4_;
              }
              else {
                local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar17 = 0;
              }
              local_50 = CONCAT44(iVar17,(int)local_50);
            }
          }
          FUN_00136e40();
          uVar3 = FUN_00d50b20();
        }
        local_118 = '\0';
        local_110 = local_d0;
        local_108 = '\0';
        local_120 = puVar11;
        FUN_00129a20(uVar3,&local_110);
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
        bVar1 = false;
        if ((local_118 != '\0') && (local_120 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00128b60:
      FUN_00d50b20();
      uVar3 = FUN_00d50b20();
    }
    if (local_88 != (int64_t *)0x0) {
      uVar3 = FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      uVar3 = FUN_00d50b20();
    }
    if (bVar1) {
      FUN_000be170();
      FUN_00d50b20();
      if (local_c8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_00128c53;
    }
    iVar17 = local_98._4_4_;
    if (local_98._4_4_ != 0) {
      if (local_98._4_4_ < 1) {
        iVar17 = -local_98._4_4_;
      }
      else {
        local_98 = CONCAT44(local_98._4_4_,(int)local_98 - local_98._4_4_);
        FUN_00d23690(uVar3,local_98._4_4_);
        local_90 = local_90 + iVar17;
        iVar17 = 0;
      }
      local_98 = CONCAT44(iVar17,(int)local_98);
    }
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_00128bbf:
  (**(code **)(**(int64_t **)(arg1 + 0xc0) + 0x468))();
  lVar6 = local_b0;
  if (((char)local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    (**(code **)(**(int64_t **)(arg1 + 0xc0) + 0x4f8))();
  }
  *this_ptr = local_c8;
  *(void*)(this_ptr + 1) = 1;
LAB_00128c53:
  if (local_b8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 001227e0
// ============================================================
// Function: FUN_001227e0
// Address: 001227e0
// Size: 4917 bytes
// Class: MUAudioFileSource
// String references:
//   "%@.tempo.%@"

void FUN_001227e0(uint64_t param_1,double param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint32_t uVar6;
  void *pvVar7;
  int64_t **pplVar8;
  int64_t **pplVar9;
  void* pVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  double dVar16;
  int64_t *local_1f0;
  uint8_t local_1e8;
  int64_t *local_1e0;
  uint8_t local_1d8;
  int64_t *local_1d0;
  uint8_t local_1c8;
  uint8_t local_1b8;
  int64_t *local_1b0;
  uint8_t local_1a8;
  uint64_t local_1a0;
  int64_t *local_198;
  uint8_t local_190;
  int64_t *local_188;
  uint8_t local_180;
  int64_t *local_178;
  uint8_t local_170;
  int64_t *local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  uint64_t local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  double local_c0;
  double local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t local_70;
  int local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40 [8];
  int64_t *local_38;
  
  if (*(int64_t **)(this_ptr + 0x148) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x148) + 0x920))();
    FUN_00d6f370();
    local_148 = g_026e1880;
    if (g_026e1880 != 0) {
      FUN_00d50b00();
    }
    local_140 = '\x01';
    FUN_00d70ea0();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_01d70da0();
  lVar1 = *(int64_t *)
           (*(int64_t *)(*(int64_t *)(this_ptr + 0x150) + 0x10) + (int64_t)iVar5 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar6 = FUN_003b9000();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  switch(uVar6) {
  case 0:
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    FUN_00d50b00();
    local_130 = '\x01';
    local_138 = (int64_t *)(this_ptr + 0x70);
    FUN_007faee0();
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      (**(code **)(*local_138 + 0x10))();
      FUN_00d50b20();
    }
    local_128 = *arg1;
    local_120 = '\0';
    FUN_007faf50();
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    FUN_007fdfe0();
    FUN_007fdff0();
    *(void*)(this_ptr + 0xb1) = 1;
    break;
  case 1:
    dVar16 = 0.0;
    FUN_00e7b500(g_023908c8);
    if (*arg1 != 0) {
      local_78._0_1_ = '\0';
      local_80 = (int64_t *)0x0;
      local_70 = *(int64_t *)(*arg1 + 0x10);
      local_68 = 0;
      if (0 < *(int *)(local_70 + 0xc)) {
        local_50 = (int64_t *)0x0;
        local_108 = 0;
        plVar14 = (int64_t *)0x0;
        bVar3 = false;
        do {
          local_80 = *(int64_t **)(*(int64_t *)(local_70 + 0x10) + (int64_t)local_68 * 8);
          FUN_00124d30((int64_t)local_68,&local_80);
          lVar1 = CONCAT71(uStack_47,local_48);
          if ((((local_40[0] == '\0') && (lVar1 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
          local_c0 = (double)FUN_0011edf0(0,1);
          local_1f0 = local_80;
          local_1e8 = 0;
          local_b8 = dVar16;
          uVar15 = FUN_00124e00(local_c0,&local_1f0,param_3,param_4,0);
          bVar4 = bVar3;
          if ((local_50 == (int64_t *)0x0) && (lVar1 != 0)) {
            if (*(int *)(lVar1 + 0xc) == 0) {
              local_50 = (int64_t *)0x0;
            }
            else {
              local_38 = plVar14;
              FUN_00d23310();
              local_b0._0_1_ = local_40[0];
              pplVar9 = &local_b0;
              pplVar8 = (int64_t **)local_40;
              if (local_40[0] == '\0') {
                pplVar8 = pplVar9;
              }
              lVar1 = CONCAT71(uStack_47,local_48);
              *(char *)pplVar8 = '\0';
              if ((local_40[0] != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((void*)pplVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e8920();
              local_50 = (int64_t *)CONCAT71(local_90._1_7_,(char)local_90);
              if (local_50 == (int64_t *)0x0) {
                local_50 = (int64_t *)0x0;
              }
              else if (local_88 == '\0') {
                uVar15 = FUN_00d50b00();
                local_108 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
                if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_88 = '\0';
                local_108 = CONCAT71(local_90._1_7_,1);
              }
              if (((char)local_b0 != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
              (**(code **)(*local_80 + 0x3f0))();
              plVar14 = local_38;
              plVar13 = (int64_t *)CONCAT71(uStack_47,local_48);
              if (plVar13 == local_38) {
                if ((!bVar3) && (plVar13 != (int64_t *)0x0)) {
                  bVar4 = true;
                  if (local_40[0] != '\0') goto LAB_001230a7;
                  FUN_00d50b00();
                  bVar4 = true;
                }
              }
              else {
                plVar14 = plVar13;
                if (local_40[0] != '\0') {
                  bVar4 = true;
                  if ((bVar3) && (local_38 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_001230a7;
                }
                if (plVar13 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                bVar4 = true;
                if ((bVar3) && (local_38 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
                FUN_00d50b20();
              }
            }
LAB_001230a7:
            uVar15 = FUN_00d50b20();
            bVar3 = bVar4;
          }
          else if (lVar1 != 0) goto LAB_001230a7;
          local_68 = local_68 + 1;
        } while (local_68 < *(int *)(local_70 + 0xc));
        if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        lVar1 = g_026e1890;
        if ((((local_50 != (int64_t *)0x0) && (plVar14 != (int64_t *)0x0)) &&
            (*(int64_t *)(this_ptr + 0xc0) != 0)) && (*(char *)(this_ptr + 0xb0) == '\0')) {
          if (g_026e1890 != 0) {
            uVar15 = FUN_00d50b00();
          }
          local_118 = lVar1;
          local_110 = '\x01';
          FUN_01e57260(uVar15,&local_118);
          plVar13 = local_80;
          if ((char)local_78 == '\0') {
            if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
               (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_78._0_1_ = '\0';
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          plVar11 = plVar13;
          if (*(int64_t **)(this_ptr + 0xc0) == (int64_t *)0x0) {
LAB_001236dc:
            FUN_007585f0();
            plVar12 = local_80;
            if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 != (int64_t *)0x0) {
              FUN_007585f0();
              plVar11 = local_80;
              plVar12 = plVar13;
              if (plVar13 != local_80) {
                if ((char)local_78 != '\0') {
                  if (plVar13 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  goto LAB_001237c4;
                }
                if (local_80 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                plVar12 = plVar11;
                if (plVar13 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
              plVar11 = plVar12;
              if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x468))();
            plVar12 = local_80;
            if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 == (int64_t *)0x0) goto LAB_001236dc;
            (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x468))();
            (**(code **)(*(int64_t *)CONCAT71(uStack_47,local_48) + 0x390))();
            if (plVar13 == local_80) {
LAB_00123783:
              if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              plVar11 = local_80;
              if ((char)local_78 == '\0') {
                if (local_80 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                if (plVar13 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_00123783;
              }
              if (plVar13 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              local_78._0_1_ = '\0';
            }
            if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
          }
LAB_001237c4:
          local_1d8 = 0;
          local_1e0 = plVar11;
          FUN_001166a0();
          plVar13 = local_80;
          plVar12 = plVar11;
          if (local_80 == plVar11) {
LAB_0012382a:
            plVar13 = plVar12;
            if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((char)local_78 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              plVar12 = plVar13;
              if (plVar11 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              goto LAB_0012382a;
            }
            if (plVar11 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00b5dfe0();
          FUN_00df1af0();
          local_1a0 = CONCAT71(local_b0._1_7_,(char)local_b0);
          local_d0 = plVar13;
          uVar15 = FUN_00083ea0(2,&local_1a0);
          FUN_00d8cb40(uVar15,&local_80);
          local_f8 = 0;
          local_100 = CONCAT71(local_90._1_7_,(char)local_90);
          if (local_88 == '\0') {
            if (local_100 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_f8 = '\x01';
          FUN_00b5dfe0();
          local_f0 = local_d0;
          local_e8 = 0;
          if (local_c8 == '\0') {
            if (local_d0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c8 = '\0';
          }
          local_e8 = '\x01';
          (**(code **)(*plVar14 + 0x4f8))(&local_f0,&local_100);
          lVar1 = CONCAT71(uStack_47,local_48);
          if (local_40[0] == '\0') {
            if (((lVar1 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
            FUN_00d50b20();
          }
          local_80 = (int64_t *)&g_0253d630;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_80 = &g_024c5048;
          if (((char)local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (CONCAT71(local_b0._1_7_,(char)local_b0) != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (CONCAT71(local_e0._1_7_,(char)local_e0) != 0)) {
            FUN_00d50b20();
          }
          local_1d0 = local_50;
          local_1c8 = 0;
          local_1b8 = 0;
          FUN_00125420(local_c0,local_b8);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((bVar3) && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_108 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    break;
  case 2:
    FUN_00ca1380();
    plVar14 = local_80;
    local_48 = (char)local_78;
    pplVar9 = &local_78;
    if ((char)local_78 == '\0') {
      pplVar9 = (int64_t **)&local_48;
    }
    *(void*)pplVar9 = 0;
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar5 = *(int *)((int64_t)plVar14 + 0xc);
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (iVar5 == 1) {
      FUN_00ca1380();
      plVar14 = local_80;
      local_90._0_1_ = (char)local_78;
      pplVar9 = &local_78;
      if ((char)local_78 == '\0') {
        pplVar9 = &local_90;
      }
      *(void*)pplVar9 = 0;
      if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar13 = local_80;
      pplVar9 = (int64_t **)&local_48;
      if ((char)local_78 != '\0') {
        pplVar9 = &local_78;
      }
      local_48 = (char)local_78;
      *(void*)pplVar9 = 0;
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 == '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (((char)local_90 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((int64_t)plVar13 + 0xc)) {
        local_1b0 = plVar13;
        local_1a8 = 0;
        pVar10 = 0;
        local_c0 = (double)FUN_0011edf0(0,1);
        local_b8 = param_2;
        FUN_00d23310();
        plVar14 = local_80;
        pplVar9 = &local_90;
        if ((char)local_78 != '\0') {
          pplVar9 = &local_78;
        }
        local_90._0_1_ = (char)local_78;
        *(void*)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = plVar14;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        local_178 = (int64_t *)CONCAT71(uStack_47,local_48);
        local_38 = local_178;
        if (local_40[0] == '\0') {
          if (local_178 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_170 = 1;
        FUN_00c9fe20();
        plVar14 = local_80;
        local_e0._0_1_ = (char)local_78;
        pplVar9 = &local_e0;
        if ((char)local_78 != '\0') {
          pplVar9 = &local_78;
        }
        *(void*)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        plVar13 = local_80;
        pplVar9 = &local_78;
        if ((char)local_78 == '\0') {
          pplVar9 = &local_b0;
        }
        local_b0._0_1_ = (char)local_78;
        *(void*)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar11 = local_50;
        if (((char)local_b0 == '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        local_198 = plVar13;
        local_190 = 1;
        FUN_00125420(local_c0,local_b8);
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_e0 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_90 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    break;
  case 3:
    FUN_00ca1380();
    plVar14 = local_80;
    local_48 = (char)local_78;
    pplVar9 = &local_78;
    if ((char)local_78 == '\0') {
      pplVar9 = (int64_t **)&local_48;
    }
    *(void*)pplVar9 = 0;
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar5 = *(int *)((int64_t)plVar14 + 0xc);
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (iVar5 == 1) {
      FUN_00ca1380();
      plVar14 = local_80;
      local_90._0_1_ = (char)local_78;
      pplVar9 = &local_78;
      if ((char)local_78 == '\0') {
        pplVar9 = &local_90;
      }
      *(void*)pplVar9 = 0;
      if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar13 = local_80;
      pplVar9 = (int64_t **)&local_48;
      if ((char)local_78 != '\0') {
        pplVar9 = &local_78;
      }
      local_48 = (char)local_78;
      *(void*)pplVar9 = 0;
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = plVar13;
      if ((local_48 == '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (((char)local_90 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((int64_t)local_50 + 0xc)) {
        dVar16 = 0.0;
        local_c0 = (double)FUN_00e7b500(g_023908c8);
        local_b8 = dVar16;
        iVar5 = FUN_01d70da0();
        if (iVar5 == 1) {
          local_c0 = *(double *)(this_ptr + 0x90);
          local_b8 = *(double *)(this_ptr + 0x98) - local_c0;
        }
        FUN_00d23310();
        plVar14 = local_80;
        pplVar9 = &local_78;
        pplVar8 = &local_90;
        if ((char)local_78 != '\0') {
          pplVar8 = pplVar9;
        }
        local_90._0_1_ = (char)local_78;
        *(void*)pplVar8 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar10 = (void*)pplVar9;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        lVar1 = CONCAT71(uStack_47,local_48);
        if (local_40[0] == '\0') {
          if (((lVar1 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if (((char)local_90 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        local_168 = (int64_t *)CONCAT71(uStack_47,local_48);
        local_38 = local_168;
        if (local_40[0] == '\0') {
          if (local_168 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_160 = 1;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7fb0();
        lVar2 = CONCAT71(local_90._1_7_,(char)local_90);
        if (local_88 == '\0') {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_150 = 1;
        local_158 = lVar2;
        FUN_00c9fe20();
        plVar14 = local_80;
        local_d0 = (int64_t *)CONCAT71(local_d0._1_7_,(char)local_78);
        pplVar9 = &local_d0;
        if ((char)local_78 != '\0') {
          pplVar9 = &local_78;
        }
        *(void*)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        plVar13 = local_80;
        pplVar9 = &local_78;
        if ((char)local_78 == '\0') {
          pplVar9 = &local_e0;
        }
        local_e0._0_1_ = (char)local_78;
        *(void*)pplVar9 = 0;
        if (((char)local_78 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_e0 == '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        local_188 = plVar13;
        local_180 = 1;
        FUN_001256c0(local_c0,local_b8);
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_d0 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (CONCAT71(local_b0._1_7_,(char)local_b0) != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    break;
  default:
    goto switchD_001228f7_default;
  }
  FUN_01e54790();
switchD_001228f7_default:
  return;
}



// ============================================================
// 0075a190
// ============================================================
// Function: FUN_0075a190
// Address: 0075a190
// Size: 6234 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_0075a190(int64_t *param_1,int64_t *param_2,uint32_t param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  undefined7 uVar7;
  undefined7 extraout_var;
  void* pVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  int iVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  int64_t *local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  uint64_t local_88;
  int local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  uint8_t local_31;
  
  local_c0 = (int64_t *)CONCAT44(local_c0._4_4_,param_3);
  lVar5 = *param_1;
  lVar1 = this_ptr[0x18];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x18] = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  pVar8 = (void*)param_1;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_004a5a00();
  lVar5 = g_026f6fb0;
  if (cVar3 == '\0') {
    uVar13 = extraout_XMM0_Da;
    if (g_026f6fb0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    lVar1 = g_02729500;
    if (g_02729500 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_210 = lVar1;
    local_208 = '\x01';
    FUN_01f6ca30(uVar13,&local_210);
    plVar9 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_200 = 0;
    local_1f8 = '\0';
    FUN_01f6c9b0();
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar9 + 0x5e0))();
    FUN_00d50b20();
  }
  local_1f0 = *param_2;
  local_1e8 = '\0';
  (**(code **)(*this_ptr + 0x470))();
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x628))();
  plVar9 = local_60;
  if ((((local_58 == '\0') && (local_60 != (int64_t *)0x0)) && (FUN_00d50b00(), local_58 != '\0'))
     && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_140 = param_2;
  (**(code **)(*this_ptr + 0x498))();
  plVar12 = local_60;
  if (((local_58 == '\0') && (local_60 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_58 != '\0' && (local_60 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  local_31 = 1;
  local_68 = plVar9;
  (**(code **)(*plVar12 + 0x468))();
  local_68 = plVar9;
  (**(code **)(*plVar12 + 0x470))();
  local_68 = plVar9;
  FUN_00cafd20();
  (**(code **)(*this_ptr + 0x628))();
  plVar2 = local_60;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x628))();
    local_120 = local_60;
    local_118 = 0;
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_118 = '\x01';
    (**(code **)(*plVar12 + 0x3a8))();
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar5 = *arg1;
  lVar1 = this_ptr[0xf];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0xf] = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_c0 != '\0') {
    (**(code **)(*this_ptr + 0x628))();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_012ccb50();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      (**(code **)(*this_ptr + 0x628))();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0075c8d0();
      local_110 = local_b8;
      local_108 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_108 = '\x01';
      local_1d8 = '\0';
      local_1e0 = (int64_t *)0x0;
      local_1d0 = (int64_t *)0x0;
      local_1c8 = '\0';
      pplVar10 = &local_1d0;
      FUN_012cc0c0(pplVar10,&local_1e0,0,0);
      pVar8 = (void*)pplVar10;
      if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
        (**(code **)(*local_1d0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
        (**(code **)(*local_1e0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_012ccb50();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      (**(code **)(*this_ptr + 0x628))();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_1c0 = *local_140;
      local_1b8 = '\0';
      local_1b0 = (int64_t *)0x0;
      local_1a8 = '\0';
      local_1a0 = (int64_t *)0x0;
      local_198 = '\0';
      pplVar10 = &local_1a0;
      FUN_012cc0c0(pplVar10,&local_1b0,0,0);
      pVar8 = (void*)pplVar10;
      if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
        (**(code **)(*local_1a0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
        (**(code **)(*local_1b0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*this_ptr + 0x628))();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  local_100 = local_60;
  local_f8 = 0;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_f8 = '\x01';
  FUN_0044c720();
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x628))();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  local_f0 = local_60;
  local_e8 = 0;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_e8 = '\x01';
  (**(code **)(*plVar12 + 0x3a0))();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_190 = (int64_t *)0x0;
  local_188 = '\0';
  FUN_00cb1fa0();
  if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
    (**(code **)(*local_190 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00cb1f10();
  FUN_00db3760();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00cb1f10();
  FUN_00db65f0();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar9;
  (**(code **)(*plVar12 + 0x3c8))();
  (**(code **)(*this_ptr + 0x468))();
  (**(code **)(*local_a0 + 0x468))();
  plVar2 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00753620();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x628))();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505900();
  local_e0 = local_60;
  local_d8 = 0;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_d8 = '\x01';
  FUN_001060d0();
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a4cb0();
  uVar13 = FUN_006e32b0();
  local_d0 = local_60;
  local_c8 = 0;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_c8 = '\x01';
  FUN_00108e20(uVar13,0);
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50130();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    local_68 = plVar9;
  }
  else {
    local_31 = 1;
    local_68 = (int64_t *)0x0;
    FUN_00d50b20();
  }
  cVar3 = plVar9 != (int64_t *)0x0;
  *(void*)(this_ptr + 0x2d) = 0;
  local_31 = plVar9 == (int64_t *)0x0;
  FUN_00d403d0();
  local_180 = g_02703af8;
  if (g_02703af8 != 0) {
    FUN_00d50b00();
  }
  local_178 = '\x01';
  local_128 = 0;
  FUN_00d50b00();
  local_128 = '\x01';
  local_170 = 0;
  local_168 = '\0';
  plVar9 = &local_170;
  local_130 = this_ptr;
  FUN_00d40470(plVar9,&local_130,1,3);
  pVar8 = (void*)plVar9;
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_c0 != '\0') {
    (**(code **)(*this_ptr + 0x628))();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_012cb480();
    plVar9 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (int64_t *)0x0) && (uVar13 = FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      local_140 = (int64_t *)CONCAT71(local_140._1_7_,cVar3);
      local_138 = plVar12;
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_c0 = plVar9;
      local_50 = plVar9;
      local_48 = 0xffffffff;
      local_40 = 0;
      iVar11 = 0;
      while( true ) {
        if (iVar11 != 0) {
          if (iVar11 < 1) {
            iVar11 = -iVar11;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar11);
            uVar13 = FUN_00d23690(uVar13,iVar11);
            local_40 = local_40 + iVar11;
            iVar11 = 0;
          }
          local_48 = CONCAT44(iVar11,(int)local_48);
        }
        lVar5 = (int64_t)(int)local_48;
        iVar11 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar11);
        if (*(int *)((int64_t)local_50 + 0xc) <= iVar11) break;
        plVar9 = *(int64_t **)(local_50[2] + 8 + lVar5 * 8);
        local_60 = plVar9;
        local_a0 = plVar9;
        if ((g_026fdd70 == '\0') &&
           (iVar11 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_02, iVar11 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          uVar13 = ___cxa_guard_release();
        }
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar10 = &local_a0;
          uVar13 = extraout_XMM0_Da_00;
          if (cVar3 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar10 != (int64_t *)0x0) {
          pvVar4 = _pthread_getspecific((void*)pplVar10);
          pVar8 = (void*)pplVar10;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_0124d450();
          uVar13 = extraout_XMM0_Da_01;
          if (cVar3 != '\0') {
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar13 = FUN_0124c6e0();
            plVar9 = local_a0;
            if (local_98 == '\0') {
              if (local_a0 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0075b774;
              }
            }
            else if (local_a0 != (int64_t *)0x0) {
LAB_0075b774:
              local_98 = '\0';
              local_a0 = (int64_t *)0x0;
              local_90 = plVar9;
              local_88 = 0xffffffff;
              local_80 = 0;
              local_88._4_4_ = 0;
              while( true ) {
                if (local_88._4_4_ != 0) {
                  if (local_88._4_4_ < 1) {
                    iVar11 = -local_88._4_4_;
                  }
                  else {
                    iVar11 = (int)local_88 - local_88._4_4_;
                    local_88 = CONCAT44(local_88._4_4_,iVar11);
                    FUN_00d23690();
                    local_80 = local_80 + local_88._4_4_;
                    iVar11 = 0;
                  }
                  local_88 = CONCAT44(iVar11,(int)local_88);
                }
                lVar5 = (int64_t)(int)local_88;
                iVar11 = (int)local_88 + 1;
                local_88 = CONCAT44(local_88._4_4_,iVar11);
                if (*(int *)((int64_t)local_90 + 0xc) <= iVar11) break;
                local_a0 = *(int64_t **)(local_90[2] + 8 + lVar5 * 8);
                pvVar4 = _pthread_getspecific((void*)local_90[2]);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_158 = '\0';
                local_160 = (int64_t *)0x0;
                local_150 = (int64_t *)0x0;
                local_148 = '\0';
                FUN_01397bb0(0,&local_150);
                if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                  (**(code **)(*local_150 + 0x10))();
                  FUN_00d50b20();
                }
                if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
                  (**(code **)(*local_160 + 0x10))();
                  FUN_00d50b20();
                }
              }
              FUN_00115190();
              uVar13 = FUN_00d50b20();
            }
          }
        }
        iVar11 = local_48._4_4_;
      }
      FUN_00136d50();
      FUN_00d50b20();
      plVar12 = local_138;
      cVar3 = (char)local_140;
    }
  }
  uVar6 = FUN_00756200();
  if (plVar12 != (int64_t *)0x0) {
    uVar6 = FUN_00d50b20();
  }
  uVar7 = (undefined7)((uint64_t)uVar6 >> 8);
  if (cVar3 == '\0' && local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
    uVar7 = extraout_var;
  }
  return CONCAT71(uVar7,1);
}



// ============================================================
// 0015fd00
// ============================================================
// Function: FUN_0015fd00
// Address: 0015fd00
// Size: 4548 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_0015fd00(uint64_t param_1)

{
  void*puVar1;
  char cVar2;
  void* pVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void*puVar9;
  char *pcVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  int64_t this_ptr;
  int64_t *plVar14;
  int iVar15;
  uint32_t uVar16;
  uint uVar17;
  undefined7 uVar19;
  int64_t *plVar18;
  int64_t **pplVar20;
  bool bVar21;
  bool bVar22;
  char local_98;
  undefined7 uStack_97;
  char local_90;
  void*local_88;
  char local_80 [8];
  void*local_78;
  uint64_t local_70;
  int local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  FUN_001616e0();
  puVar1 = local_88;
  if ((local_80[0] == '\0') && (local_88 != (void*)0x0)) {
    FUN_00d50b00();
  }
  plVar18 = *(int64_t **)(this_ptr + 0xd0);
  if (plVar18 != (int64_t *)0x0) {
    iVar15 = *(int *)((int64_t)puVar1 + 0xc);
    if (iVar15 == 0) {
      local_40 = (int64_t *)0x0;
      cVar2 = '\0';
      iVar15 = 0;
LAB_001600e0:
      (**(code **)(*plVar18 + 0x6a8))();
      (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x998))();
      lVar8 = g_026e3e60;
      lVar5 = g_026e3e58;
      plVar18 = *(int64_t **)(this_ptr + 0xd0);
      if (iVar15 == 0) {
        if (g_026e3e60 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar18 + 0x978))();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_026e3e58 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar18 + 0x978))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d23310();
      pVar3 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_80[0]);
      pcVar10 = &local_98;
      if (local_80[0] != '\0') {
        pcVar10 = local_80;
      }
      local_98 = local_80[0];
      *pcVar10 = '\0';
      if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar20 = &local_50;
      FUN_0126ef70();
      plVar18 = local_50;
      if ((g_026fdd70 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      if (plVar18 == (int64_t *)0x0) {
LAB_0015fe1d:
        pplVar20 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar18 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_0015fe1d;
      }
      local_40 = *pplVar20;
      if (*pplVar20 == (int64_t *)0x0) {
        lVar5 = 0;
        local_40 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar20 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar20 + 1) = 0;
        }
        lVar5 = CONCAT71((int7)((uint64_t)plVar18 >> 8),1);
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_58 = (int64_t *)CONCAT44(local_58._4_4_,iVar15);
      local_60 = lVar5;
      if ((local_98 != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_80[0] = '\0';
      local_88 = (void*)0x0;
      local_78 = puVar1;
      local_70 = 0xffffffff;
      local_68 = 0;
      iVar15 = 1;
      local_70._4_4_ = 0;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar13 = -local_70._4_4_;
          }
          else {
            iVar13 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar13);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar13 = 0;
          }
          local_70 = CONCAT44(iVar13,(int)local_70);
        }
        lVar5 = (int64_t)(int)local_70;
        iVar13 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar13);
        if (*(int *)((int64_t)local_78 + 0xc) <= iVar13) break;
        local_88 = *(void**)(local_78[2] + 8 + lVar5 * 8);
        pvVar4 = _pthread_getspecific((void*)local_78[2]);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        plVar18 = local_50;
        if ((g_026fdd70 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          ___cxa_guard_release();
        }
        pplVar20 = (int64_t **)&g_02802688;
        if (plVar18 != (int64_t *)0x0) {
          (**(code **)(*plVar18 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar20 = &local_50;
          if (cVar2 == '\0') {
            pplVar20 = (int64_t **)&g_02802688;
          }
        }
        plVar18 = *pplVar20;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar15 = iVar15 + (uint)(plVar18 != local_40);
      }
      puVar9 = local_78;
      FUN_001159b0();
      pVar3 = (void*)puVar9;
      plVar18 = *(int64_t **)(this_ptr + 0xd0);
      cVar2 = (char)local_60;
      if (iVar15 != 1) {
        iVar15 = (int)local_58;
        goto LAB_001600e0;
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar3 = (void*)local_40;
      }
      FUN_0123abe0();
      (**(code **)(*local_50 + 0x468))();
      puVar9 = local_88;
      if (local_80[0] == '\0') {
        if (local_88 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80[0] = '\0';
      }
      (**(code **)(*plVar18 + 0x978))();
      if (puVar9 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar18 = *(int64_t **)(this_ptr + 0xd0);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123abe0();
      (**(code **)(*local_50 + 0x470))();
      puVar9 = local_88;
      if (local_80[0] == '\0') {
        if (local_88 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80[0] = '\0';
      }
      (**(code **)(*plVar18 + 0x6a8))();
      if (puVar9 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x998))();
    }
    if ((cVar2 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = (void*)&g_02572358;
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (puVar1 != (void*)0x0) {
    local_80[0] = '\0';
    local_88 = (void*)0x0;
    local_78 = puVar1;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar15 = -local_70._4_4_;
        }
        else {
          iVar15 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar15);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar15 = 0;
        }
        local_70 = CONCAT44(iVar15,(int)local_70);
      }
      lVar5 = (int64_t)(int)local_70;
      iVar15 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar15);
      if (*(int *)((int64_t)local_78 + 0xc) <= iVar15) break;
      local_88 = *(void**)(local_78[2] + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((void*)local_78[2]);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar18 = (int64_t *)CONCAT71(uStack_97,local_98);
      if (local_90 == '\0') {
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      local_48 = '\0';
      local_50 = plVar18;
      FUN_00d235a0();
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
        FUN_00d50b20();
      }
    }
    puVar9 = local_78;
    FUN_001159b0();
  }
  lVar5 = g_026e3e60;
  plVar18 = *(int64_t **)(this_ptr + 0xd8);
  if (plVar18 != (int64_t *)0x0) {
    if (*(int *)((int64_t)puVar1 + 0xc) != 0) {
      if (puVar6 != (void*)0x0) {
        local_80[0] = '\0';
        local_88 = (void*)0x0;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_60 = (uint64_t)local_60._4_4_ << 0x20;
        plVar12 = (int64_t *)0x0;
        bVar22 = false;
        local_40 = (int64_t *)0x0;
        local_78 = puVar6;
        local_70._4_4_ = 0;
        do {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar15 = -local_70._4_4_;
            }
            else {
              iVar15 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar15);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar15 = 0;
            }
            local_70 = CONCAT44(iVar15,(int)local_70);
          }
          lVar5 = (int64_t)(int)local_70;
          iVar15 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar15);
          if (*(int *)((int64_t)local_78 + 0xc) <= iVar15) {
            puVar9 = local_78;
            uVar17 = (uint)local_60;
            goto LAB_001609f0;
          }
          puVar9 = (void*)local_78[2];
          local_88 = (void*)puVar9[lVar5 + 1];
          pvVar4 = _pthread_getspecific((void*)puVar9);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0134a500();
          plVar18 = local_50;
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar18 != (int64_t *)0x0) {
            pvVar4 = _pthread_getspecific((void*)puVar9);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0134a500();
            pvVar4 = _pthread_getspecific((void*)puVar9);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0141b7f0();
            plVar18 = local_50;
            if (local_48 == '\0') {
              if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
                 (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48 = '\0';
            }
            if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
              FUN_00d50b20();
            }
            uVar19 = (undefined7)((uint64_t)plVar12 >> 8);
            if (local_40 == (int64_t *)0x0) {
              if (plVar18 == (int64_t *)0x0) {
                local_40 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                bVar22 = true;
                local_40 = plVar18;
              }
              pVar3 = FUN_0141b8d0();
              FUN_0141b540();
              lVar8 = (int64_t)(int)pVar3;
              lVar5 = *(int64_t *)(local_50[2] + lVar8 * 8);
              if (lVar5 != 0) {
                FUN_00d50b00();
                pVar3 = (void*)lVar8;
              }
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (lVar5 != 0) {
                local_58 = plVar12;
                pvVar4 = _pthread_getspecific(pVar3);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b690();
                plVar11 = local_50;
                if (plVar12 == local_50) {
                  bVar21 = (char)local_60 == '\0';
                  plVar11 = plVar12;
                  uVar16 = (uint)local_60;
                  if ((bVar21) && (plVar11 = local_58, plVar12 != (int64_t *)0x0)) {
                    uVar16 = (uint32_t)CONCAT71(uVar19,1);
                    plVar12 = local_58;
                    if (local_48 != '\0') goto LAB_00160966;
                    local_60 = local_60 & 0xffffffff00000000;
                    FUN_00d50b00();
                    uVar16 = (int)CONCAT71(uVar19,1);
                  }
LAB_00160952:
                  plVar12 = plVar11;
                  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_48 == '\0') {
                    if (local_50 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar16 = (uint32_t)CONCAT71(uVar19,1);
                    if (((char)local_60 != '\0') && (local_58 != (int64_t *)0x0)) {
                      local_58 = plVar11;
                      FUN_00d50b20();
                    }
                    goto LAB_00160952;
                  }
                  uVar16 = (uint32_t)CONCAT71(uVar19,1);
                  plVar12 = plVar11;
                  if (((char)local_60 != '\0') && (local_58 != (int64_t *)0x0)) {
                    local_58 = local_50;
                    FUN_00d50b20();
                  }
                }
LAB_00160966:
                FUN_00d50b20();
                local_60 = CONCAT44(local_60._4_4_,uVar16);
              }
            }
            else {
              cVar2 = (**(code **)(*local_40 + 0x50))();
              plVar11 = g_02726ce0;
              if (cVar2 != '\0') goto LAB_00160b84;
            }
            if (plVar18 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        } while( true );
      }
      local_60 = (uint64_t)local_60._4_4_ << 0x20;
      plVar12 = (int64_t *)0x0;
      bVar22 = false;
      local_40 = (int64_t *)0x0;
      goto LAB_00160a26;
    }
    if (g_026e3e60 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar18 + 0x978))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  goto LAB_00160a8d;
LAB_00160b84:
  if (g_02726ce0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  cVar2 = (char)local_60;
  if (plVar12 == plVar11) {
    puVar9 = (void*)(local_60 & 0xffffffff);
    uVar17 = 1;
    if (plVar11 == (int64_t *)0x0) {
      uVar17 = (uint)local_60 & 0xff;
    }
    plVar14 = plVar12;
    if ((cVar2 != '\0') && (uVar17 = (uint)local_60 & 0xff, plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
      uVar17 = (uint)local_60;
    }
  }
  else {
    uVar17 = (uint)CONCAT71(uVar19,1);
    plVar14 = plVar11;
    if (((char)local_60 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar12 = plVar14;
  if (plVar18 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_001609f0:
  FUN_00115190();
  plVar18 = *(int64_t **)(this_ptr + 0xd8);
  local_60 = CONCAT44(local_60._4_4_,uVar17);
LAB_00160a26:
  (**(code **)(*plVar18 + 0x978))();
  if (((char)local_60 != '\0') && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar22) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00160a8d:
  pVar3 = (void*)puVar9;
  if (((*(int64_t *)(this_ptr + 0xe8) == 0) || (*(int64_t *)(this_ptr + 0xf0) == 0)) ||
     (*(int64_t *)(this_ptr + 0xf8) == 0)) {
    if (puVar6 == (void*)0x0) goto LAB_00160de7;
  }
  else {
    iVar15 = *(int *)((int64_t)puVar6 + 0xc);
    if (iVar15 == 1) {
      FUN_00d23310();
      puVar6 = local_88;
      pVar3 = (void*)CONCAT71((int7)((uint64_t)puVar9 >> 8),local_80[0]);
      pcVar10 = &local_98;
      if (local_80[0] != '\0') {
        pcVar10 = local_80;
      }
      local_98 = local_80[0];
      *pcVar10 = '\0';
      if ((local_80[0] != '\0') && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_01264240();
      plVar18 = local_50;
      if (local_50 == (int64_t *)0x0) {
        local_40 = (int64_t *)0x0;
        plVar18 = (int64_t *)0x0;
      }
      else if (local_48 == '\0') {
        uVar7 = FUN_00d50b00();
        local_40 = (int64_t *)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        local_40 = (int64_t *)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
      if ((local_98 != '\0') && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar13 = FUN_01326de0();
      bVar22 = true;
      if (iVar13 != 2) {
        pvVar4 = _pthread_getspecific(pVar3);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar13 = FUN_01326de0();
        bVar22 = iVar13 == 4;
      }
    }
    else {
      plVar18 = (int64_t *)0x0;
      local_40 = (int64_t *)0x0;
      bVar22 = false;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x998))();
    (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x998))();
    (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x998))();
    if (bVar22) {
      plVar12 = *(int64_t **)(this_ptr + 0xe8);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7bd0();
      (**(code **)(*plVar12 + 0x928))();
    }
    if (iVar15 == 1) {
      plVar12 = *(int64_t **)(this_ptr + 0xf0);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7ca0();
      (**(code **)(*plVar12 + 0x928))();
      plVar12 = *(int64_t **)(this_ptr + 0xf8);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7d70();
      (**(code **)(*plVar12 + 0x928))();
    }
    if (((char)local_40 != '\0') && (plVar18 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00160de7:
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0075cbd0
// ============================================================
// Function: FUN_0075cbd0
// Address: 0075cbd0
// Size: 4489 bytes
// Class: MUAudioFileSource

uint64_t FUN_0075cbd0(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint64_t uVar8;
  void*puVar9;
  void *pvVar10;
  int64_t *plVar11;
  char *pcVar12;
  uint64_t uVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t uVar15;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_248;
  uint8_t local_240;
  int64_t local_238;
  uint8_t local_230;
  uint8_t local_220;
  uint8_t local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t *local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint32_t local_84;
  int64_t *local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  plVar14 = local_78;
  FUN_017a52b0();
  lVar3 = CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  cVar5 = (**(code **)(*plVar14 + 0x50))();
  cVar6 = '\x01';
  if (cVar5 == '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    plVar1 = local_98;
    FUN_01552cd0();
    plVar14 = local_a8;
    if (local_a0 == '\0') {
      if (local_a8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    cVar6 = (**(code **)(*plVar1 + 0x50))();
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    plVar14 = local_78;
    FUN_014ffc90();
    lVar3 = CONCAT71(uStack_47,local_48);
    if (local_40 == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar5 = (**(code **)(*plVar14 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      local_1d8 = *arg1;
      local_1d0 = '\0';
      uVar15 = FUN_01500300();
      plVar14 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != (int64_t *)0x0) && (uVar15 = FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if (plVar14 == (int64_t *)0x0) goto LAB_0075e413;
      plVar1 = (int64_t *)*arg1;
      lVar3 = arg1[1];
      if (plVar1 == plVar14) {
        if ((char)lVar3 == '\0') {
          FUN_00d50b00();
          goto LAB_0075d26c;
        }
      }
      else {
        FUN_00d50b00();
        *arg1 = (int64_t)plVar14;
        if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0075d26c:
        *(void*)(arg1 + 1) = 1;
      }
      FUN_00d50b20();
    }
    local_1c8 = *arg1;
    local_1c0 = '\0';
    cVar5 = FUN_00b80190();
    uVar15 = extraout_XMM0_Da_01;
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      uVar15 = FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_0075e413;
    local_1b8 = *arg1;
    local_1b0 = '\0';
    uVar8 = FUN_00b810f0();
    plVar14 = local_78;
    uVar15 = extraout_XMM0_Da_02;
    if (local_78 == (int64_t *)0x0) {
      local_84 = (uint32_t)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      plVar14 = (int64_t *)0x0;
    }
    else {
      if (local_70[0] == '\0') {
        uVar15 = FUN_00d50b00();
        local_84 = 0;
        if ((local_70[0] == '\0') || (local_78 == (int64_t *)0x0)) goto LAB_0075d326;
        uVar15 = FUN_00d50b20();
      }
      else {
        local_70[0] = '\0';
      }
      local_84 = 0;
    }
LAB_0075d326:
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      uVar15 = FUN_00d50b20();
    }
    if (plVar14 == (int64_t *)0x0) goto LAB_0075e413;
    FUN_00b875e0();
    (**(code **)(*this_ptr + 0x498))();
    local_80 = local_78;
    if ((((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00cafd20();
    local_190 = '\0';
    local_198 = plVar14;
    FUN_00760510();
    lVar3 = CONCAT71(uStack_47,local_48);
    if (local_40 == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_220 = 1;
    FUN_00757c60();
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    plVar14 = local_78;
    pcVar12 = local_38;
    if (local_70[0] != '\0') {
      pcVar12 = local_70;
    }
    local_38[0] = local_70[0];
    *pcVar12 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_c0 = 0;
    if (local_38[0] == '\0') {
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_c0 = '\x01';
    local_c8 = plVar14;
    FUN_0075edc0(0,&local_c8);
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_80 + 0x3c8))();
    FUN_00b88600();
    (**(code **)(*(int64_t *)CONCAT71(uStack_47,local_48) + 0x3f0))();
    plVar14 = local_78;
    if (local_70[0] == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0075d61d;
      }
      if (this_ptr[0xc] != 0) {
        this_ptr[0xc] = 0;
        goto LAB_0075d8db;
      }
    }
    else {
      local_70[0] = '\0';
LAB_0075d61d:
      plVar1 = (int64_t *)this_ptr[0xc];
      if (plVar1 != plVar14) {
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        this_ptr[0xc] = (int64_t)plVar14;
        if (plVar1 != (int64_t *)0x0) {
LAB_0075d8db:
          FUN_00d50b20();
        }
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    FUN_00b8c730();
    FUN_00d8f1a0();
    plVar14 = local_78;
    if (local_70[0] == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70[0] = '\0';
    }
    local_210 = 1;
    FUN_00753620();
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00cb1f10();
    FUN_00db65f0();
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x2d) = 1;
    FUN_00d403d0();
    lVar3 = g_02703af8;
    if (g_02703af8 != 0) {
      FUN_00d50b00();
    }
    local_188 = lVar3;
    local_180 = '\x01';
    FUN_00d50b00();
    local_178 = 0;
    local_170 = '\0';
    FUN_00d40470(&local_178,&stack0xfffffffffffffec8,1,3);
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar13 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
    if ((char)local_84 == '\0') {
      FUN_00d50b20();
    }
    goto LAB_0075e63c;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  plVar14 = local_78;
  FUN_017a52b0();
  lVar3 = CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  uVar7 = (**(code **)(*plVar14 + 0x50))();
  puVar9 = (void*)(uint64_t)uVar7;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar7 == '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    plVar14 = local_78;
    FUN_01552cd0();
    lVar3 = CONCAT71(uStack_47,local_48);
    if (local_40 == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar5 = (**(code **)(*plVar14 + 0x50))();
    uVar15 = extraout_XMM0_Da_00;
    if (lVar3 != 0) {
      uVar15 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      uVar15 = FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025f02c0;
      param_1 = 0x25f0658;
      puVar9[2] = &g_025f0658;
      puVar9[3] = 0;
      *(void*)(puVar9 + 4) = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      uVar15 = (*g_025f02d8)();
      local_1f8 = *arg1;
      local_1f0 = '\0';
      FUN_015ab850(uVar15,&local_1f8);
      plVar14 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      uVar15 = FUN_00d50b20();
      if (plVar14 != (int64_t *)0x0) {
        local_1e8 = plVar14;
        local_1e0 = '\0';
        uVar8 = FUN_004a0ad0();
        plVar14 = local_78;
        if (local_78 == (int64_t *)0x0) {
          plVar14 = (int64_t *)0x0;
          local_80 = (int64_t *)0x0;
        }
        else if (local_70[0] == '\0') {
          uVar8 = FUN_00d50b00();
          local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70[0] = '\0';
          local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
        }
        if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar15 = FUN_00d50b20();
        goto LAB_0075d7f5;
      }
    }
LAB_0075e413:
    lVar3 = g_02729518;
    if (g_02729518 != 0) {
      uVar15 = FUN_00d50b00();
    }
    lVar4 = g_02729520;
    local_168 = lVar3;
    local_160 = '\x01';
    if (g_02729520 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_158 = lVar4;
    local_150 = '\x01';
    FUN_01f6ca30(uVar15,&local_158);
    plVar14 = local_78;
    if (local_70[0] == '\0') {
      if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x388))();
    lVar3 = g_02729528;
    if (g_02729528 != 0) {
      FUN_00d50b00();
    }
    local_a8 = local_98;
    local_148 = lVar3;
    FUN_00083ea0(2,&local_148);
    FUN_000b4da0();
    local_b0 = 0;
    local_b8 = CONCAT71(uStack_47,local_48);
    if (local_40 == '\0') {
      if (local_b8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_b0 = '\x01';
    (**(code **)(*plVar14 + 0x5d8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    local_78 = (int64_t *)&g_0253d630;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar13 = 0;
  }
  else {
    local_208 = *arg1;
    local_200 = '\0';
    FUN_00362a30();
    plVar1 = local_78;
    if (local_70[0] == '\0') {
      if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
    }
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
    cVar5 = FUN_017a7650();
    if (cVar5 == '\0') {
      local_80 = (int64_t *)0x0;
      plVar14 = (int64_t *)0x0;
      uVar15 = extraout_XMM0_Da;
LAB_0075d743:
      if (plVar1 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b20();
      }
LAB_0075d7f5:
      if (plVar14 == (int64_t *)0x0) goto LAB_0075e413;
      pvVar10 = _pthread_getspecific(param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a7d00();
      local_248 = *arg1;
      local_240 = 0;
      lVar3 = this_ptr[0x18];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_230 = 1;
      local_238 = lVar3;
      FUN_0075a190(&local_238,&local_248,1);
      uVar13 = CONCAT71((int7)((uint64_t)puVar9 >> 8),1);
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      uVar8 = FUN_00363970(extraout_XMM0_Da,&local_48);
      plVar14 = local_78;
      if (local_78 == (int64_t *)0x0) {
        plVar14 = (int64_t *)0x0;
        local_80 = (int64_t *)0x0;
      }
      else {
        local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
        if (((local_70[0] == '\0') && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar15 = FUN_017a8f30();
      plVar2 = (int64_t *)this_ptr[0x18];
      plVar11 = plVar2;
      if (plVar2 != local_78) {
        if (local_70[0] == '\0') {
          if (local_78 == (int64_t *)0x0) {
            plVar11 = (int64_t *)0x0;
            goto LAB_0075d680;
          }
          uVar15 = FUN_00d50b00();
          plVar2 = (int64_t *)this_ptr[0x18];
          this_ptr[0x18] = (int64_t)local_78;
          plVar11 = local_78;
        }
        else {
          local_70[0] = '\0';
          plVar11 = local_78;
LAB_0075d680:
          this_ptr[0x18] = (int64_t)plVar11;
        }
        param_1 = (void*)plVar2;
        if (plVar2 != (int64_t *)0x0) {
          uVar15 = FUN_00d50b20();
          plVar11 = local_78;
        }
      }
      if ((local_70[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      if (local_48 == '\0') goto LAB_0075d743;
      FUN_01f27fe0();
      uVar7 = (**(code **)(*local_78 + 0x558))();
      puVar9 = (void*)(uint64_t)uVar7;
      uVar15 = extraout_XMM0_Da_03;
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      if ((char)uVar7 != '\0') goto LAB_0075d743;
      pvVar10 = _pthread_getspecific(param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar13 = 0;
    }
    if (((char)local_80 != '\0') && (plVar14 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_0075e63c:
  return uVar13 & 0xffffffff;
}



// ============================================================
// 012e1a00
// ============================================================
// Function: FUN_012e1a00
// Address: 012e1a00
// Size: 4441 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_012e1a00(void* param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  uint8_t uVar7;
  byte bVar8;
  int iVar9;
  void *pvVar10;
  void*puVar11;
  void* pVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t **pplVar15;
  uint32_t uVar16;
  int64_t *local_298;
  uint8_t local_290;
  int64_t *local_288;
  char local_280;
  int64_t *local_278;
  char local_270;
  int64_t *local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t *local_208;
  char local_200;
  int64_t *local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  void*local_158;
  int local_150;
  uint32_t uStack_14c;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar15 = &local_68;
  FUN_01320d00();
  plVar14 = local_68;
  if ((g_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    g_026e3238 = FUN_00115af0();
    g_026e3220 = "MUAudioFileSource";
    g_026e3228 = 0xa0;
    param_1 = 0x136df0;
    g_026e3230 = FUN_00136df0;
    g_026e3240 = 0;
    ram_00000000026e3248 = 0;
    g_026e3250 = 0;
    ram_00000000026e3258 = 0;
    g_026e3260 = 0;
    ram_00000000026e3268 = 0;
    g_026e3270 = 0;
    ram_00000000026e3278 = 0;
    g_026e3280 = 0;
    ram_00000000026e3288 = 0;
    g_026e3290 = 0;
    ram_00000000026e3298 = 0;
    g_026e32a0 = 0;
    ram_00000000026e32a8 = 0;
    g_026e32b0 = 0;
    ram_00000000026e32b8 = 0;
    g_026e32c0 = 0;
    ram_00000000026e32c8 = 0;
    g_026e32d0 = 0;
    ram_00000000026e32d8 = 0;
    g_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar14 == (int64_t *)0x0) {
LAB_012e1a95:
    pplVar15 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar14 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_012e1a95;
  }
  plVar14 = *pplVar15;
  if (*(char *)(pplVar15 + 1) == '\0') {
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar15 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar14 == (int64_t *)0x0) {
    uVar13 = 0;
    goto LAB_012e2a9b;
  }
  if (unaff_SIL == '\0') {
    FUN_012e0fb0();
    plVar14 = local_68;
    if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    uVar16 = FUN_00003040();
    uVar16 = FUN_00d91a70(uVar16,1);
    local_d0 = local_78;
    local_c8 = 0;
    plVar3 = g_027c2508;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        uVar16 = FUN_00d50b00();
        plVar3 = g_027c2508;
      }
    }
    else {
      local_70 = '\0';
    }
    local_c8 = '\x01';
    g_027c2508 = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      local_c8 = '\x01';
      uVar16 = FUN_00d50b00();
    }
    local_60 = '\0';
    local_68 = plVar3;
    FUN_00ca0840(uVar16,&local_68);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    uVar16 = FUN_00003050();
    uVar16 = FUN_00d91a70(uVar16,1);
    local_c0 = local_78;
    local_b8 = 0;
    plVar3 = g_027c2510;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        uVar16 = FUN_00d50b00();
        plVar3 = g_027c2510;
      }
    }
    else {
      local_70 = '\0';
    }
    local_b8 = '\x01';
    g_027c2510 = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      local_b8 = '\x01';
      uVar16 = FUN_00d50b00();
    }
    local_60 = '\0';
    local_68 = plVar3;
    FUN_00ca0840(uVar16,&local_68);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    plVar3 = local_68;
    local_80 = local_68;
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012e2043;
      }
LAB_012e23dc:
      bVar2 = true;
      bVar1 = true;
      lVar4 = g_027c24d8;
joined_r0x012e23e9:
      g_027c24d8 = lVar4;
      if (lVar4 != 0) {
        FUN_00d50b00();
        bVar1 = bVar2;
      }
      lVar5 = g_027c24e0;
      local_250 = '\x01';
      local_258 = lVar4;
      if (g_027c24e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027c24e8;
      local_248 = lVar5;
      local_240 = '\x01';
      if (g_027c24e8 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_98 = local_80;
      uVar16 = FUN_00083ea0(2,&local_98);
      FUN_00e972c0(uVar16,&local_68);
      local_68 = (int64_t *)&g_0253d630;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_68 = &g_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_240 != '\0') && (local_248 != 0)) {
        FUN_00d50b20();
      }
      bVar8 = 1;
      if ((local_250 != '\0') && (local_258 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar1) goto LAB_012e2a78;
    }
    else {
      if (local_68 == (int64_t *)0x0) goto LAB_012e23dc;
LAB_012e2043:
      cVar6 = (**(code **)(*plVar3 + 0x398))();
      if (cVar6 == '\0') {
        bVar2 = false;
        bVar1 = false;
        lVar4 = g_027c24d8;
        goto joined_r0x012e23e9;
      }
      local_38 = plVar14;
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_025c2410;
      FUN_00d500e0();
      local_238 = plVar3;
      local_230 = '\0';
      local_158 = puVar11;
      uVar16 = FUN_014fff90();
      plVar3 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (int64_t *)0x0) && (uVar16 = FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (int64_t *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      local_228 = plVar3;
      local_220 = '\0';
      local_a0 = plVar3;
      FUN_00cc95f0(uVar16,0);
      plVar3 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      local_88 = plVar3;
      if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar4 = g_027c2518;
      if (g_027c2518 != 0) {
        FUN_00d50b00();
      }
      local_218 = lVar4;
      local_210 = '\x01';
      local_208 = plVar14;
      local_200 = '\0';
      local_1f8 = (int64_t *)0x0;
      local_1f0 = '\0';
      local_1e8 = 0;
      local_1e0 = '\0';
      cVar6 = FUN_00cc9d90(&local_208,1,&local_1f8,&local_1e8);
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
        (**(code **)(*local_1f8 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_200 != '\0') && (local_208 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = g_027c2548;
      bVar8 = 1;
      plVar14 = local_a0;
      if (cVar6 != '\0') {
        if (g_027c2548 != 0) {
          FUN_00d50b00();
        }
        local_1d8 = lVar4;
        local_1d0 = '\x01';
        local_1c8 = *this_ptr;
        local_1c0 = '\0';
        local_1b8 = (int64_t *)0x0;
        local_1b0 = '\0';
        local_1a8 = 0;
        local_1a0 = '\0';
        cVar6 = FUN_00cc9d90(&local_1c8,0xd,&local_1b8,&local_1a8);
        plVar14 = local_a0;
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
          (**(code **)(*local_1b8 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_1c0 != '\0') && (local_1c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          local_198 = local_80;
          local_190 = '\0';
          FUN_00deb9f0();
          plVar3 = local_68;
          if (local_60 == '\0') {
            if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
               (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60 = '\0';
          }
          if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar4 = g_027c24f0;
          if (g_027c24f0 != 0) {
            FUN_00d50b00();
          }
          local_188 = lVar4;
          local_180 = '\x01';
          FUN_00de6fa0();
          local_b0 = local_68;
          local_a8 = 0;
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          plVar14 = local_a0;
          local_a8 = '\x01';
          bVar8 = FUN_00cc9d30(&local_b0,1);
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          bVar8 = bVar8 ^ 1;
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if (local_88 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar14 = local_38;
LAB_012e2a78:
      FUN_00d50b20();
    }
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar13 = (uint64_t)(bVar8 == 0);
  }
  else {
    uVar16 = FUN_00d9bb60();
    plVar14 = local_68;
    if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
        (uVar16 = FUN_00d50b00(), local_60 != '\0')) && (local_68 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    local_298 = plVar14;
    local_290 = 0;
    local_88 = plVar14;
    FUN_012e16c0(uVar16,&local_298);
    local_80 = local_68;
    if (((local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_60 != '\0' && (local_68 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_013d91b0();
    local_288 = local_80;
    local_280 = '\0';
    FUN_000030c0();
    FUN_00d91a70((int64_t)local_150,1);
    local_140 = local_78;
    local_138 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_138 = '\x01';
    local_278 = plVar14;
    local_270 = '\0';
    uVar16 = FUN_00003040();
    FUN_00d91a70(uVar16,1);
    local_130 = local_98;
    local_128 = 0;
    if (local_90 == '\0') {
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_128 = '\x01';
    uVar16 = FUN_00003050();
    FUN_00d91a70(uVar16,1);
    local_118 = 0;
    local_120 = CONCAT44(uStack_14c,local_150);
    if (local_148 == '\0') {
      if (local_120 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_118 = '\x01';
    uVar16 = FUN_00003080();
    FUN_00d91a70(uVar16,1);
    local_110 = local_178;
    local_108 = 0;
    if (local_170 == '\0') {
      if (local_178 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_170 = '\0';
    }
    local_108 = '\x01';
    uVar16 = FUN_000030a0();
    FUN_00d91a70(uVar16,1);
    local_100 = local_168;
    local_f8 = 0;
    if (local_160 == '\0') {
      if (local_168 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_160 = '\0';
    }
    local_f8 = '\x01';
    pplVar15 = &local_278;
    FUN_00bdf830(pplVar15,&local_140,uVar7,&local_130);
    plVar14 = local_68;
    pVar12 = (void*)pplVar15;
    if (local_60 == '\0') {
      if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (CONCAT44(uStack_14c,local_150) != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_270 != '\0') && (local_278 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_280 != '\0') && (local_288 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific(pVar12);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b100();
    local_268 = plVar14;
    local_260 = '\0';
    pvVar10 = _pthread_getspecific(pVar12);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar16 = FUN_0123b100();
    local_e0 = local_98;
    local_d8 = 0;
    if (local_90 == '\0') {
      if (local_98 != (int64_t *)0x0) {
        uVar16 = FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    plVar3 = local_88;
    local_d8 = '\x01';
    FUN_00be0550(uVar16,&local_e0);
    lVar4 = local_78;
    local_e8 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_e8 = '\x01';
    local_f0 = lVar4;
    FUN_00b8cce0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_260 != '\0') && (local_268 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar13 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_012e2a9b:
  return uVar13 & 0xffffffff;
}



// ============================================================
// 0075edc0
// ============================================================
// Function: FUN_0075edc0
// Address: 0075edc0
// Size: 3824 bytes
// Class: MUAudioFileSource

uint32_t FUN_0075edc0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  int iVar5;
  uint32_t uVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  void *pvVar9;
  char *pcVar10;
  char in_CL;
  void* pVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  double dVar17;
  uint64_t uVar18;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  int64_t local_e8;
  char local_e0;
  int local_d4;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  int64_t local_a0;
  char local_98 [8];
  int64_t local_90;
  uint64_t local_88;
  uint32_t local_80;
  int64_t local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58 [8];
  char local_48 [4];
  uint local_44;
  int64_t local_40;
  char local_38;
  
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  lVar15 = g_026e1800;
  if (g_026e1800 != 0) {
    FUN_00d50b00();
  }
  dVar17 = (double)FUN_00e7d6f0();
  uVar8 = (uint64_t)(dVar17 * g_023907c0);
  dVar17 = dVar17 * g_023907c0 - g_023907c8;
  plVar12 = (int64_t *)0xaaaaaaaaaaaaaaab;
  uVar18 = FUN_0071a120();
  if ((((local_98[0] == '\0') && (local_a0 != 0)) && (uVar18 = FUN_00d50b00(), local_98[0] != '\0'))
     && (local_a0 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  bVar4 = (byte)(((int64_t)dVar17 & (int64_t)uVar8 >> 0x3f | uVar8) / 3);
  local_40 = lVar15;
  local_38 = '\0';
  FUN_000175c0(uVar18,&local_40);
  if (local_98[0] == '\0') {
    if (((local_a0 != 0) && (FUN_00d50b00(), local_98[0] != '\0')) && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98[0] = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    local_98[0] = '\0';
    bVar4 = FUN_00c70bc0();
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar18 = FUN_00d50b20();
  if (lVar15 != 0) {
    uVar18 = FUN_00d50b20();
  }
  pVar11 = (void*)plVar12;
  if ((local_a0 != 0 & bVar4) == 0) {
    (**(code **)(*this_ptr + 0x628))();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar9 = _pthread_getspecific(pVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    local_48[0] = local_98[0];
    pcVar10 = local_48;
    if (local_98[0] != '\0') {
      pcVar10 = local_98;
    }
    *pcVar10 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_c8 = 0;
    if (local_48[0] == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48[0] = '\0';
    }
    local_c8 = '\x01';
    local_d0 = local_a0;
    uVar18 = FUN_00d23310();
    pcVar10 = local_98;
    if (local_98[0] == '\0') {
      pcVar10 = local_58;
    }
    local_58[0] = local_98[0];
    *pcVar10 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    local_e0 = 0;
    if ((local_58[0] == '\0') && (local_a0 != 0)) {
      uVar18 = FUN_00d50b00();
    }
    local_e8 = local_a0;
    local_e0 = '\x01';
    FUN_002474e0(uVar18,&local_e8);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar15 = *param_2;
    local_44 = (uint)CONCAT71((int7)((uint64_t)uVar18 >> 8),(char)param_2[1]);
    if (((char)param_2[1] != '\0') && (lVar15 != 0)) {
      FUN_00d50b00();
    }
    lVar1 = *arg1;
    if (lVar1 != 0) {
      local_98[0] = '\0';
      local_80 = 0;
      local_88 = 0;
      local_90 = lVar1;
      local_60 = lVar15;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar15 = 0;
        local_d4 = 0;
        do {
          lVar13 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar15 * 8);
          FUN_00b88600();
          uVar18 = (**(code **)(*local_70 + 0x390))();
          local_78 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (uVar18 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0))
            {
              uVar18 = FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
          pVar11 = (void*)plVar12;
          if ((int)lVar15 == 0) {
            if ((*param_2 == 0) || (lVar14 = local_60, uVar16 = local_44, in_CL != '\0')) {
              (**(code **)(*this_ptr + 0x628))();
              pvVar9 = _pthread_getspecific(pVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_190 = local_78;
              local_188 = '\0';
              local_180 = *param_2;
              local_178 = '\0';
              plVar12 = &local_180;
              uVar18 = FUN_004a41a0(plVar12,&local_190,0);
              lVar2 = local_40;
              lVar14 = *param_2;
              if (lVar14 == local_40) {
                if (((char)param_2[1] == '\0') && (local_40 != 0)) {
                  if (local_38 != '\0') goto LAB_0075f583;
                  uVar18 = FUN_00d50b00();
                  goto LAB_0075f6d0;
                }
LAB_0075f6d8:
                if ((local_38 != '\0') && (local_40 != 0)) {
                  uVar18 = FUN_00d50b20();
                }
              }
              else {
                lVar3 = param_2[1];
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    uVar18 = FUN_00d50b00();
                  }
                  *param_2 = lVar2;
                  if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                    uVar18 = FUN_00d50b20();
                  }
LAB_0075f6d0:
                  *(void*)(param_2 + 1) = 1;
                  goto LAB_0075f6d8;
                }
                *param_2 = local_40;
                if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                  uVar18 = FUN_00d50b20();
                }
LAB_0075f583:
                *(void*)(param_2 + 1) = 1;
                local_38 = '\0';
              }
              if ((local_178 != '\0') && (local_180 != 0)) {
                uVar18 = FUN_00d50b20();
              }
              if ((local_188 != '\0') && (local_190 != 0)) {
                uVar18 = FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
              lVar14 = local_60;
              uVar16 = local_44;
              if (in_CL != '\0') {
                lVar2 = *param_2;
                bVar4 = *(byte *)(param_2 + 1);
                uVar16 = (uint)bVar4;
                if (local_60 == lVar2) {
                  uVar16 = local_44;
                  if (((bVar4 != 0) && ((char)local_44 == '\0')) && (local_60 != 0)) {
                    local_44 = 0;
                    uVar18 = FUN_00d50b00();
                    uVar16 = 1;
                  }
                }
                else {
                  if ((bVar4 != 0) && (lVar2 != 0)) {
                    uVar18 = FUN_00d50b00();
                  }
                  lVar14 = lVar2;
                  if (((char)local_44 != '\0') && (local_60 != 0)) {
                    local_60 = lVar2;
                    uVar18 = FUN_00d50b20();
                  }
                }
              }
            }
            local_170 = *param_2;
            local_168 = '\0';
            local_158 = '\0';
            local_160 = lVar13;
            FUN_002474e0(uVar18,&local_160);
            lVar13 = local_78;
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            if ((local_168 != '\0') && (local_170 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (in_CL == '\0') {
              pvVar9 = _pthread_getspecific(pVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e6a50();
              lVar14 = local_40;
              if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != 0)) {
                FUN_00d50b20();
              }
              local_f0 = lVar14;
              pvVar9 = _pthread_getspecific(pVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e6160();
              local_c0 = local_40;
              if (((local_38 == '\0') && (local_40 != 0)) &&
                 ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
                FUN_00d50b20();
              }
              local_40 = *param_2;
              local_38 = '\0';
              iVar5 = FUN_00d237a0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (iVar5 + 1 < *(int *)(local_c0 + 0xc)) {
                plVar12 = (int64_t *)(int64_t)(iVar5 + 1);
                lVar14 = *(int64_t *)(*(int64_t *)(local_c0 + 0x10) + (int64_t)plVar12 * 8);
                lVar2 = *param_2;
                lVar3 = param_2[1];
                if (lVar2 == lVar14) {
                  if (((char)lVar3 != '\0') || (lVar14 == 0)) goto LAB_0075f8c0;
                  FUN_00d50b00();
                }
                else {
                  if (lVar14 != 0) {
                    FUN_00d50b00();
                  }
                  *param_2 = lVar14;
                  if (((char)lVar3 != '\0') && (lVar2 != 0)) {
                    FUN_00d50b20();
                  }
                }
                *(void*)(param_2 + 1) = 1;
              }
              else {
                (**(code **)(*this_ptr + 0x628))();
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_130 = local_78;
                local_128 = '\0';
                local_120 = *param_2;
                local_118 = '\0';
                plVar12 = &local_120;
                FUN_004a41a0(plVar12,&local_130,0);
                lVar2 = local_40;
                lVar14 = *param_2;
                if (lVar14 == local_40) {
                  if (((char)param_2[1] == '\0') && (local_40 != 0)) {
                    if (local_38 != '\0') goto LAB_0075f5d8;
                    FUN_00d50b00();
                    goto LAB_0075f85c;
                  }
LAB_0075f864:
                  if ((local_38 != '\0') && (local_40 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  lVar3 = param_2[1];
                  if (local_38 == '\0') {
                    if (local_40 != 0) {
                      FUN_00d50b00();
                    }
                    *param_2 = lVar2;
                    if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                      FUN_00d50b20();
                    }
LAB_0075f85c:
                    *(void*)(param_2 + 1) = 1;
                    goto LAB_0075f864;
                  }
                  *param_2 = local_40;
                  if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                    FUN_00d50b20();
                  }
LAB_0075f5d8:
                  *(void*)(param_2 + 1) = 1;
                  local_38 = '\0';
                }
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_0075f8c0:
              uVar18 = FUN_00d50b20();
              if (local_f0 != 0) {
                uVar18 = FUN_00d50b20();
              }
            }
            else {
              (**(code **)(*this_ptr + 0x628))();
              pvVar9 = _pthread_getspecific(pVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_150 = local_78;
              local_148 = '\0';
              local_140 = local_60;
              local_138 = '\0';
              plVar12 = &local_140;
              uVar18 = FUN_004a41a0(plVar12,&local_150,local_d4);
              lVar2 = local_40;
              lVar14 = *param_2;
              if (lVar14 == local_40) {
                if (((char)param_2[1] == '\0') && (local_40 != 0)) {
                  if (local_38 != '\0') goto LAB_0075f521;
                  uVar18 = FUN_00d50b00();
                  goto LAB_0075f657;
                }
LAB_0075f65f:
                if ((local_38 != '\0') && (local_40 != 0)) {
                  uVar18 = FUN_00d50b20();
                }
              }
              else {
                lVar3 = param_2[1];
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    uVar18 = FUN_00d50b00();
                  }
                  *param_2 = lVar2;
                  if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                    uVar18 = FUN_00d50b20();
                  }
LAB_0075f657:
                  *(void*)(param_2 + 1) = 1;
                  goto LAB_0075f65f;
                }
                *param_2 = local_40;
                if (((char)lVar3 != '\0') && (lVar14 != 0)) {
                  uVar18 = FUN_00d50b20();
                }
LAB_0075f521:
                *(void*)(param_2 + 1) = 1;
                local_38 = '\0';
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                uVar18 = FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != 0)) {
                uVar18 = FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
            }
            local_110 = *param_2;
            local_108 = '\0';
            local_f8 = '\0';
            local_100 = lVar13;
            FUN_002474e0(uVar18,&local_100);
            lVar13 = local_78;
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            local_d4 = local_d4 + 1;
            lVar14 = local_60;
            uVar16 = local_44;
          }
          local_44 = uVar16;
          local_60 = lVar14;
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          lVar15 = lVar15 + 1;
          local_88 = CONCAT44(local_88._4_4_,(int)lVar15);
        } while ((int)lVar15 < *(int *)(lVar1 + 0xc));
      }
      FUN_002d7370();
      lVar15 = local_60;
    }
    if (((char)local_44 != '\0') && (lVar15 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = FUN_00767640(param_1);
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar6;
}



// ============================================================
// 00538a80
// ============================================================
// Function: FUN_00538a80
// Address: 00538a80
// Size: 3754 bytes
// Class: MUAudioFileSource

void FUN_00538a80(double param_1,double param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  void*puVar8;
  int64_t lVar9;
  void *pvVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  void* pVar13;
  uint uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t *in_RDX;
  int iVar18;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar19;
  uint64_t uVar20;
  double dVar21;
  double dVar22;
  int64_t local_108;
  char local_100;
  double local_a8;
  double local_a0;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  if (NAN(param_1)) {
    if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
      if (*in_RDX != 0) {
        local_68._0_1_ = '\0';
        local_70 = 0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        local_a8 = param_2;
        local_a0 = param_1;
        local_60 = *in_RDX;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if ((int)local_58._4_4_ < 1) {
              iVar18 = -local_58._4_4_;
            }
            else {
              iVar18 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar18);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar18 = 0;
            }
            local_58 = CONCAT44(iVar18,(int)local_58);
          }
          lVar9 = (int64_t)(int)local_58;
          iVar18 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar18);
          if (*(int *)(local_60 + 0xc) <= iVar18) break;
          lVar17 = *(int64_t *)(local_60 + 0x10);
          local_70 = *(int64_t *)(lVar17 + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((void*)lVar17);
          pVar13 = (void*)lVar17;
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar19 = (double)FUN_012ebfe0();
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar21 = (double)FUN_012ebd30();
          dVar21 = dVar21 - dVar19;
          dVar4 = local_a8;
          dVar22 = local_a0;
          if ((g_02390448 < dVar21) &&
             (dVar22 = (double)FUN_00e7b500(dVar19), dVar4 = dVar21, !NAN(local_a0))) {
            dVar22 = (double)FUN_00e7b6a0(local_a0);
            dVar4 = local_a8;
          }
          local_a0 = dVar22;
          local_a8 = dVar4;
        }
        FUN_000be170();
        param_1 = local_a0;
        param_2 = local_a8;
      }
    }
    else {
      param_1 = (double)FUN_005388f0();
    }
  }
  *(double *)(this_ptr + 0x348) = param_1;
  *(double *)(this_ptr + 0x350) = param_2;
  plVar12 = (int64_t *)*arg1;
  plVar1 = *(int64_t **)(this_ptr + 0x328);
  bVar6 = 1;
  bVar5 = 1;
  if (((plVar12 != plVar1) && (bVar5 = 0, plVar12 != (int64_t *)0x0)) &&
     (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b00();
    bVar5 = (**(code **)(*plVar12 + 0x50))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar12 = (int64_t *)*in_RDX;
  plVar1 = *(int64_t **)(this_ptr + 0x330);
  if (plVar12 == plVar1) {
LAB_00538ba7:
    if ((bVar5 & bVar6) != 0) goto LAB_00539701;
    bVar6 = bVar6 ^ 1;
  }
  else {
    bVar6 = 1;
    if ((plVar12 != (int64_t *)0x0) && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b00();
      bVar6 = (**(code **)(*plVar12 + 0x50))();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_00538ba7;
    }
  }
  lVar9 = *arg1;
  lVar17 = *(int64_t *)(this_ptr + 0x328);
  if (lVar17 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x328) = lVar9;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  lVar9 = *in_RDX;
  lVar17 = *(int64_t *)(this_ptr + 0x330);
  if (lVar17 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x330) = lVar9;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  if ((*arg1 != 0) && ((*(int *)(*arg1 + 0xc) != 0 && bVar5 == 0) && bVar6 == 0)) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*g_02572370)();
    lVar9 = *in_RDX;
    *in_RDX = (int64_t)puVar8;
    if (((char)in_RDX[1] != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(in_RDX + 1) = 1;
    if (*arg1 != 0) {
      local_68._0_1_ = '\0';
      local_70 = 0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = *arg1;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if ((int)local_58._4_4_ < 1) {
            iVar18 = -local_58._4_4_;
          }
          else {
            iVar18 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar18);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar18 = 0;
          }
          local_58 = CONCAT44(iVar18,(int)local_58);
        }
        lVar9 = (int64_t)(int)local_58;
        iVar18 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar18);
        if (*(int *)(local_60 + 0xc) <= iVar18) break;
        lVar17 = *(int64_t *)(local_60 + 0x10);
        local_70 = *(int64_t *)(lVar17 + 8 + lVar9 * 8);
        pvVar10 = _pthread_getspecific((void*)lVar17);
        pVar13 = (void*)lVar17;
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01653bd0();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f20();
        lVar9 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = lVar9;
        cVar7 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          local_40 = '\0';
          local_48 = lVar9;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00277f20();
    }
  }
  lVar17 = local_70;
  lVar9 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar19 = (double)FUN_00e7d6f0();
  uVar11 = (uint64_t)(dVar19 * g_023907c0);
  dVar19 = dVar19 * g_023907c0 - g_023907c8;
  uVar15 = 0xaaaaaaaaaaaaaaab;
  uVar20 = FUN_0071a120();
  if (((((char)local_68 == '\0') && (local_70 != 0)) &&
      (uVar20 = FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
    uVar20 = FUN_00d50b20();
  }
  bVar5 = (byte)(((int64_t)dVar19 & (int64_t)uVar11 >> 0x3f | uVar11) / 3);
  local_48 = lVar9;
  local_40 = '\0';
  FUN_000175c0(uVar20,&local_48);
  if ((char)local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    local_68._0_1_ = '\0';
    bVar5 = FUN_00c70bc0();
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != 0 & bVar5) == 0) {
    if ((*in_RDX == 0) || (iVar18 = *(int *)(*in_RDX + 0xc), iVar18 == 0)) {
      if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) goto LAB_005393a7;
      FUN_00d23310();
      pVar13 = (void*)CONCAT71((int7)((uint64_t)uVar15 >> 8),(char)local_68);
      plVar12 = (int64_t *)local_38;
      if ((char)local_68 != '\0') {
        plVar12 = &local_68;
      }
      local_38[0] = (char)local_68;
      *(void*)plVar12 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific(pVar13);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar10 = _pthread_getspecific(pVar13);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f20();
      lVar9 = CONCAT71(local_90._1_7_,(char)local_90);
      if (local_88 == '\0') {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      FUN_000ba510();
      lVar2 = local_48;
      lVar16 = *in_RDX;
      if (lVar16 == local_48) {
        if (((char)in_RDX[1] == '\0') && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_00539251;
          FUN_00d50b00();
          goto LAB_005392f4;
        }
LAB_005392f9:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = in_RDX[1];
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *in_RDX = lVar2;
          if (((char)lVar3 != '\0') && (lVar16 != 0)) {
            FUN_00d50b20();
          }
LAB_005392f4:
          *(void*)(in_RDX + 1) = 1;
          goto LAB_005392f9;
        }
        *in_RDX = local_48;
        if (((char)lVar3 != '\0') && (lVar16 != 0)) {
          FUN_00d50b20();
        }
LAB_00539251:
        *(void*)(in_RDX + 1) = 1;
        local_40 = '\0';
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (1 < iVar18) {
      FUN_00d23310();
      plVar12 = &local_90;
      if ((char)local_68 != '\0') {
        plVar12 = &local_68;
      }
      local_90._0_1_ = (char)local_68;
      *(void*)plVar12 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_90 == '\0') && (local_70 != 0)) {
        FUN_00d50b00();
      }
      FUN_000ba510();
      lVar16 = local_48;
      lVar9 = *in_RDX;
      if (lVar9 == local_48) {
        if (((char)in_RDX[1] == '\0') && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_00539284;
          FUN_00d50b00();
          goto LAB_00539375;
        }
LAB_00539379:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar2 = in_RDX[1];
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *in_RDX = lVar16;
          if (((char)lVar2 != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
LAB_00539375:
          *(void*)(in_RDX + 1) = 1;
          goto LAB_00539379;
        }
        *in_RDX = local_48;
        if (((char)lVar2 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
LAB_00539284:
        *(void*)(in_RDX + 1) = 1;
        local_40 = '\0';
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
    }
LAB_005393a7:
    if (*in_RDX == 0) goto LAB_0053967d;
    lVar9 = 0;
    if (*arg1 != 0) {
      FUN_00d23310();
      plVar12 = &local_68;
      if ((char)local_68 == '\0') {
        plVar12 = &local_48;
      }
      local_48 = CONCAT71(local_48._1_7_,(char)local_68);
      *(void*)plVar12 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 == '\0') && (local_70 != 0)) {
        FUN_00d50b00();
      }
      FUN_00539f40();
      lVar9 = *arg1;
      if (lVar9 == local_70) {
        if (((char)arg1[1] == '\0') && (local_70 != 0)) {
          if ((char)local_68 != '\0') goto LAB_005394db;
          FUN_00d50b00();
          goto LAB_005394bd;
        }
LAB_005394c2:
        if (((char)local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar16 = arg1[1];
        if ((char)local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_70;
          if (((char)lVar16 != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
LAB_005394bd:
          *(void*)(arg1 + 1) = 1;
          goto LAB_005394c2;
        }
        *arg1 = local_70;
        if (((char)lVar16 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
LAB_005394db:
        *(void*)(arg1 + 1) = 1;
        local_68._0_1_ = '\0';
      }
      if (*arg1 != 0) {
        local_68._0_1_ = '\0';
        local_70 = 0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = *arg1;
        uVar14 = 0;
        while( true ) {
          if (uVar14 != 0) {
            if ((int)uVar14 < 1) {
              iVar18 = -uVar14;
            }
            else {
              local_58 = CONCAT44(local_58._4_4_,(int)local_58 - uVar14);
              FUN_00d23690(uVar14,uVar14);
              local_50 = local_50 + local_58._4_4_;
              iVar18 = 0;
            }
            local_58 = CONCAT44(iVar18,(int)local_58);
          }
          lVar9 = (int64_t)(int)local_58;
          iVar18 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar18);
          if (*(int *)(local_60 + 0xc) <= iVar18) break;
          lVar16 = *(int64_t *)(local_60 + 0x10);
          local_70 = *(int64_t *)(lVar16 + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((void*)lVar16);
          pVar13 = (void*)lVar16;
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01653bd0();
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c8f20();
          lVar9 = local_48;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
            FUN_00d50b20();
          }
          uVar14 = local_58._4_4_;
          if (lVar17 != lVar9) {
            uVar14 = ~local_58._4_4_;
            local_58 = CONCAT44(uVar14,(int)local_58);
          }
        }
        FUN_00277f20();
      }
      if (lVar17 != 0) {
        FUN_00d50b20();
      }
      goto LAB_0053967d;
    }
  }
  else {
LAB_0053967d:
    lVar9 = *arg1;
  }
  lVar17 = *(int64_t *)(this_ptr + 0x338);
  if (lVar17 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x338) = lVar9;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  lVar9 = *in_RDX;
  lVar17 = *(int64_t *)(this_ptr + 0x340);
  if (lVar17 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x340) = lVar9;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
LAB_00539701:
  if (*(int64_t *)(this_ptr + 0x300) != 0) {
    FUN_00657760();
    if ((char)local_68 == '\0') {
      if (local_70 == 0) {
        return;
      }
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_70 == 0) {
      return;
    }
    FUN_00444010();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002c9a70
// ============================================================
// Function: FUN_002c9a70
// Address: 002c9a70
// Size: 3256 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_002c9a70(void)

{
  bool bVar1;
  char cVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void* pVar7;
  int64_t **pplVar8;
  char *pcVar9;
  int iVar10;
  int64_t this_ptr;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  int64_t *local_1a0;
  uint8_t local_198;
  int64_t *local_190;
  uint8_t local_188;
  int64_t *local_180;
  uint8_t local_178;
  void*local_170;
  uint8_t local_168;
  int64_t *local_160;
  uint8_t local_158;
  int64_t local_150;
  uint8_t local_148;
  int64_t *local_140;
  uint8_t local_138;
  int64_t *local_130;
  uint8_t local_128;
  void*local_120;
  uint8_t local_118;
  int64_t *local_110;
  uint8_t local_108;
  int64_t *local_100;
  uint8_t local_f8;
  int64_t *local_f0;
  uint8_t local_e8;
  int64_t *local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xf0) == 0) {
    FUN_00d216c0();
    goto LAB_002ca54d;
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *plVar3 = (int64_t)&g_02572358;
  (*g_02572370)();
  local_70 = plVar3;
  (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x628))();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  local_78 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    local_60[0] = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = local_78;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar10 = -local_50._4_4_;
        }
        else {
          iVar10 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar10);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar10 = 0;
        }
        local_50 = CONCAT44(iVar10,(int)local_50);
      }
      lVar5 = (int64_t)(int)local_50;
      iVar10 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar10) break;
      plVar3 = *(int64_t **)(local_58[2] + 8 + lVar5 * 8);
      local_40 = plVar3;
      local_68 = plVar3;
      if ((g_026fdd70 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_40;
        if (cVar2 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar8 != (int64_t *)0x0) {
        local_1a0 = local_68;
        local_198 = 0;
        FUN_002c95a0(pplVar8,&local_1a0);
        plVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_002c9d1d;
          }
        }
        else if (local_40 != (int64_t *)0x0) {
LAB_002c9d1d:
          if (plVar3[2] == 0) {
            local_190 = local_68;
            local_188 = 0;
            uVar11 = FUN_002cc5d0();
            plVar6 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                uVar11 = FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_108 = 1;
            local_110 = plVar6;
            FUN_002c2410(uVar11,&local_110);
            if (plVar6 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d50b00();
            FUN_00d50b20();
          }
          local_38 = '\0';
          local_40 = plVar3;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_002c2560();
          FUN_002cc5d0();
          plVar3 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_f8 = 1;
          local_100 = plVar3;
          FUN_002c2710();
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          goto LAB_002c9c38;
        }
        plVar6 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar6 = (int64_t)&g_024de268;
        plVar6[2] = 0;
        plVar6[3] = 0;
        plVar6[4] = 0;
        FUN_00d500e0();
        local_180 = local_68;
        local_178 = 0;
        uVar11 = FUN_002cc5d0();
        plVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            uVar11 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_e8 = 1;
        local_f0 = plVar3;
        FUN_002c2410(uVar11,&local_f0);
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_38 = '\0';
        local_40 = plVar6;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
LAB_002c9c38:
    }
    FUN_00136d50();
    FUN_00d50b20();
    plVar3 = local_70;
  }
  uVar11 = FUN_002cc5d0();
  local_78 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_002ca107;
    FUN_00d50b00();
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_002ca0c8:
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x760))();
    local_98 = local_68;
    local_90 = 0;
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60[0] = '\0';
    }
    local_90 = '\x01';
    cVar2 = (**(code **)(*local_78 + 0x50))();
    uVar11 = extraout_XMM0_Da;
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      uVar11 = (**(code **)(*local_78 + 1000))();
      plVar6 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_002ca1d1;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_002ca1d1:
        local_60[0] = '\0';
        local_68 = (int64_t *)0x0;
        local_58 = plVar6;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        local_e0 = plVar6;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar10 = -local_50._4_4_;
            }
            else {
              iVar10 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar10);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar10 = 0;
            }
            local_50 = CONCAT44(iVar10,(int)local_50);
          }
          lVar5 = (int64_t)(int)local_50;
          iVar10 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar10);
          if (*(int *)((int64_t)local_58 + 0xc) <= iVar10) break;
          local_160 = *(int64_t **)(local_58[2] + 8 + lVar5 * 8);
          local_168 = 0;
          local_158 = 0;
          local_170 = plVar3;
          local_68 = local_160;
          FUN_002cbd60(&local_160,&local_170);
          plVar6 = local_40;
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) goto LAB_002ca2c3;
            FUN_00d50b00();
            plVar3 = local_70;
LAB_002ca218:
            FUN_00d50b20();
          }
          else {
            plVar3 = local_70;
            if (local_40 != (int64_t *)0x0) goto LAB_002ca218;
LAB_002ca2c3:
            lVar5 = *(int64_t *)(this_ptr + 0xe0);
            if (lVar5 != 0) {
              FUN_00d50b00();
            }
            local_148 = 1;
            local_140 = local_68;
            local_138 = 0;
            local_150 = lVar5;
            FUN_002cbd60(&local_140,&local_150);
            plVar3 = local_70;
            if ((local_40 != (int64_t *)0x0) && (plVar6 = local_40, local_38 == '\0')) {
              FUN_00d50b00();
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            if (plVar6 != (int64_t *)0x0) {
LAB_002ca3ef:
              local_38 = '\0';
              local_40 = plVar6;
              FUN_00d21140();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_002ca218;
            }
            local_c8 = local_68;
            local_c0 = '\0';
            cVar2 = FUN_00b80190();
            if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') {
              plVar6 = (int64_t *)FUN_00e8fc40();
              FUN_00d4ff40();
              *plVar6 = (int64_t)&g_024de268;
              plVar6[2] = 0;
              plVar6[3] = 0;
              plVar6[4] = 0;
              FUN_00d500e0();
              local_130 = local_68;
              local_128 = 0;
              FUN_002c2ac0();
              goto LAB_002ca3ef;
            }
          }
        }
        FUN_00115910();
        uVar11 = FUN_00d50b20();
      }
    }
    bVar1 = false;
  }
  else {
    if (local_68 != (int64_t *)0x0) goto LAB_002ca0c8;
LAB_002ca107:
    bVar1 = true;
  }
  local_120 = local_70;
  local_118 = 0;
  FUN_002cbf40(uVar11,&local_120);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = plVar3;
  local_60[0] = '\0';
  FUN_00d243f0();
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = 0;
  lVar5 = *(int64_t *)(this_ptr + 0xe0);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_b8 = lVar5;
  FUN_01d2a8f0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  FUN_002c59e0();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (local_70 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_002ca54d:
  local_a0 = 0;
  lVar5 = *(int64_t *)(this_ptr + 0xe0);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar5;
  FUN_01d2a8f0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d243a0();
  FUN_002c59e0();
  plVar3 = *(int64_t **)(this_ptr + 0x10);
  FUN_002cc690();
  (**(code **)(*plVar3 + 0x9b8))();
  plVar3 = *(int64_t **)(this_ptr + 0x10);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_88 = '\0';
  local_70 = plVar3;
  local_40 = plVar3;
  do {
    FUN_01e40eb0();
    plVar6 = local_68;
    if (local_68 == plVar3) {
      if (((local_88 == '\0') && (local_68 != (int64_t *)0x0)) &&
         (plVar6 = plVar3, local_60[0] != '\0')) goto LAB_002ca67a;
    }
    else {
      local_40 = local_68;
      if (local_60[0] == '\0') {
        pcVar9 = &local_88;
        if (plVar3 != (int64_t *)0x0 && local_88 != '\0') {
          FUN_00d50b20();
          pcVar9 = &local_88;
        }
      }
      else {
        if (plVar3 != (int64_t *)0x0 && local_88 != '\0') {
          FUN_00d50b20();
        }
LAB_002ca67a:
        local_88 = '\x01';
        pcVar9 = local_60;
      }
      *pcVar9 = '\0';
      plVar3 = plVar6;
    }
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_000a94a0();
    pplVar8 = (int64_t **)&g_02802688;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar8 = &local_40;
      if (cVar2 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
    if (*pplVar8 != (int64_t *)0x0) {
      if ((local_88 == '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_002ca728;
    }
    if (plVar3 == (int64_t *)0x0) {
LAB_002ca728:
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_006c5510();
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}



// ============================================================
// 00241d80
// ============================================================
// Function: FUN_00241d80
// Address: 00241d80
// Size: 3411 bytes
// Class: MUAudioFileSource
// String references:
//   "%@.B"

uint64_t FUN_00241d80(uint64_t param_1,uint32_t param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  int iVar10;
  uint64_t uVar11;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  int64_t local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  int64_t local_a0;
  int64_t local_98;
  int64_t *local_90;
  uint local_88 [2];
  int64_t local_80;
  uint64_t local_78;
  int local_70;
  uint32_t uStack_6c;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  char local_40 [8];
  
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar8 = local_90;
  if (((char)local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar8 = local_90;
    local_60 = CONCAT71(local_60._1_7_,(char)local_88[0]);
    puVar2 = (uint *)&local_60;
    if ((char)local_88[0] != '\0') {
      puVar2 = local_88;
    }
    *(void*)puVar2 = 0;
    if (((char)local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
      plVar8 = *(int64_t **)(this_ptr + 0x90);
LAB_00241e44:
      FUN_00d50b00();
    }
    else if ((char)local_60 == '\0') goto LAB_00241e44;
    local_a0 = CONCAT44(local_a0._4_4_,param_2);
    (**(code **)(*plVar8 + 0xe10))();
    iVar1 = *(int *)(local_50 + 0xc);
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar1 != 0) {
      plVar8 = *(int64_t **)(this_ptr + 0x90);
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar9 = local_90;
      local_b8 = CONCAT71(local_b8._1_7_,(char)local_88[0]);
      puVar2 = (uint *)&local_b8;
      if ((char)local_88[0] != '\0') {
        puVar2 = local_88;
      }
      *(void*)puVar2 = 0;
      if (((char)local_88[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 == (int64_t *)0x0) {
        plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_00241ef3:
        FUN_00d50b00();
      }
      else if ((char)local_b8 == '\0') goto LAB_00241ef3;
      (**(code **)(*plVar9 + 0xe10))();
      FUN_00d23310();
      plVar9 = local_90;
      local_40[0] = (char)local_88[0];
      puVar2 = local_88;
      puVar3 = (uint *)local_40;
      if ((char)local_88[0] != '\0') {
        puVar3 = puVar2;
      }
      *(char *)puVar3 = '\0';
      if (((char)local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)puVar2);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      local_98 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar8 = *(int64_t **)(this_ptr + 0x90);
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar9 = local_90;
      puVar2 = local_88;
      puVar3 = (uint *)&local_60;
      if ((char)local_88[0] != '\0') {
        puVar3 = puVar2;
      }
      local_60 = CONCAT71(local_60._1_7_,(char)local_88[0]);
      *(void*)puVar3 = 0;
      if (((char)local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar6 = (void*)puVar2;
      if (plVar9 == (int64_t *)0x0) {
        plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_00242073:
        FUN_00d50b00();
      }
      else if ((char)local_60 == '\0') goto LAB_00242073;
      (**(code **)(*plVar9 + 0xe10))();
      lVar7 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) {
        uVar11 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
LAB_00242214:
        lVar7 = local_98;
        if ((char)local_a0 != '\0') {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e7fb0();
          local_a8 = local_90;
          if (((char)local_88[0] == '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b00();
            if (((char)local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6000();
          lVar5 = local_b8;
          local_88[0] = 1;
          local_90 = &g_024c5048;
          local_78 = local_78 & 0xffffffffffffff00;
          if (local_b8 != 0) {
            FUN_00d50b00();
          }
          local_80 = lVar5;
          local_78 = CONCAT71(local_78._1_7_,1);
          FUN_00d8cb40();
          local_f8 = local_60;
          local_f0 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_f0 = '\x01';
          local_188 = lVar7;
          local_180 = '\0';
          FUN_004f83c0(0,&local_188);
          lVar7 = local_50;
          if (local_48 == '\0') {
            if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_90 = &g_024c5048;
          if (((char)local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          local_178 = lVar7;
          local_170 = '\0';
          local_a0 = lVar7;
          FUN_004a11d0();
          plVar8 = local_90;
          if ((char)local_88[0] == '\0') {
            if (local_90 != (int64_t *)0x0) {
              FUN_00d50b00();
              if (((char)local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_88[0] = local_88[0] & 0xffffff00;
          }
          local_c8 = plVar8;
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          plVar8 = *(int64_t **)(this_ptr + 0x90);
          (**(code **)(&UNK_00001550 + *plVar8))();
          plVar9 = local_90;
          puVar2 = local_88;
          if ((char)local_88[0] == '\0') {
            puVar2 = (uint *)&local_b8;
          }
          local_b8 = CONCAT71(local_b8._1_7_,(char)local_88[0]);
          *(void*)puVar2 = 0;
          if (((char)local_88[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar6 = (void*)puVar2;
          if (plVar9 == (int64_t *)0x0) {
            plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_0024255f:
            FUN_00d50b00();
          }
          else if ((char)local_b8 == '\0') goto LAB_0024255f;
          (**(code **)(*plVar9 + 0xe10))();
          local_e8 = local_60;
          local_e0 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_e0 = '\x01';
          FUN_00243390();
          local_c0 = local_50;
          if (local_48 == '\0') {
            if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          lVar7 = local_98;
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6a50();
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          local_90 = (int64_t *)lVar7;
          local_88[0] = local_88[0] & 0xffffff00;
          iVar1 = FUN_00d237a0();
          if (((char)local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_168 = local_a0;
          local_160 = '\0';
          local_158 = local_c8;
          local_150 = '\0';
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6a50();
          local_d8 = (int64_t)local_90;
          local_d0 = 0;
          if ((char)local_88[0] == '\0') {
            if (local_90 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88[0] = local_88[0] & 0xffffff00;
          }
          local_d0 = '\x01';
          FUN_004a17d0(iVar1 + 1,&local_d8);
          lVar7 = local_98;
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if (((char)local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          local_60 = lVar7;
          local_b8 = local_a0;
          FUN_00083ea0(2,&local_b8);
          FUN_00243480();
          lVar5 = local_50;
          if (local_48 == '\0') {
            if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
          }
          local_90 = (int64_t *)&g_0253d630;
          if ((local_68 != '\0') && (CONCAT44(uStack_6c,local_70) != 0)) {
            FUN_00d50b20();
          }
          local_90 = &g_024c5048;
          if (((char)local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_002312f0();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          local_148 = local_c0;
          local_140 = '\0';
          local_138 = lVar7;
          local_130 = '\0';
          local_128 = local_a0;
          local_120 = '\0';
          local_118 = local_a8;
          local_110 = '\0';
          local_108 = local_c8;
          local_100 = '\0';
          FUN_004a5d20(&local_118,&local_128,&local_108);
          if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != 0)) {
            FUN_00d50b20();
          }
          if ((local_140 != '\0') && (local_148 != 0)) {
            FUN_00d50b20();
          }
          if (local_c0 != 0) {
            FUN_00d50b20();
          }
          if (local_c8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (local_a0 != 0) {
            FUN_00d50b20();
          }
          if (local_a8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_88[0] = local_88[0] & 0xffffff00;
        local_90 = (int64_t *)0x0;
        local_80 = lVar7;
        local_78 = 0xffffffff;
        local_70 = 0;
        while( true ) {
          lVar5 = (int64_t)(int)local_78;
          iVar10 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar10);
          iVar1 = *(int *)(local_80 + 0xc);
          lVar7 = local_80;
          if (iVar1 <= iVar10) break;
          lVar7 = *(int64_t *)(local_80 + 0x10);
          local_90 = *(int64_t **)(lVar7 + 8 + lVar5 * 8);
          pvVar4 = _pthread_getspecific((void*)lVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          lVar5 = local_50;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != local_98) break;
          if (local_78._4_4_ != 0) {
            if (local_78._4_4_ < 1) {
              iVar1 = -local_78._4_4_;
            }
            else {
              local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
              FUN_00d23690();
              local_70 = local_70 + local_78._4_4_;
              iVar1 = 0;
            }
            local_78 = CONCAT44(iVar1,(int)local_78);
          }
        }
        pVar6 = (void*)lVar7;
        FUN_001159b0();
        uVar11 = CONCAT71((int7)((uint64_t)&local_50 >> 8),iVar1 <= iVar10);
        FUN_00d50b20();
        lVar7 = local_98;
        if (iVar1 <= iVar10) goto LAB_00242214;
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00241dd3;
    }
  }
  uVar11 = 0;
LAB_00241dd3:
  return uVar11 & 0xffffffff;
}



// ============================================================
// 00494690
// ============================================================
// Function: FUN_00494690
// Address: 00494690
// Size: 2854 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00494690(uint32_t param_1,int param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t lVar5;
  char cVar6;
  uint8_t uVar7;
  int iVar8;
  void *pvVar9;
  bool *pbVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t *this_ptr;
  int64_t **pplVar13;
  uint32_t uVar14;
  int64_t *local_138;
  uint8_t local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  bool local_78 [8];
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  bool local_58 [8];
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  
  lVar1 = g_026f6fb0;
  if (param_2 == 0) {
    FUN_01caeae0();
    plVar11 = local_70;
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar4 = g_02708758;
    plVar12 = (int64_t *)0x0;
    if (plVar11 != (int64_t *)0x0) {
      if (g_02708758 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar11 = plVar4;
      if (((*(char *)((int64_t)this_ptr + 0x27a) != '\0') &&
          (*(char *)((int64_t)this_ptr + 0x279) != '\0')) ||
         ((cVar6 = FUN_00742b20(), cVar6 != '\0' && (*(char *)((int64_t)this_ptr + 0x27b) == '\0')
          ))) {
        FUN_00490b50();
        plVar12 = local_70;
        if (local_70 != plVar4) {
          if (local_68[0] != '\0') {
            plVar11 = local_70;
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_00494b57;
          }
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar11 = plVar12;
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00494b57:
      plVar12 = g_02708760;
      if (g_02708760 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_c0 = plVar12;
      local_98 = plVar11;
      FUN_00083ea0(2,&local_c0);
      FUN_000b4da0();
      plVar4 = local_80;
      if (local_78[0] == false) {
        if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78[0] != false)) &&
           (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = false;
      }
      local_70 = (int64_t *)&g_0253d630;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &g_024c5048;
      if ((local_58[0] != false) && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar1 = g_027087a8;
      if (g_027087a8 != 0) {
        FUN_00d50b00();
      }
      local_128 = lVar1;
      local_120 = '\x01';
      local_118 = plVar4;
      local_110 = '\0';
      FUN_01e57360(&local_118,&local_128);
      plVar12 = local_70;
      if (local_68[0] == '\0') {
        if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
           (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68[0] = '\0';
      }
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        FUN_01caeae0();
        local_108 = plVar12;
        local_100 = '\0';
        FUN_01d64eb0();
        if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (*(char *)((int64_t)this_ptr + 0x279) == '\0') goto LAB_00494d1d;
  }
  else {
    if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
LAB_00494d1d:
      plVar12 = (int64_t *)0x0;
      goto LAB_00494d1f;
    }
    if (g_026f6fb0 != 0) {
      param_1 = FUN_00d50b00();
    }
    lVar5 = g_027087a0;
    local_f8 = lVar1;
    local_f0 = '\x01';
    if (g_027087a0 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_e8 = lVar5;
    local_e0 = '\x01';
    FUN_01f6ca30(param_1,&local_e8);
    plVar11 = local_70;
    if (local_68[0] == '\0') {
      if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    local_b8 = plVar11;
    iVar8 = (**(code **)(*plVar11 + 0x5e0))();
    if ((iVar8 == 0) && (lVar1 = this_ptr[0x23], lVar1 != 0)) {
      plVar11 = this_ptr;
      FUN_00d50b00();
      local_c8 = lVar1;
      pvVar9 = _pthread_getspecific((void*)plVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar13 = &local_70;
      FUN_01320d00();
      plVar11 = local_70;
      if ((g_026fdd70 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      if (plVar11 == (int64_t *)0x0) {
LAB_00494920:
        pplVar13 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00494920;
      }
      local_88 = *pplVar13;
      if (*(char *)(pplVar13 + 1) == '\0') {
        if (local_88 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar13 + 1) = 0;
      }
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_88 == (int64_t *)0x0) {
        bVar2 = true;
      }
      else {
        FUN_00d50b00();
        local_98 = (int64_t *)((uint64_t)local_98 & 0xffffffffffffff00);
        local_80 = this_ptr;
        do {
          (**(code **)(*this_ptr + 0x370))();
          plVar11 = local_70;
          if (local_70 == this_ptr) {
            if ((((char)local_98 == '\0') && (local_70 != (int64_t *)0x0)) && (local_68[0] != '\0')
               ) {
              plVar11 = this_ptr;
              goto LAB_00494a2d;
            }
          }
          else {
            local_80 = local_70;
            if (local_68[0] == '\0') {
              if ((char)local_98 == '\0') {
                pplVar13 = &local_98;
              }
              else {
                FUN_00d50b20();
                pplVar13 = &local_98;
              }
            }
            else {
              if ((char)local_98 != '\0') {
                FUN_00d50b20();
              }
LAB_00494a2d:
              local_98 = (int64_t *)CONCAT71(local_98._1_7_,1);
              pplVar13 = (int64_t **)local_68;
            }
            *(char *)pplVar13 = '\0';
            this_ptr = plVar11;
          }
          if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00082eb0();
          pplVar13 = (int64_t **)&g_02802688;
          if (this_ptr != (int64_t *)0x0) {
            (**(code **)(*this_ptr + 0x360))();
            cVar6 = FUN_00e85ea0();
            pplVar13 = &local_80;
            if (cVar6 == '\0') {
              pplVar13 = (int64_t **)&g_02802688;
            }
          }
          if (*pplVar13 != (int64_t *)0x0) {
            if (((char)local_98 == '\0') && (this_ptr != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            break;
          }
        } while (this_ptr != (int64_t *)0x0);
        FUN_00d50b20();
        if (this_ptr == (int64_t *)0x0) {
          bVar2 = true;
        }
        else {
          local_c0 = (int64_t *)((uint64_t)local_c0 & 0xffffffffffffff00);
          local_68[0] = '\0';
          local_70 = (int64_t *)0x0;
          FUN_00da5ad0();
          local_60 = local_80;
          if (local_78[0] == false) {
            pbVar10 = local_58;
          }
          else {
            pbVar10 = local_78;
          }
          local_58[0] = local_78[0] != false;
          *pbVar10 = false;
          if ((local_78[0] != false) && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_50 = FUN_00da7170();
          uVar14 = FUN_00da7180();
          if (local_60 == (int64_t *)0x0) {
            local_40 = (int64_t *)0x0;
            bVar3 = false;
          }
          else {
            bVar3 = false;
            local_40 = (int64_t *)0x0;
            do {
              pvVar9 = _pthread_getspecific((void*)pplVar13);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123abe0();
              plVar11 = local_98;
              local_a8 = 0;
              if (local_90 == '\0') {
                if (local_98 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_90 = '\0';
              }
              plVar12 = local_40;
              local_a8 = '\x01';
              local_b0 = plVar11;
              uVar7 = FUN_00742b20();
              pplVar13 = (int64_t **)0x0;
              FUN_01500530(0,uVar7);
              plVar11 = local_80;
              if (local_78[0] == false) {
                if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78[0] != false)) &&
                   (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_78[0] = false;
              }
              if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar11 != (int64_t *)0x0) {
                local_d8 = local_88;
                local_d0 = '\0';
                pplVar13 = &local_c0;
                FUN_01502670(pplVar13,&local_d8);
                plVar11 = local_80;
                if (local_80 == plVar12) {
                  if ((!bVar3) && (local_80 != (int64_t *)0x0)) {
                    plVar11 = plVar12;
                    if (local_78[0] != false) goto LAB_00494f74;
                    bVar3 = true;
                    FUN_00d50b00();
                  }
LAB_00494fbd:
                  if ((local_78[0] != false) && (local_80 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_78[0] == false) {
                    if (local_80 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    if ((bVar3) && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                      local_40 = plVar11;
                      bVar3 = true;
                    }
                    else {
                      local_40 = plVar11;
                      bVar3 = true;
                    }
                    goto LAB_00494fbd;
                  }
                  if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_00494f74:
                  local_78[0] = false;
                  bVar3 = true;
                  local_40 = plVar11;
                }
                if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              uVar14 = FUN_00da7180();
              if (local_60 == (int64_t *)0x0) break;
              local_60 = (int64_t *)0x0;
              if (local_58[0] == false) {
                local_58[0] = false;
                break;
              }
              uVar14 = FUN_00d50b20();
              local_58[0] = false;
            } while (local_60 != (int64_t *)0x0);
          }
          if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
          if (local_40 == (int64_t *)0x0) {
            bVar2 = true;
          }
          else {
            if ((char)local_c0 != '\0') {
              FUN_01f27fe0();
              uVar14 = (**(code **)(*local_70 + 0x560))();
              if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
            }
            local_138 = local_40;
            local_130 = 0;
            FUN_00493490(uVar14,&local_138);
            bVar2 = false;
            if (bVar3) {
              FUN_00d50b20();
              bVar2 = false;
            }
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar12 = (int64_t *)0x0;
      if (local_b8 != (int64_t *)0x0) goto LAB_00494787;
    }
    else {
      plVar12 = (int64_t *)CONCAT71((int7)((uint64_t)plVar11 >> 8),iVar8 != 0);
      bVar2 = true;
LAB_00494787:
      FUN_00d50b20();
    }
    if (bVar2) goto LAB_00494d1f;
  }
  plVar12 = (int64_t *)CONCAT71((int7)((uint64_t)plVar12 >> 8),1);
LAB_00494d1f:
  return (uint64_t)plVar12 & 0xffffffff;
}



// ============================================================
// 017a7c70
// ============================================================
// Function: FUN_017a7c70
// Address: 017a7c70
// Size: 3015 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void* FUN_017a7c70(uint32_t param_1,void*param_2)

{
  code *pcVar1;
  char cVar2;
  uint8_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  void* in_ECX;
  void* pVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *plVar9;
  void*this_ptr;
  int64_t **pplVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  *param_2 = 0;
  lVar5 = g_0270b838;
  if (arg1[6] != 0) {
    if (g_0270b838 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_160 = lVar5;
    local_158 = '\x01';
    pplVar10 = &local_78;
    FUN_000175c0(param_1,&local_160);
    plVar8 = local_78;
    FUN_00053ac0();
    if (plVar8 == (int64_t *)0x0) {
LAB_017a7d05:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_017a7d05;
    }
    plVar8 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar3 = FUN_00d45ad0();
      *param_2 = uVar3;
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_017a7800();
  if (local_70 == '\0') {
    if (local_78 == (int64_t *)0x0) goto LAB_017a7e41;
    local_d0 = local_78;
    uVar11 = FUN_00d50b00();
    local_150 = g_02729538;
  }
  else {
    local_150 = g_02729538;
    local_d0 = local_78;
    if (local_78 == (int64_t *)0x0) {
LAB_017a7e41:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return this_ptr;
    }
  }
  g_02729538 = local_150;
  if (local_150 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_148 = '\x01';
  pplVar10 = &local_78;
  FUN_000175c0(uVar11,&local_150);
  plVar8 = local_78;
  FUN_01134da0();
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_017a7e29;
  }
  pplVar10 = (int64_t **)&g_02802688;
LAB_017a7e29:
  local_80 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != (int64_t *)0x0) {
    local_140 = local_80;
    local_138 = '\0';
    (**(code **)(*arg1 + 0x378))();
    if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      in_ECX = (void*)local_80;
    }
    FUN_01313ad0();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    local_90 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)arg1[3] + 0x3f0))();
    local_88 = local_78;
    if (((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_70 != '\0' && (local_78 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    lVar5 = arg1[3];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    uVar11 = FUN_017a4f40();
    plVar8 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (int64_t *)0x0) && (uVar11 = FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if (lVar5 != 0) {
      uVar11 = FUN_00d50b20();
    }
    if (local_90 != (int64_t *)0x0) {
      local_c8 = plVar8;
      local_70 = '\0';
      local_78 = (int64_t *)0x0;
      local_68 = local_90;
      local_60 = 0xffffffff;
      local_58 = 0;
      iVar7 = 0;
      while( true ) {
        if (iVar7 != 0) {
          if (iVar7 < 1) {
            iVar7 = -iVar7;
          }
          else {
            local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar7);
            uVar11 = FUN_00d23690(uVar11,iVar7);
            local_58 = local_58 + iVar7;
            iVar7 = 0;
          }
          local_60 = CONCAT44(iVar7,(int)local_60);
        }
        lVar5 = (int64_t)(int)local_60;
        iVar7 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar7);
        if (*(int *)((int64_t)local_68 + 0xc) <= iVar7) break;
        plVar8 = *(int64_t **)(local_68[2] + 8 + lVar5 * 8);
        local_78 = plVar8;
        local_40 = plVar8;
        if ((g_026fdd70 == '\0') &&
           (iVar7 = ___cxa_guard_acquire(), uVar11 = extraout_XMM0_Da_01, iVar7 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          uVar11 = ___cxa_guard_release();
        }
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar8 != (int64_t *)0x0) {
          (**(code **)(*plVar8 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar10 = &local_40;
          uVar11 = extraout_XMM0_Da;
          if (cVar2 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        plVar8 = local_78;
        if (*pplVar10 != (int64_t *)0x0) {
          pcVar1 = arg1[8];
          if (pcVar1 != 0x0) {
            local_130 = local_88;
            local_128 = '\0';
            pvVar4 = _pthread_getspecific((void*)pplVar10);
            plVar9 = plVar8;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            uVar11 = (**(code **)(*plVar9 + 0x478))();
            local_c0 = local_50;
            local_b8 = 0;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                uVar11 = FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_b8 = '\x01';
            (*pcVar1)(uVar11,&local_c0);
            plVar9 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar9 != (int64_t *)0x0) {
              pvVar4 = _pthread_getspecific((void*)pplVar10);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_120 = plVar9;
              local_118 = '\0';
              FUN_0123ab70();
              if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              uVar11 = FUN_00d50b20();
              goto LAB_017a8078;
            }
          }
          pVar6 = (void*)pplVar10;
          pvVar4 = _pthread_getspecific(pVar6);
          plVar9 = plVar8;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar9 + 0x498))();
          uVar11 = extraout_XMM0_Da_00;
          if (cVar2 == '\0') {
            local_110 = local_88;
            local_108 = '\0';
            pvVar4 = _pthread_getspecific(pVar6);
            plVar9 = plVar8;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            uVar11 = (**(code **)(*plVar9 + 0x478))();
            local_b0 = local_50;
            local_a8 = 0;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                uVar11 = FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_a8 = '\x01';
            FUN_0123a4e0(uVar11,&local_b0);
            plVar9 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar9 == (int64_t *)0x0) {
              local_f0 = local_c8;
              local_e8 = '\0';
              pvVar4 = _pthread_getspecific(pVar6);
              plVar9 = plVar8;
              if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
              }
              uVar11 = (**(code **)(*plVar9 + 0x478))();
              local_a0 = local_50;
              local_98 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar11 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_98 = '\x01';
              FUN_0123a4e0(uVar11,&local_a0);
              plVar9 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_98 != '\0') && (local_a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar9 == (int64_t *)0x0) {
                pvVar4 = _pthread_getspecific(pVar6);
                if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                  plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                }
                uVar11 = (**(code **)(*plVar8 + 0x498))();
              }
              else {
                pvVar4 = _pthread_getspecific(pVar6);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_e0 = plVar9;
                local_d8 = '\0';
                FUN_0123ab70();
                if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar11 = FUN_00d50b20();
              }
            }
            else {
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_100 = plVar9;
              local_f8 = '\0';
              FUN_0123ab70();
              if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              uVar11 = FUN_00d50b20();
            }
          }
        }
LAB_017a8078:
        iVar7 = local_60._4_4_;
      }
      FUN_00136d50();
      plVar8 = local_c8;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar8 = local_90;
    if (local_88 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = local_80;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 00761a80
// ============================================================
// Function: FUN_00761a80
// Address: 00761a80
// Size: 2569 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00761a80(void* param_1,int64_t *param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint32_t uVar11;
  int64_t *local_150;
  char local_148;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_0075c8d0();
  plVar7 = local_70;
  if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar1 = FUN_00ce6e30();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*plVar7 + 0x420))(), cVar1 == '\0')) {
    uVar8 = 0;
  }
  else {
    lVar3 = *arg1;
    local_48 = plVar7;
    if (lVar3 == 0) {
      FUN_00757c60();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb480();
      plVar6 = local_70;
      plVar10 = (int64_t *)*arg1;
      if (plVar10 == local_70) {
        if (((char)arg1[1] != '\0') || (local_70 == (int64_t *)0x0)) goto LAB_00761bf7;
        if (local_68 == '\0') {
          FUN_00d50b00();
          goto LAB_00761bef;
        }
LAB_00761bb4:
        *(void*)(arg1 + 1) = 1;
        local_68 = '\0';
        plVar7 = local_48;
      }
      else {
        lVar3 = arg1[1];
        if (local_68 != '\0') {
          *arg1 = (int64_t)local_70;
          if (((char)lVar3 != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00761bb4;
        }
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar6;
        if (((char)lVar3 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00761bef:
        *(void*)(arg1 + 1) = 1;
        plVar7 = local_48;
LAB_00761bf7:
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar3 = *arg1;
      if (lVar3 != 0) goto LAB_00761c2c;
    }
    else {
LAB_00761c2c:
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = lVar3;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar9 = -local_58._4_4_;
          }
          else {
            iVar9 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar9 = 0;
          }
          local_58 = CONCAT44(iVar9,(int)local_58);
        }
        lVar3 = (int64_t)(int)local_58;
        iVar9 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar9);
        if (*(int *)(local_60 + 0xc) <= iVar9) break;
        plVar7 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar3 * 8);
        local_40 = plVar7;
        local_70 = plVar7;
        if ((g_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          ___cxa_guard_release();
        }
        pplVar5 = (int64_t **)&g_02802688;
        if (plVar7 != (int64_t *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar5 = &local_40;
          if (cVar1 == '\0') {
            pplVar5 = (int64_t **)&g_02802688;
          }
        }
        plVar7 = local_70;
        if (*pplVar5 != (int64_t *)0x0) {
          pvVar2 = _pthread_getspecific((void*)pplVar5);
          plVar10 = local_70;
          pVar4 = (void*)pplVar5;
          if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0)) {
            plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar7 + 0x478))();
          (**(code **)(*local_80 + 0x3f0))();
          cVar1 = (**(code **)(*local_40 + 0x50))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar7 = local_70;
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(pVar4);
            plVar10 = local_70;
            if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0)) {
              plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
            cVar1 = (**(code **)(*plVar7 + 0x498))();
            plVar7 = local_70;
            if (cVar1 != '\0') {
              pvVar2 = _pthread_getspecific(pVar4);
              plVar10 = local_70;
              if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0))
              {
                plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar7 + 0x478))();
              uVar11 = (**(code **)(*local_150 + 0x388))();
              local_90 = local_80;
              local_88 = 0;
              if (local_78 == '\0') {
                if (local_80 != (int64_t *)0x0) {
                  uVar11 = FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_88 = '\x01';
              (**(code **)(*local_48 + 0x400))(uVar11,&local_90);
              plVar7 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              cVar1 = FUN_00ce6e30();
              plVar10 = plVar7;
              if (cVar1 != '\0') {
                local_118 = 0;
                local_110 = '\0';
                local_108 = 0;
                local_100 = '\0';
                plVar6 = &local_108;
                FUN_00b8a050(plVar6,&local_118,0,1);
                plVar10 = local_40;
                pVar4 = (void*)plVar6;
                if (plVar7 == local_40) {
LAB_00761fea:
                  plVar10 = plVar7;
                  if (local_38 != '\0') {
LAB_00761ff0:
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    if (plVar7 != (int64_t *)0x0) {
                      FUN_00d50b20();
                      plVar7 = plVar10;
                      goto LAB_00761fea;
                    }
                    if (local_38 == '\0') goto LAB_00761ffe;
                    goto LAB_00761ff0;
                  }
                  if (plVar7 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  local_38 = '\0';
                }
LAB_00761ffe:
                if ((local_100 != '\0') && (local_108 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_110 != '\0') && (local_118 != 0)) {
                  FUN_00d50b20();
                }
              }
              plVar7 = local_70;
              if (*param_2 == 0) {
LAB_00762187:
                pvVar2 = _pthread_getspecific(pVar4);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_d0 = '\0';
                local_d8 = plVar10;
                FUN_0123bf80();
                if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar2 = _pthread_getspecific(pVar4);
                plVar6 = local_70;
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar6, lVar3 != 0)
                   ) {
                  plVar7 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar7 + 0x478))();
                (**(code **)(*local_80 + 0x3f0))();
                local_f8 = *param_2;
                local_f0 = '\0';
                cVar1 = (**(code **)(*local_40 + 0x50))();
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar1 == '\0') goto LAB_00762187;
                pvVar2 = _pthread_getspecific(pVar4);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_e0 = '\0';
                local_e8 = plVar10;
                FUN_0123bf50();
                if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123b100();
              FUN_00b875e0();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      FUN_00136d50();
      plVar7 = local_48;
    }
    (**(code **)(*this_ptr + 0x498))();
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x578))();
    FUN_00d403d0();
    local_c8 = g_026fce60;
    if (g_026fce60 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_a0 = 0;
    FUN_00d50b00();
    local_a0 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    local_a8 = this_ptr;
    FUN_00d40470(&local_b8,&local_a8,1,3);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
    if (plVar7 == (int64_t *)0x0) goto LAB_00762486;
  }
  FUN_00d50b20();
LAB_00762486:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 001256c0
// ============================================================
// Function: FUN_001256c0
// Address: 001256c0
// Size: 3844 bytes
// Class: MUAudioFileSource

void FUN_001256c0(double param_1,double param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t lVar7;
  void*puVar8;
  uint64_t uVar9;
  void*puVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  void* in_ECX;
  void* pVar13;
  int64_t *in_RDX;
  int64_t *plVar14;
  uint64_t uVar15;
  uint32_t uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint64_t local_e8;
  char local_e0;
  int64_t local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  uVar16 = SUB84(param_1,0);
  if (*in_RDX == 0) {
    return;
  }
  local_a8 = param_2;
  local_a0 = param_1;
  if ((char)in_ECX != '\0') {
    uVar16 = FUN_00721410();
  }
  FUN_013133d0(uVar16,0);
  plVar11 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_016cbba0();
  local_80 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015056c0();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015127c0();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  local_60 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  plVar14 = local_40;
  local_d8._0_1_ = local_38[0];
  plVar12 = &local_d8;
  plVar6 = (int64_t *)local_38;
  if (local_38[0] == '\0') {
    plVar6 = plVar12;
  }
  *(void*)plVar6 = 0;
  if ((local_38[0] != '\0') && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar13 = (void*)plVar12;
  local_88 = plVar14;
  if (((char)local_d8 == '\0') && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar13);
  plVar12 = local_60;
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar12 = local_60, lVar7 != 0)) {
    plVar12 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  pVar13 = *(int *)(plVar12[9] + 0x18) + 7;
  if (pVar13 < 0xf) {
    FUN_00d23310();
    plVar12 = local_40;
    plVar14 = &local_78;
    if (local_38[0] != '\0') {
      plVar14 = (int64_t *)local_38;
    }
    local_78 = CONCAT71(local_78._1_7_,local_38[0]);
    *(void*)plVar14 = 0;
    if ((local_38[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 == (int64_t *)0x0) goto LAB_001263d8;
  }
  if (NAN(local_a0)) {
    local_48 = plVar11;
    pvVar5 = _pthread_getspecific(pVar13);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar13 = 0;
    FUN_01252670(0,0,&local_78,0);
    plVar11 = local_40;
    local_58[0] = local_38[0];
    plVar12 = (int64_t *)local_58;
    if (local_38[0] != '\0') {
      plVar12 = (int64_t *)local_38;
    }
    *(void*)plVar12 = 0;
    if ((local_38[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar13);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012527b0(&local_98,0,0,0);
    plVar12 = local_40;
    plVar11 = &local_50;
    plVar14 = (int64_t *)local_38;
    if (local_38[0] == '\0') {
      plVar14 = plVar11;
    }
    local_50._0_1_ = local_38[0];
    *(void*)plVar14 = 0;
    if ((local_38[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar13 = (void*)plVar11;
    if (((char)local_50 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar13);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar13 = (void*)local_80;
    }
    local_a0 = (double)FUN_016c98e0();
    pvVar5 = _pthread_getspecific(pVar13);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = (double)FUN_016c98e0();
    local_a8 = local_a8 - local_a0;
    plVar11 = local_48;
  }
  local_98 = FUN_00e7bcc0();
  local_70 = '\0';
  local_78 = 0;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &g_02572358;
  *puVar8 = &g_02572358;
  (*g_02572370)();
  dVar20 = local_a0 + local_a8;
  local_68 = puVar8;
  if (dVar20 <= local_a0) {
LAB_001263bb:
    FUN_00d50b20();
  }
  else {
    while( true ) {
      local_48 = plVar11;
      pvVar5 = _pthread_getspecific((void*)puVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_00e7bdb0();
      puVar10 = (void*)FUN_00e7bdb0();
      cVar2 = FUN_01252960(puVar10,uVar9,&local_78,&local_e8);
      if (cVar2 == '\0') break;
      plVar11 = local_48;
      if (((local_78 != 0) && (local_e8 >> 0x20 != 0)) && (local_d8._1_7_ >> 0x18 != 0)) {
        pvVar5 = _pthread_getspecific((void*)puVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_b0 = (double)FUN_016c98e0();
        pvVar5 = _pthread_getspecific((void*)puVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (int64_t *)CONCAT71(local_d8._1_7_,(char)local_d8);
        uVar16 = FUN_00e7b970();
        dVar19 = (double)FUN_016c98e0(uVar16,0);
        plVar11 = local_48;
        if ((local_b0 < dVar20) && (local_a0 < dVar19)) {
          dVar21 = local_a0;
          if (local_a0 <= local_b0) {
            dVar21 = local_b0;
          }
          dVar22 = dVar20;
          if (dVar19 <= dVar20) {
            dVar22 = dVar19;
          }
          if (g_02390448 < dVar22 - dVar21) {
            iVar3 = FUN_01715480();
            fVar17 = (float)iVar3 * g_023908e0 + g_02393948;
            uVar15 = 0;
            lVar7 = 0;
            do {
              puVar10 = (void*)(uVar15 & 0xffffffff);
              uVar4 = (uint)(*(uint64_t *)(local_78 + 0x18) >> ((byte)puVar10 & 0x3f)) & 0xf;
              if (uVar4 != 0xf) {
                fVar18 = (float)(int)lVar7 * g_023908e0 + fVar17;
                fVar1 = fVar18 + g_0239394c;
                if (uVar4 < 7) {
                  fVar1 = fVar18;
                }
                local_b0 = (double)CONCAT44(local_b0._4_4_,fVar1);
                plVar11 = (int64_t *)FUN_00e8fc40();
                FUN_0006e3a0();
                (**(code **)(*plVar11 + 0x18))();
                pvVar5 = _pthread_getspecific((void*)puVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012642b0(SUB84(dVar21,0));
                pvVar5 = _pthread_getspecific((void*)puVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar16 = SUB84(dVar22 - dVar21,0);
                FUN_01259540(uVar16);
                pvVar5 = _pthread_getspecific((void*)puVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01264390(uVar16);
                pvVar5 = _pthread_getspecific((void*)puVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012595a0(local_b0._0_4_);
                local_38[0] = '\0';
                local_40 = plVar11;
                FUN_00d21140();
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              lVar7 = lVar7 + 1;
              uVar15 = uVar15 + 4;
              plVar11 = local_48;
            } while (lVar7 != 0xc);
          }
        }
      }
    }
    pvVar5 = _pthread_getspecific((void*)puVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar11 = local_48;
    FUN_012e6c30();
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar13 = 0x25ee570;
    *puVar8 = &g_025ee570;
    puVar8[6] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(void*)((int64_t)puVar8 + 0x1c) = 0;
    *(void*)((int64_t)puVar8 + 0x24) = 0;
    (*g_025ee588)();
    pvVar5 = _pthread_getspecific(pVar13);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    local_d0 = local_40;
    local_c8 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_c8 = '\x01';
    FUN_01531f40();
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01532bc0(SUB84(local_a0,0),local_a8);
    (**(code **)(*(int64_t *)*in_RDX + 0x390))();
    local_c0 = local_40;
    local_b8 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_b8 = '\x01';
    FUN_01532bd0();
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar13 = 1;
    FUN_01532c20(1,1,0,0);
    pvVar5 = _pthread_getspecific(pVar13);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
    if (local_68 != (void*)0x0) goto LAB_001263bb;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_001263d8:
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004a2840
// ============================================================
// Function: FUN_004a2840
// Address: 004a2840
// Size: 2934 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"
//   "%@.%i"

void FUN_004a2840(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  char cVar6;
  void *pvVar7;
  void* pVar8;
  int64_t **pplVar9;
  uint64_t *puVar10;
  int iVar11;
  uint64_t *arg1;
  int iVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint8_t local_190 [8];
  uint8_t local_188;
  int64_t *local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  uint64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  uint64_t local_130;
  char local_128;
  uint64_t local_120;
  char local_118;
  uint64_t local_110;
  uint64_t local_108;
  void* local_fc;
  int64_t *local_f8;
  char local_f0;
  uint64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  uint local_c0;
  int64_t local_b8;
  char local_b0;
  uint32_t local_a8;
  uint64_t local_a0;
  char local_98;
  int64_t *local_90;
  int64_t *local_88;
  uint64_t local_80;
  int64_t *local_78;
  int local_70;
  uint64_t local_6c;
  int64_t *local_60;
  int64_t *local_50;
  char local_48;
  uint64_t local_40;
  char local_38;
  
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  plVar1 = local_c8;
  if ((char)local_c0 == '\0') {
    if (local_c8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c0 = local_c0 & 0xffffff00;
  }
  FUN_004a21b0();
  local_90 = local_88;
  if (((char)local_80 == '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar1 = local_88;
  puVar10 = &local_40;
  if ((char)local_80 != '\0') {
    puVar10 = &local_80;
  }
  local_40 = CONCAT71(local_40._1_7_,(char)local_80);
  *(void*)puVar10 = 0;
  if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = 0;
  if ((char)local_40 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = local_40 & 0xffffffffffffff00;
  }
  local_f0 = '\x01';
  local_f8 = plVar1;
  FUN_002aa7d0();
  plVar1 = local_c8;
  if ((char)local_c0 == '\0') {
    if (local_c8 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_c0 = local_c0 & 0xffffff00;
  }
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (1 < *(int *)((int64_t)plVar1 + 0xc)) {
    local_60 = plVar1;
    uVar13 = FUN_004a3a50(0,FUN_004a3af0);
    plVar4 = local_88;
    if (plVar1 == local_88) {
LAB_004a2a7c:
      if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      if ((char)local_80 == '\0') {
        if (local_88 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_60 = plVar4;
        uVar13 = FUN_00d50b20();
        goto LAB_004a2a7c;
      }
      local_60 = local_88;
      uVar13 = FUN_00d50b20();
    }
    if (local_60 == (int64_t *)0x0) goto LAB_004a33a8;
    local_80._0_1_ = '\0';
    local_88 = (int64_t *)0x0;
    local_78 = local_60;
    local_6c = 0;
    iVar12 = -1;
    local_fc = 0;
    local_110 = 1;
    iVar11 = 0;
    while( true ) {
      if (iVar11 != 0) {
        if (iVar11 < 1) {
          iVar11 = -iVar11;
        }
        else {
          iVar12 = iVar12 - iVar11;
          local_70 = iVar12;
          uVar13 = FUN_00d23690(uVar13,iVar11);
          local_6c = (uint64_t)(local_fc + iVar11) << 0x20;
          iVar11 = 0;
        }
        local_6c = CONCAT44(local_6c._4_4_,iVar11);
      }
      local_70 = iVar12 + 1;
      if (*(int *)((int64_t)local_78 + 0xc) <= local_70) break;
      plVar1 = *(int64_t **)(local_78[2] + (int64_t)local_70 * 8);
      local_88 = plVar1;
      if ((g_026fdd70 == '\0') &&
         (iVar12 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_00, iVar12 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        uVar13 = ___cxa_guard_release();
      }
      pplVar9 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        pplVar9 = &local_88;
        uVar13 = extraout_XMM0_Da;
        if (cVar6 == '\0') {
          pplVar9 = (int64_t **)&g_02802688;
        }
      }
      iVar12 = local_70;
      plVar1 = *pplVar9;
      local_fc = local_6c._4_4_;
      if (local_70 == 0 && local_6c._4_4_ == 0) {
        if (plVar1 != (int64_t *)0x0) {
          pVar8 = local_6c._4_4_;
          pvVar7 = _pthread_getspecific(local_6c._4_4_);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          (**(code **)(*local_50 + 0x390))();
          uVar5 = local_40;
          local_e0 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_e0 = '\x01';
          local_e8 = uVar5;
          uVar13 = FUN_012e5f80();
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
      }
      else {
        if (plVar1 == (int64_t *)0x0) {
          pvVar7 = _pthread_getspecific(local_6c._4_4_);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_012e6000();
          lVar2 = local_170;
          local_c0 = 2;
          local_c8 = &g_024c5048;
          local_b0 = 0;
          if (local_170 != 0) {
            uVar13 = FUN_00d50b00();
          }
          local_b8 = lVar2;
          local_b0 = '\x01';
          local_c8 = (int64_t *)&g_025df2a0;
          local_a8 = (uint32_t)local_110;
          FUN_00d8cb40(uVar13,&local_c8);
        }
        else {
          pvVar7 = _pthread_getspecific(local_6c._4_4_);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          (**(code **)(*local_180 + 0x390))();
        }
        local_d0 = 0;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_d0 = '\x01';
        local_d8 = local_50;
        local_160 = *arg1;
        local_158 = '\0';
        pVar8 = 0;
        FUN_004f83c0(0,&local_160);
        uVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 == (int64_t *)0x0) {
          local_c8 = &g_024c5048;
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
        }
        else if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_108 = uVar5;
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        local_40 = *arg1;
        local_38 = '\0';
        iVar11 = FUN_00d237a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != 0)) {
          FUN_00d50b20();
        }
        FUN_004a11d0();
        uVar5 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_188 = 1;
        uVar13 = FUN_004a17d0((int)local_110 + iVar11 + -1,local_190);
        uVar3 = local_108;
        if (local_50 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (uVar5 != 0) {
          uVar13 = FUN_00d50b20();
        }
        local_140 = local_88;
        local_138 = '\0';
        uVar13 = FUN_004a26e0(uVar13,&local_140);
        uVar5 = local_40;
        local_98 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar13 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_98 = '\x01';
        local_a0 = uVar5;
        local_130 = *arg1;
        local_128 = '\0';
        local_120 = uVar3;
        local_118 = '\0';
        uVar13 = FUN_004fa380(uVar13,&local_120);
        if ((local_118 != '\0') && (local_120 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (uVar3 != 0) {
          uVar13 = FUN_00d50b20();
        }
      }
      local_110 = (uint64_t)((int)local_110 + 1);
      iVar11 = (int)local_6c;
    }
    FUN_00115e00();
  }
  FUN_00d50b20();
LAB_004a33a8:
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00492370
// ============================================================
// Function: FUN_00492370
// Address: 00492370
// Size: 2632 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00492370(void* param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  void *pvVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  int64_t **pplVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar13;
  int64_t local_120;
  int64_t *local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  int64_t local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  if (param_2 == 0) {
    FUN_01caeae0();
    plVar8 = local_78;
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00490b50();
      plVar8 = local_78;
      if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (*(char *)(this_ptr + 0x27b) == '\0') {
        if (g_02708790 == 0) goto LAB_00492707;
        local_80 = g_02708790;
        FUN_00d50b00();
      }
      else if ((*(char *)(this_ptr + 0x27c) == '\0') && (*(char *)(this_ptr + 0x27a) == '\0')) {
        if (g_02708788 == 0) {
LAB_00492707:
          local_80 = 0;
        }
        else {
          local_80 = g_02708788;
          FUN_00d50b00();
        }
      }
      else {
        if (g_02708780 == 0) goto LAB_00492707;
        local_80 = g_02708780;
        FUN_00d50b00();
      }
      lVar11 = g_02708760;
      if (g_02708760 != 0) {
        FUN_00d50b00();
      }
      local_120 = lVar11;
      FUN_00083ea0(2,&local_120);
      FUN_000b4da0();
      lVar2 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = (int64_t *)&g_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &g_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      local_110 = local_80;
      local_108 = '\0';
      local_100 = lVar2;
      local_f8 = '\0';
      FUN_01e57360(&local_100,&local_110);
      plVar9 = local_78;
      if (local_70 == '\0') {
        if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_01caeae0();
        local_f0 = plVar9;
        local_e8 = '\0';
        FUN_01d64eb0();
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (*(char *)(this_ptr + 0x279) == '\0') goto LAB_004928d9;
  }
  else {
    if (*(char *)(this_ptr + 0x279) == '\0') {
LAB_004928d9:
      plVar8 = (int64_t *)0x0;
      goto LAB_004928db;
    }
    FUN_0048b260();
    plVar8 = local_78;
    if (local_70 == '\0') {
      if (local_78 == (int64_t *)0x0) goto LAB_004928d9;
      FUN_00d50b00();
      plVar9 = *(int64_t **)(this_ptr + 0x118);
      if (plVar9 != (int64_t *)0x0) goto LAB_004923d8;
LAB_004924fc:
      bVar1 = true;
      plVar8 = (int64_t *)0x0;
    }
    else {
      if (local_78 == (int64_t *)0x0) goto LAB_004928d9;
      plVar9 = *(int64_t **)(this_ptr + 0x118);
      if (plVar9 == (int64_t *)0x0) goto LAB_004924fc;
LAB_004923d8:
      local_118 = plVar8;
      FUN_00d50b00();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar10 = &local_78;
      FUN_01320d00();
      plVar8 = local_78;
      if ((g_026fdd70 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        param_1 = 0x136df0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      if (plVar8 == (int64_t *)0x0) {
LAB_0049256d:
        pplVar10 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_0049256d;
      }
      plVar8 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (int64_t *)0x0) {
        bVar1 = true;
      }
      else {
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        local_b0 = local_48;
        local_a8 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_a8 = '\x01';
        uVar4 = FUN_00742b20();
        pVar7 = 0;
        FUN_01500530(0,uVar4);
        plVar9 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        local_90 = plVar9;
        if (plVar9 == (int64_t *)0x0) {
LAB_00492a38:
          plVar9 = local_90;
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          FUN_00b8c7f0();
          plVar12 = local_78;
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (int64_t *)0x0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0123b100();
            local_c0 = 0;
            local_b8 = '\0';
            FUN_00b8cce0();
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar12 = (int64_t *)0x0;
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          local_a0 = local_48;
          local_98 = 0;
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_98 = '\x01';
          FUN_014fff90();
          plVar9 = local_78;
          if (local_70 == '\0') {
            if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
               (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_70 = '\0';
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((plVar9 != (int64_t *)0x0) &&
             (cVar3 = (**(code **)(*plVar9 + 0x398))(), cVar3 != '\0')) {
            (**(code **)(*plVar9 + 0x408))();
          }
          FUN_0047dd70();
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          bVar1 = false;
          if (local_90 == (int64_t *)0x0) goto LAB_00492c9b;
        }
        else {
          cVar3 = FUN_015039e0();
          lVar2 = g_02708798;
          lVar11 = g_02708778;
          if (cVar3 == '\0') {
            if (g_02708778 == 0) goto LAB_00492969;
            uVar13 = FUN_00d50b00();
          }
          else if (g_02708798 == 0) {
LAB_00492969:
            lVar11 = 0;
            uVar13 = extraout_XMM0_Da;
          }
          else {
            uVar13 = FUN_00d50b00();
            lVar11 = lVar2;
          }
          plVar9 = g_026f6fb0;
          if (g_026f6fb0 != (int64_t *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          local_e0 = plVar9;
          local_d8 = '\x01';
          local_c8 = '\0';
          local_d0 = lVar11;
          FUN_01f6ca30(uVar13,&local_d0);
          plVar12 = local_78;
          if (local_70 == '\0') {
            if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
               (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_70 = '\0';
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          iVar5 = (**(code **)(*plVar12 + 0x5e0))();
          FUN_00d50b20();
          if (lVar11 != 0) {
            FUN_00d50b20();
          }
          if (iVar5 == 0) goto LAB_00492a38;
          bVar1 = true;
          plVar12 = local_90;
LAB_00492c9b:
          if (plVar12 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      plVar8 = (int64_t *)CONCAT71((int7)((uint64_t)plVar9 >> 8),plVar8 != (int64_t *)0x0);
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (bVar1) goto LAB_004928db;
  }
  plVar8 = (int64_t *)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
LAB_004928db:
  return (uint64_t)plVar8 & 0xffffffff;
}



// ============================================================
// 00491110
// ============================================================
// Function: FUN_00491110
// Address: 00491110
// Size: 2709 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00491110(void* param_1,int param_2,byte param_3,char param_4)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  void* pVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t **pplVar11;
  int64_t this_ptr;
  int64_t lVar12;
  int64_t lVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar14;
  int64_t local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  uint local_b0;
  void* local_ac;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (param_2 == 0) {
    FUN_01caeae0();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar12 = g_02708760;
    plVar10 = (int64_t *)0x0;
    if (local_60 != (int64_t *)0x0) {
      if (g_02708760 != 0) {
        FUN_00d50b00();
      }
      local_128 = lVar12;
      FUN_00083ea0(2,&local_128);
      FUN_000b4da0();
      if ((local_78 == '\0') && (local_80 != 0)) {
        FUN_00d50b00();
      }
      local_60 = (int64_t *)&g_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      lVar12 = g_02708768;
      if (g_02708768 != 0) {
        FUN_00d50b00();
      }
      local_120 = lVar12;
      local_118 = '\x01';
      local_110 = local_80;
      local_108 = '\0';
      FUN_01e57360(&local_110,&local_120);
      plVar10 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (int64_t *)0x0) {
        FUN_01caeae0();
        local_100 = plVar10;
        local_f8 = '\0';
        FUN_01d64eb0();
        if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (local_80 != 0) {
        FUN_00d50b20();
      }
    }
    if (param_4 == '\0') goto LAB_0049143d;
  }
  else {
    if (param_4 == '\0') {
LAB_0049143d:
      plVar10 = (int64_t *)0x0;
      goto LAB_0049143f;
    }
    FUN_0048b260();
    if (local_58 == '\0') {
      if (local_60 == (int64_t *)0x0) goto LAB_0049143d;
      FUN_00d50b00();
      lVar12 = *(int64_t *)(this_ptr + 0x118);
      if (lVar12 == 0) goto LAB_00491430;
LAB_00491177:
      FUN_00d50b00();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01390340();
      FUN_0194ed20();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013901e0();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar11 = &local_60;
      FUN_01320d00();
      plVar10 = local_60;
      if ((g_026fdd70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        param_1 = 0x136df0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      if (plVar10 == (int64_t *)0x0) {
LAB_00491517:
        pplVar11 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar10 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_00491517;
      }
      plVar10 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (int64_t *)0x0) {
        bVar1 = true;
      }
      else {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        local_a0 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_a0 = '\x01';
        local_a8 = local_80;
        local_b0 = (uint)param_3;
        uVar9 = 0;
        FUN_01500530();
        plVar3 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (plVar3 == (int64_t *)0x0) {
LAB_0049179b:
          pvVar7 = _pthread_getspecific((void*)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e8b990();
          FUN_00cb1f10();
          FUN_00db3260();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((void*)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013941c0();
          plVar4 = local_60;
          if (local_60 == (int64_t *)0x0) {
            pVar8 = (void*)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
          }
          else {
            if (local_58 == '\0') {
              FUN_00d50b00();
              pVar8 = 0;
              if ((local_58 == '\0') || (local_60 == (int64_t *)0x0)) goto LAB_0049186d;
              FUN_00d50b20();
            }
            pVar8 = 0;
          }
LAB_0049186d:
          local_ac = pVar8;
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01393860();
          local_98 = local_60;
          local_90 = 0;
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_90 = '\x01';
          FUN_01394160();
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_c8 = '\0';
          local_d0 = lVar12;
          FUN_012e1a00();
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_c0 = plVar4;
          local_b8 = '\0';
          FUN_01394160();
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e8b990();
          FUN_00cb1f10();
          FUN_00db3270();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_0047dd70();
          if ((char)local_ac == '\0' && plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          bVar1 = false;
          if (plVar3 != (int64_t *)0x0) goto LAB_00491a90;
        }
        else {
          if (param_3 == 0) {
            if (*(char *)(this_ptr + 0x27b) != '\0') goto LAB_0049169f;
            goto LAB_0049179b;
          }
          if (*(char *)(this_ptr + 0x27a) == '\0') goto LAB_0049179b;
LAB_0049169f:
          cVar5 = FUN_015039e0();
          lVar13 = g_02708778;
          lVar2 = g_02708770;
          if (cVar5 == '\0') {
            if (g_02708778 == 0) goto LAB_004916d8;
            uVar14 = FUN_00d50b00();
          }
          else if (g_02708770 == 0) {
LAB_004916d8:
            lVar13 = 0;
            uVar14 = extraout_XMM0_Da;
          }
          else {
            uVar14 = FUN_00d50b00();
            lVar13 = lVar2;
          }
          lVar2 = g_026f6fb0;
          if (g_026f6fb0 != 0) {
            uVar14 = FUN_00d50b00();
          }
          local_f0 = lVar2;
          local_e8 = '\x01';
          local_d8 = '\0';
          local_e0 = lVar13;
          FUN_01f6ca30(uVar14,&local_e0);
          plVar4 = local_60;
          if (local_58 == '\0') {
            if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          iVar6 = (**(code **)(*plVar4 + 0x5e0))();
          FUN_00d50b20();
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          bVar1 = true;
          if (iVar6 == 0) goto LAB_0049179b;
LAB_00491a90:
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      plVar10 = (int64_t *)CONCAT71((int7)((uint64_t)plVar10 >> 8),plVar10 != (int64_t *)0x0);
      FUN_00d50b20();
    }
    else {
      if (local_60 == (int64_t *)0x0) goto LAB_0049143d;
      lVar12 = *(int64_t *)(this_ptr + 0x118);
      if (lVar12 != 0) goto LAB_00491177;
LAB_00491430:
      bVar1 = true;
      plVar10 = (int64_t *)0x0;
    }
    FUN_00d50b20();
    if (bVar1) goto LAB_0049143f;
  }
  plVar10 = (int64_t *)CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
LAB_0049143f:
  return (uint64_t)plVar10 & 0xffffffff;
}



// ============================================================
// 00534960
// ============================================================
// Function: FUN_00534960
// Address: 00534960
// Size: 2083 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00534960(code *param_1)

{
  uint uVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t lVar4;
  code *pcVar5;
  char cVar6;
  void *pvVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  uint64_t uVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  undefined7 extraout_var_03;
  code *pcVar11;
  void*arg1;
  int64_t this_ptr;
  code *pcVar12;
  code **ppcVar13;
  uint64_t uVar14;
  code *pcVar15;
  bool bVar16;
  uint32_t uVar17;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  code *local_90;
  int64_t local_88;
  char local_80;
  code *local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  char local_40;
  byte local_31;
  
  FUN_00757c60();
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  pcVar12 = local_48;
  uVar10 = extraout_var;
  if (local_48 == 0x0) {
    bVar3 = true;
    pcVar12 = 0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      uVar10 = extraout_var_00;
      if ((local_40 == '\0') || (local_48 == 0x0)) goto LAB_00534a0d;
      FUN_00d50b20();
      uVar10 = extraout_var_01;
    }
    else {
      local_40 = '\0';
    }
    bVar3 = false;
  }
LAB_00534a0d:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
    uVar10 = extraout_var_02;
  }
  if (pcVar12 == 0x0) {
    pcVar12 = 0x0;
  }
  else {
    uVar1 = *(uint *)(pcVar12 + 0xc);
    if ((int)uVar1 < 1) {
      bVar16 = true;
      local_60 = 0;
      local_58 = 0x0;
      local_70 = 0;
      local_50 = 0x0;
      local_98 = 0;
      uVar9 = 0;
      local_78 = 0x0;
    }
    else {
      uVar14 = 0;
      local_78 = 0x0;
      local_68 = 0;
      pcVar15 = 0x0;
      local_98 = 0;
      local_50 = 0x0;
      local_70 = 0;
      local_58 = 0x0;
      local_60 = 0;
      local_90 = pcVar12;
      do {
        uVar9 = local_68 & 0xffffffff;
        pcVar12 = *(code **)(*(int64_t *)(pcVar12 + 0x10) + uVar14 * 8);
        local_48 = pcVar12;
        local_40 = '\0';
        uVar8 = 0;
        if ((g_026fdd70 == '\0') && (uVar8 = ___cxa_guard_acquire(), (int)uVar8 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          param_1 = FUN_00136df0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          uVar8 = ___cxa_guard_release();
        }
        ppcVar13 = (code **)&g_02802688;
        if (pcVar12 != 0x0) {
          (**(code **)(*(int64_t *)pcVar12 + 0x360))();
          uVar8 = FUN_00e85ea0();
          ppcVar13 = &local_48;
          if ((char)uVar8 == '\0') {
            ppcVar13 = (code **)&g_02802688;
          }
        }
        pcVar12 = local_90;
        pcVar11 = *ppcVar13;
        cVar6 = (char)uVar9;
        if (pcVar11 == pcVar15) {
          pcVar5 = pcVar15;
          local_68 = uVar9;
          if ((cVar6 == '\0') && (pcVar11 != 0x0)) {
            pcVar11 = pcVar15;
            if (*(char *)(ppcVar13 + 1) != '\0') goto LAB_00534b45;
            local_68 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
            uVar9 = FUN_00d50b00();
          }
        }
        else if (*(char *)(ppcVar13 + 1) == '\0') {
          if (pcVar11 != 0x0) {
            uVar8 = FUN_00d50b00();
          }
          pcVar12 = local_90;
          local_68 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          pcVar5 = pcVar11;
          uVar9 = local_68;
          if ((cVar6 != '\0') && (pcVar15 != 0x0)) {
            uVar9 = FUN_00d50b20();
          }
        }
        else {
          if ((cVar6 != '\0') && (pcVar15 != 0x0)) {
            uVar8 = FUN_00d50b20();
          }
LAB_00534b45:
          *(void*)(ppcVar13 + 1) = 0;
          uVar9 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          pcVar5 = pcVar11;
          local_68 = uVar9;
          pcVar12 = local_90;
        }
        pcVar15 = pcVar5;
        if ((local_40 != '\0') && (local_48 != 0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if (pcVar15 != 0x0) {
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          pcVar11 = local_48;
          if (local_48 == local_50) {
            if (((byte)local_60 == 0) && (local_48 != 0x0)) {
              pcVar11 = local_50;
              if (local_40 != '\0') goto LAB_00534c85;
              local_31 = 1;
              FUN_00d50b00();
            }
            else {
              local_31 = (byte)local_60;
            }
          }
          else {
            if (local_40 == '\0') {
              if (local_48 != 0x0) {
                FUN_00d50b00();
              }
              local_31 = 1;
              if (((byte)local_60 != '\0') && (local_50 != 0x0)) {
                FUN_00d50b20();
                local_50 = pcVar11;
                goto LAB_00534d00;
              }
            }
            else {
              if (((byte)local_60 != 0) && (local_50 != 0x0)) {
                FUN_00d50b20();
              }
LAB_00534c85:
              local_40 = '\0';
              local_31 = 1;
            }
            local_31 = 1;
            local_50 = pcVar11;
          }
LAB_00534d00:
          if ((local_40 != '\0') && (local_48 != 0x0)) {
            FUN_00d50b20();
          }
          if (local_50 == 0x0) {
            local_60 = (uint64_t)local_31;
            uVar9 = 0;
            local_50 = 0x0;
          }
          else {
            cVar6 = (**(code **)(*(int64_t *)local_50 + 0x398))();
            if (cVar6 == '\0') {
              plVar2 = (int64_t *)*arg1;
              uVar17 = (**(code **)(*(int64_t *)local_50 + 0x388))();
              lVar4 = local_88;
              local_a0 = 0;
              if (local_80 == '\0') {
                if (local_88 != 0) {
                  uVar17 = FUN_00d50b00();
                }
              }
              else {
                local_80 = '\0';
              }
              local_a0 = '\x01';
              local_a8 = lVar4;
              uVar8 = (**(code **)(*plVar2 + 0x400))(uVar17,&local_a8);
              pcVar11 = local_48;
              uVar10 = (undefined7)((uint64_t)lVar4 >> 8);
              if (local_48 == local_58) {
                pcVar11 = local_58;
                if (((char)local_70 == '\0') && (local_48 != 0x0)) {
                  if (local_40 != '\0') goto LAB_00534df0;
                  FUN_00d50b00();
                  pcVar11 = local_58;
                  goto joined_r0x00534f3e;
                }
                uVar9 = local_70 & 0xffffffff;
joined_r0x00534e4d:
                local_58 = pcVar11;
                if ((local_40 == '\0') || (local_48 == 0x0)) {
                  local_70 = uVar9 & 0xffffffff;
                }
                else {
                  FUN_00d50b20();
                  local_70 = uVar9 & 0xffffffff;
                }
              }
              else {
                if (local_40 == '\0') {
                  if (local_48 != 0x0) {
                    FUN_00d50b00();
                  }
                  uVar9 = CONCAT71(uVar10,1);
                  if ((char)local_70 != '\0') {
                    if (local_58 == 0x0) goto joined_r0x00534e4d;
                    FUN_00d50b20();
                  }
joined_r0x00534f3e:
                  uVar9 = CONCAT71(uVar10,1);
                  goto joined_r0x00534e4d;
                }
                if (((char)local_70 != '\0') && (local_58 != 0x0)) {
                  uVar8 = FUN_00d50b20();
                }
LAB_00534df0:
                local_40 = '\0';
                local_70 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                local_58 = pcVar11;
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              cVar6 = (**(code **)(*(int64_t *)local_58 + 0x398))();
              if (cVar6 != '\0') {
                if (local_78 == 0x0) {
                  (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
                  FUN_00cb1f10();
                  local_78 = local_48;
                  param_1 = local_48;
                  if (local_48 == 0x0) {
                    local_78 = 0x0;
                  }
                  else if (local_40 == '\0') {
                    uVar8 = FUN_00d50b00();
                    local_98 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                    if ((local_40 != '\0') && (local_48 != 0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_40 = '\0';
                    local_98 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
                  }
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00db3260();
                }
                pvVar7 = _pthread_getspecific((void*)param_1);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0123bd60();
              }
            }
            uVar9 = (uint64_t)local_31;
            local_60 = uVar9;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar1 != uVar14);
      bVar16 = local_78 == 0x0;
      if (!bVar16) {
        FUN_00db3270();
        uVar9 = FUN_00db3760();
      }
      if (((char)local_68 != '\0') && (pcVar15 != 0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (!bVar3) {
      uVar9 = FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_58 != 0x0)) {
      uVar9 = FUN_00d50b20();
    }
    if (((byte)local_60 != '\0') && (local_50 != 0x0)) {
      uVar9 = FUN_00d50b20();
    }
    pcVar12 = local_78;
    uVar10 = (undefined7)(uVar9 >> 8);
    if (!(bool)((char)local_98 == '\0' | bVar16)) {
      FUN_00d50b20();
      uVar10 = extraout_var_03;
    }
  }
  return CONCAT71(uVar10,pcVar12 != 0x0);
}



// ============================================================
// 00267bd0
// ============================================================
// Function: FUN_00267bd0
// Address: 00267bd0
// Size: 2428 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00267bd0(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int iVar8;
  int64_t arg1;
  uint64_t this_ptr;
  int64_t **pplVar9;
  bool bVar10;
  uint32_t uVar11;
  int64_t local_b8;
  char local_b0;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  if (*param_2 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar9 = &local_68;
    FUN_01320d00();
    plVar1 = local_68;
    if ((g_026fdd70 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
      g_026e3238 = FUN_00115af0();
      g_026e3220 = "MUAudioFileSource";
      g_026e3228 = 0xa0;
      param_1 = 0x136df0;
      g_026e3230 = FUN_00136df0;
      g_026e3240 = 0;
      ram_00000000026e3248 = 0;
      g_026e3250 = 0;
      ram_00000000026e3258 = 0;
      g_026e3260 = 0;
      ram_00000000026e3268 = 0;
      g_026e3270 = 0;
      ram_00000000026e3278 = 0;
      g_026e3280 = 0;
      ram_00000000026e3288 = 0;
      g_026e3290 = 0;
      ram_00000000026e3298 = 0;
      g_026e32a0 = 0;
      ram_00000000026e32a8 = 0;
      g_026e32b0 = 0;
      ram_00000000026e32b8 = 0;
      g_026e32c0 = 0;
      ram_00000000026e32c8 = 0;
      g_026e32d0 = 0;
      ram_00000000026e32d8 = 0;
      g_026e32e0 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_00267c79:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_00267c79;
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_68 + 0x450))();
    if (cVar2 == '\0') {
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        if (*(int64_t *)(arg1 + 0x1c0) != 0) {
          FUN_006f3f00();
          plVar6 = local_68;
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 != (int64_t *)0x0) {
            if (*(int64_t *)(arg1 + 0x1c0) == 0) {
              local_38 = '\0';
              local_40 = 0;
            }
            else {
              FUN_006f3f00();
            }
            FUN_00757c60();
            local_78 = local_68;
            plVar6 = local_68;
            if (local_68 == (int64_t *)0x0) {
              bVar10 = true;
              local_78 = (int64_t *)0x0;
            }
            else {
              if (local_60 == '\0') {
                FUN_00d50b00();
                bVar10 = false;
                if ((local_60 == '\0') || (local_68 == (int64_t *)0x0)) goto LAB_00267dd8;
                FUN_00d50b20();
              }
              else {
                local_60 = '\0';
              }
              bVar10 = false;
            }
LAB_00267dd8:
            param_1 = (void*)plVar6;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_78 != (int64_t *)0x0) {
              pvVar3 = _pthread_getspecific(param_1);
              if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                param_1 = (void*)local_78;
              }
              FUN_012cb1b0();
              plVar6 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_00268258;
                }
              }
              else if (local_68 != (int64_t *)0x0) {
LAB_00268258:
                local_60 = '\0';
                local_68 = (int64_t *)0x0;
                local_58 = plVar6;
                local_50 = 0xffffffff;
                local_48 = 0;
                while( true ) {
                  lVar4 = (int64_t)(int)local_50;
                  iVar8 = (int)local_50 + 1;
                  local_50 = CONCAT44(local_50._4_4_,iVar8);
                  if (*(int *)((int64_t)local_58 + 0xc) <= iVar8) break;
                  lVar7 = local_58[2];
                  local_68 = *(int64_t **)(lVar7 + 8 + lVar4 * 8);
                  pvVar3 = _pthread_getspecific((void*)lVar7);
                  pVar5 = (void*)lVar7;
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar11 = FUN_012e7210();
                  if (local_80 == '\0') {
                    if (local_88 != 0) {
                      uVar11 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_80 = '\0';
                  }
                  local_b8 = *param_2;
                  local_b0 = '\0';
                  FUN_004fb4a0(uVar11,&local_b8);
                  lVar4 = local_40;
                  if (local_38 == '\0') {
                    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0))
                    {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_88 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    FUN_00d50b20();
                  }
                  if (lVar4 != 0) {
                    pvVar3 = _pthread_getspecific(pVar5);
                    if (pvVar3 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012e6000();
                    FUN_00d50b20();
                    FUN_000be170();
                    FUN_00d50b20();
                    if (!bVar10) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                    return this_ptr;
                  }
                  if (local_50._4_4_ != 0) {
                    if (local_50._4_4_ < 1) {
                      iVar8 = -local_50._4_4_;
                    }
                    else {
                      local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                      FUN_00d23690();
                      local_48 = local_48 + local_50._4_4_;
                      iVar8 = 0;
                    }
                    local_50 = CONCAT44(iVar8,(int)local_50);
                  }
                }
                plVar6 = local_58;
                FUN_000be170();
                param_1 = (void*)plVar6;
                FUN_00d50b20();
              }
              if (!bVar10) {
                FUN_00d50b20();
              }
              goto LAB_00267ce0;
            }
          }
        }
        goto LAB_00267e34;
      }
    }
    else {
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00267ce0:
      if (plVar1 != (int64_t *)0x0) {
LAB_00267e34:
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123b100();
        if (local_68 == (int64_t *)0x0) {
          bVar10 = false;
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          FUN_00b88600();
          bVar10 = local_40 != 0;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar10) {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          FUN_00b88600();
          (**(code **)(*local_68 + 0x468))();
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return this_ptr;
        }
        FUN_00d50b20();
      }
    }
  }
  FUN_00226f20();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00267f8f;
    }
LAB_00268001:
    bVar10 = true;
  }
  else {
    if (local_68 == (int64_t *)0x0) goto LAB_00268001;
LAB_00267f8f:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01657380();
    if (local_68 == (int64_t *)0x0) {
      bVar10 = false;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650620();
      bVar10 = local_40 != 0;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar10) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650620();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01667b90();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0026819a;
    }
    bVar10 = false;
  }
  FUN_00d8ede0();
  if (bVar10) {
    return this_ptr;
  }
LAB_0026819a:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 00535670
// ============================================================
// Function: FUN_00535670
// Address: 00535670
// Size: 2212 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00535670(void* param_1)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  void *pvVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  undefined7 uVar12;
  undefined7 extraout_var;
  void* pVar13;
  int64_t **pplVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  char unaff_SIL;
  int64_t this_ptr;
  uint64_t uVar17;
  uint32_t uVar18;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  int64_t *local_78;
  uint64_t local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar10 = *(int64_t *)(this_ptr + 0x110);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0015d590();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  local_68 = plVar1;
  FUN_00757c60();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_012cb480();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (uVar8 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  uVar11 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
  bVar3 = true;
  bVar2 = true;
  if (((plVar5 == (int64_t *)0x0) || (plVar1 == (int64_t *)0x0)) ||
     (uVar11 = (uint64_t)*(uint *)((int64_t)plVar5 + 0xc),
     (int)*(uint *)((int64_t)plVar5 + 0xc) < 1)) {
    plVar16 = (int64_t *)0x0;
    cVar6 = '\0';
  }
  else {
    uVar17 = 0;
    local_58 = (int64_t *)0x0;
    local_60 = (int64_t *)0x0;
    local_70 = 0;
    do {
      plVar1 = *(int64_t **)(plVar5[2] + uVar17 * 8);
      local_40 = plVar1;
      local_38 = '\0';
      uVar9 = 0;
      if ((g_026fdd70 == '\0') && (uVar9 = ___cxa_guard_acquire(), (int)uVar9 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        uVar9 = ___cxa_guard_release();
      }
      pplVar14 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        uVar9 = FUN_00e85ea0();
        pplVar14 = &local_40;
        if ((char)uVar9 == '\0') {
          pplVar14 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar14 + 1) = 0;
      }
      pVar13 = (void*)pplVar14;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific(pVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        plVar16 = local_40;
        if (local_40 == (int64_t *)0x0) {
          local_80 = 0;
          cVar6 = '\0';
          plVar4 = (int64_t *)0x0;
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          else {
            local_38 = '\0';
          }
          uVar8 = (**(code **)(*plVar16 + 0x398))();
          cVar6 = (char)uVar8;
          local_80 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          plVar4 = plVar16;
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          (**(code **)(*plVar4 + 0x3f0))();
          plVar15 = local_40;
          if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_78 = plVar15;
          cVar6 = (**(code **)(*local_68 + 0x50))();
          plVar15 = local_78;
          if (cVar6 == '\0') {
            if (local_60 == (int64_t *)0x0) {
              (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
              FUN_00cb1f10();
              local_60 = local_40;
              plVar15 = local_40;
              if (local_40 == (int64_t *)0x0) {
                local_60 = (int64_t *)0x0;
              }
              else if (local_38 == '\0') {
                uVar8 = FUN_00d50b00();
                local_70 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
                local_70 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
              }
              pVar13 = (void*)plVar15;
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              FUN_00db3260();
            }
            if (unaff_SIL == '\0') {
              pvVar7 = _pthread_getspecific(pVar13);
              if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                plVar1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
              local_58 = plVar1;
              uVar18 = (**(code **)(*plVar4 + 0x388))();
              local_90 = local_50;
              local_88 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar18 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_88 = '\x01';
              (**(code **)(*local_68 + 0x400))(uVar18,&local_90);
              plVar1 = local_40;
              local_98 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              plVar15 = local_78;
              local_98 = '\x01';
              local_a0 = plVar1;
              uVar8 = FUN_0123bf50();
              if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                uVar8 = FUN_00d50b20();
              }
            }
            else {
              pvVar7 = _pthread_getspecific(pVar13);
              if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                plVar1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
              local_58 = plVar1;
              uVar18 = (**(code **)(*plVar4 + 0x388))();
              local_b0 = local_50;
              local_a8 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar18 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_a8 = '\x01';
              (**(code **)(*local_68 + 0x400))(uVar18,&local_b0);
              plVar1 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              plVar15 = local_78;
              uVar8 = FUN_0123bf80();
              if (plVar1 != (int64_t *)0x0) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                uVar8 = FUN_00d50b20();
              }
            }
            local_58 = (int64_t *)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          }
          if (plVar15 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        uVar9 = FUN_00d50b20();
        if ((plVar16 != (int64_t *)0x0) && (plVar4 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
      plVar16 = local_60;
      plVar1 = local_68;
      uVar17 = uVar17 + 1;
    } while (uVar11 != uVar17);
    cVar6 = (char)local_70;
    if (((uint64_t)local_58 & 1) != 0) {
      FUN_00b34cb0();
      uVar9 = (**(code **)(*local_40 + 0x50))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        uVar9 = FUN_00d50b20();
      }
    }
    if (plVar16 == (int64_t *)0x0) {
      plVar16 = (int64_t *)0x0;
      uVar11 = uVar9;
    }
    else {
      FUN_00db3270();
      uVar11 = FUN_00db3760();
      bVar3 = false;
      bVar2 = false;
    }
  }
  if (plVar5 != (int64_t *)0x0) {
    uVar11 = FUN_00d50b20();
    bVar2 = bVar3;
  }
  if (plVar1 != (int64_t *)0x0) {
    uVar11 = FUN_00d50b20();
  }
  uVar12 = (undefined7)(uVar11 >> 8);
  if (cVar6 != '\0' && !bVar2) {
    FUN_00d50b20();
    uVar12 = extraout_var;
  }
  return CONCAT71(uVar12,plVar16 != (int64_t *)0x0);
}



// ============================================================
// 00240bc0
// ============================================================
// Function: FUN_00240bc0
// Address: 00240bc0
// Size: 2058 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00240bc0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint7 uVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  void* pVar9;
  int64_t **pplVar10;
  int64_t *this_ptr;
  int64_t *plVar11;
  char cVar12;
  uint64_t uVar13;
  uint7 uVar15;
  uint64_t uVar14;
  int64_t *plVar16;
  int64_t *plVar17;
  int local_90;
  uint local_6c;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  uint7 uStack_3f;
  char local_31;
  
  lVar1 = *this_ptr;
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0xc) == 0)) {
    return 0;
  }
  local_90 = -1;
  local_6c = 0;
  bVar4 = false;
  local_48 = (int64_t *)0x0;
  local_40 = '\0';
  uStack_3f = 0;
  plVar16 = (int64_t *)0x0;
  cVar12 = local_40;
  uVar15 = uStack_3f;
LAB_00240c4a:
  uStack_3f = uVar15;
  local_40 = cVar12;
  local_90 = local_90 + 1;
  uVar15 = 0;
  if (*(int *)(lVar1 + 0xc) <= local_90) {
    FUN_001159b0();
    uVar14 = 1;
    if (bVar4) goto LAB_0024139a;
    goto LAB_002413a4;
  }
  pVar9 = (void*)*(void*)(lVar1 + 0x10);
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  plVar17 = local_58;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar12 = local_40;
  uVar5 = uStack_3f;
  if (plVar17 != (int64_t *)0x0) {
    if (local_90 == 0) {
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar17 = local_58;
      if (local_58 == plVar16) {
        plVar17 = plVar16;
        if ((local_40 == '\0') && (plVar16 != (int64_t *)0x0)) {
          cVar12 = '\x01';
          if (local_50 != '\0') goto LAB_00240ec0;
          FUN_00d50b00();
          cVar12 = '\x01';
        }
        else {
          uVar15 = uStack_3f & 0xffffff;
          cVar12 = local_40;
        }
LAB_00240eac:
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar12 = '\x01';
          if ((local_40 != '\0') && (plVar16 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00240eac;
        }
        cVar12 = '\x01';
        if ((local_40 != '\0') && (plVar16 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00240ec0:
      plVar16 = plVar17;
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01326de0();
      uVar5 = uVar15;
      if (iVar7 == 0) goto LAB_00241381;
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar6 = FUN_0134c600();
      if (cVar6 != '\0') goto LAB_00241381;
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      plVar17 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_58 = plVar17;
          local_50 = '\x01';
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00240f80;
        }
        local_58 = (int64_t *)0x0;
        local_50 = '\x01';
        bVar2 = true;
      }
      else {
        local_58 = local_68;
        local_50 = '\x01';
LAB_00240f80:
        bVar2 = true;
        if (plVar17 != (int64_t *)0x0) {
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar6 = FUN_0124d450();
          if (cVar6 != '\0') {
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124e100();
            iVar7 = *(int *)((int64_t)local_68 + 0xc);
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar7 == 0) {
              if ((g_026fdd70 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
                local_31 = cVar12;
                g_026e3238 = FUN_00115af0();
                g_026e3220 = "MUAudioFileSource";
                g_026e3228 = 0xa0;
                g_026e3230 = FUN_00136df0;
                g_026e3240 = 0;
                ram_00000000026e3248 = 0;
                g_026e3250 = 0;
                ram_00000000026e3258 = 0;
                g_026e3260 = 0;
                ram_00000000026e3268 = 0;
                g_026e3270 = 0;
                ram_00000000026e3278 = 0;
                g_026e3280 = 0;
                ram_00000000026e3288 = 0;
                g_026e3290 = 0;
                ram_00000000026e3298 = 0;
                g_026e32a0 = 0;
                ram_00000000026e32a8 = 0;
                g_026e32b0 = 0;
                ram_00000000026e32b8 = 0;
                g_026e32c0 = 0;
                ram_00000000026e32c8 = 0;
                g_026e32d0 = 0;
                ram_00000000026e32d8 = 0;
                g_026e32e0 = 0;
                ___cxa_guard_release();
                cVar12 = local_31;
              }
              (**(code **)(*plVar17 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar10 = &local_58;
              if (cVar6 == '\0') {
                pplVar10 = (int64_t **)&g_02802688;
              }
              local_40 = *(char *)(pplVar10 + 1);
              if ((local_40 == '\0') || (*pplVar10 == (int64_t *)0x0)) {
                if (*pplVar10 != (int64_t *)0x0) goto LAB_002410cc;
                bVar3 = true;
LAB_0024116c:
                local_31 = cVar12;
                pvVar8 = _pthread_getspecific((void*)pplVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                plVar11 = local_48;
                plVar17 = local_68;
                if (local_48 == local_68) {
                  if ((bVar4) || (local_48 == (int64_t *)0x0)) {
                    uVar13 = (uint64_t)local_6c;
                    bVar2 = bVar4;
                  }
                  else {
                    uVar13 = CONCAT71(uVar15,1);
                    bVar2 = true;
                    if (local_60 != '\0') goto LAB_00241250;
                    uVar13 = CONCAT71(uVar15,1);
                    FUN_00d50b00();
                    bVar2 = true;
                  }
LAB_0024123c:
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  plVar11 = plVar17;
                  if (local_60 == '\0') {
                    if (local_68 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar13 = CONCAT71(uVar15,1);
                    bVar2 = true;
                    if ((bVar4) && (local_48 != (int64_t *)0x0)) {
                      local_48 = plVar17;
                      FUN_00d50b20();
                    }
                    goto LAB_0024123c;
                  }
                  uVar13 = CONCAT71(uVar15,1);
                  bVar2 = true;
                  if ((bVar4) && (local_48 != (int64_t *)0x0)) {
                    local_48 = local_68;
                    FUN_00d50b20();
                  }
                }
LAB_00241250:
                bVar4 = bVar2;
                bVar2 = false;
                local_6c = (uint)uVar13;
                uVar15 = (uint7)(uVar13 >> 8);
                local_48 = plVar11;
                cVar12 = local_31;
              }
              else {
                FUN_00d50b00();
LAB_002410cc:
                pvVar8 = _pthread_getspecific((void*)pplVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0123abe0();
                plVar17 = local_68;
                FUN_00276fd0();
                pplVar10 = (int64_t **)&g_02802688;
                if (plVar17 != (int64_t *)0x0) {
                  (**(code **)(*plVar17 + 0x360))();
                  cVar6 = FUN_00e85ea0();
                  pplVar10 = &local_68;
                  if (cVar6 == '\0') {
                    pplVar10 = (int64_t **)&g_02802688;
                  }
                }
                plVar17 = *pplVar10;
                if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                bVar3 = false;
                bVar2 = true;
                if (plVar17 == (int64_t *)0x0) goto LAB_0024116c;
              }
              if ((local_40 != '\0') && (!bVar3)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar2) {
        FUN_001159b0();
        uVar14 = 0;
        local_40 = cVar12;
        uStack_3f = uVar15;
        if (bVar4) {
LAB_0024139a:
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
LAB_002413a4:
        if (local_40 == '\0') {
          return uVar14;
        }
        if (plVar16 == (int64_t *)0x0) {
          return uVar14;
        }
        FUN_00d50b20();
        return uVar14;
      }
      goto LAB_00240c4a;
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    plVar17 = local_58;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar12 = local_40;
    uVar5 = uStack_3f;
    if (plVar17 != plVar16) goto LAB_00241381;
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    plVar17 = local_58;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar12 = local_40;
    uVar15 = uStack_3f;
    uVar5 = uStack_3f;
    if (local_48 == plVar17) goto LAB_00240c4a;
  }
LAB_00241381:
  uStack_3f = uVar5;
  local_40 = cVar12;
  FUN_001159b0();
  uVar14 = 0;
  if (!bVar4) goto LAB_002413a4;
  goto LAB_0024139a;
}



// ============================================================
// 00790110
// ============================================================
// Function: FUN_00790110
// Address: 00790110
// Size: 1952 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00790110(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  void*puVar5;
  void *pvVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t **pplVar9;
  undefined7 uVar11;
  uint64_t uVar10;
  int iVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint32_t local_84;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  void*local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_58 + 0x450))();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_00757c60();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_007901a2;
      }
    }
    else if (local_58 != (int64_t *)0x0) {
LAB_007901a2:
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar8 = 0x2572358;
      *puVar5 = &g_02572358;
      (*g_02572370)();
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb480();
      plVar13 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00790250;
        }
      }
      else if (local_58 != (int64_t *)0x0) {
LAB_00790250:
        local_60 = puVar5;
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = plVar13;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        local_84 = param_2;
        do {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar12 = -local_40._4_4_;
            }
            else {
              iVar12 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar12);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar12 = 0;
            }
            local_40 = CONCAT44(iVar12,(int)local_40);
          }
          lVar7 = (int64_t)(int)local_40;
          iVar12 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar12);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar12) {
            FUN_00136d50();
            FUN_00d50b20();
            puVar5 = local_60;
            param_2 = local_84;
            break;
          }
          plVar1 = *(int64_t **)(local_48[2] + 8 + lVar7 * 8);
          local_58 = plVar1;
          local_70 = plVar1;
          if ((g_026fdd70 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
            g_026e3238 = FUN_00115af0();
            g_026e3220 = "MUAudioFileSource";
            g_026e3228 = 0xa0;
            g_026e3230 = FUN_00136df0;
            g_026e3240 = 0;
            ram_00000000026e3248 = 0;
            g_026e3250 = 0;
            ram_00000000026e3258 = 0;
            g_026e3260 = 0;
            ram_00000000026e3268 = 0;
            g_026e3270 = 0;
            ram_00000000026e3278 = 0;
            g_026e3280 = 0;
            ram_00000000026e3288 = 0;
            g_026e3290 = 0;
            ram_00000000026e3298 = 0;
            g_026e32a0 = 0;
            ram_00000000026e32a8 = 0;
            g_026e32b0 = 0;
            ram_00000000026e32b8 = 0;
            g_026e32c0 = 0;
            ram_00000000026e32c8 = 0;
            g_026e32d0 = 0;
            ram_00000000026e32d8 = 0;
            g_026e32e0 = 0;
            ___cxa_guard_release();
          }
          pplVar9 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar9 = &local_70;
            if (cVar4 == '\0') {
              pplVar9 = (int64_t **)&g_02802688;
            }
          }
          if (*pplVar9 != (int64_t *)0x0) {
            pvVar6 = _pthread_getspecific((void*)pplVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0123b100();
            if (local_68 == '\0') {
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_007903d0;
              }
            }
            else if (local_70 != (int64_t *)0x0) {
LAB_007903d0:
              iVar12 = FUN_00b88630();
              if ((iVar12 != 3) && (iVar12 = FUN_00b88630(), iVar12 != 2)) goto LAB_00790668;
              local_70 = local_58;
              local_68 = '\0';
              FUN_00d235a0();
              if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
        } while( true );
      }
      if (*(int *)((int64_t)puVar5 + 0xc) == 0) {
        uVar10 = 0;
      }
      else {
        uVar11 = (undefined7)((uint64_t)plVar13 >> 8);
        if ((char)param_2 == '\0') {
          FUN_01caeae0();
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00790596;
            }
          }
          else if (local_58 != (int64_t *)0x0) {
LAB_00790596:
            local_60 = puVar5;
            (**(code **)(*this_ptr + 0x468))();
            plVar13 = local_58;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            lVar7 = g_027296a0;
            if (plVar13 == (int64_t *)0x0) {
              if (g_027296a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = g_027296b0;
              local_c8 = lVar7;
              local_c0 = '\x01';
              if (g_027296b0 != 0) {
                FUN_00d50b00();
              }
              local_b8 = lVar3;
              local_b0 = '\x01';
              local_a8 = 0;
              local_a0 = '\0';
              FUN_00d31230(&local_a8,&local_b8);
              plVar13 = local_58;
              if (local_58 == (int64_t *)0x0) {
                bVar2 = false;
              }
              else if (local_50 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
                bVar2 = true;
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (g_027296a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = g_027296a8;
              if (g_027296a8 != 0) {
                FUN_00d50b00();
              }
              local_e8 = lVar3;
              local_e0 = '\x01';
              local_d8 = 0;
              local_d0 = '\0';
              FUN_00d31230(&local_d8,&local_e8);
              plVar13 = local_58;
              if (local_58 == (int64_t *)0x0) {
                bVar2 = false;
              }
              else if (local_50 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
                bVar2 = true;
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_01d65230();
            plVar1 = local_58;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != plVar13) {
              local_90 = '\0';
              local_98 = plVar13;
              FUN_01d64eb0();
              if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((bVar2) && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
            FUN_00d50b20();
            goto LAB_00790895;
          }
          uVar10 = CONCAT71(uVar11,1);
        }
        else {
          local_78 = 0;
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_78 = '\x01';
          local_80 = this_ptr;
          FUN_00129ad0();
          uVar10 = CONCAT71(uVar11,1);
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_00790895:
      FUN_00d50b20();
      goto LAB_0079089d;
    }
  }
  uVar10 = 0;
LAB_007908a9:
  return uVar10 & 0xffffffff;
LAB_00790668:
  FUN_00d50b20();
  FUN_00136d50();
  FUN_00d50b20();
  uVar10 = 0;
  if (local_60 != (void*)0x0) goto LAB_00790895;
LAB_0079089d:
  FUN_00d50b20();
  goto LAB_007908a9;
}



// ============================================================
// 00760600
// ============================================================
// Function: FUN_00760600
// Address: 00760600
// Size: 3009 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00760600(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t *plVar9;
  void* pVar10;
  int64_t **pplVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int64_t *this_ptr;
  bool bVar14;
  uint32_t uVar15;
  uint8_t local_180 [8];
  uint8_t local_178;
  int64_t local_100;
  char local_f8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x628))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_004a5a00();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar8 = g_026f6fb0;
  if (cVar3 == '\0') {
    if (g_026f6fb0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_02729530;
    if (g_02729530 != 0) {
      FUN_00d50b00();
    }
    FUN_01f6ca30();
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    FUN_01f6c9b0();
    (**(code **)(*local_68 + 0x5e0))();
    FUN_00d50b20();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar10 = 0x2572358;
  *puVar7 = &g_02572358;
  (*g_02572370)();
  local_d0 = puVar7;
  FUN_01f27fe0();
  (**(code **)(*local_40 + 0x760))();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00757c60();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar15 = FUN_012cb480();
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  if (local_68 != (int64_t *)0x0) {
    local_50 = -1;
    while( true ) {
      lVar8 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((int64_t)local_68 + 0xc) <= local_50) break;
      plVar12 = *(int64_t **)(local_68[2] + 8 + lVar8 * 8);
      local_40 = plVar12;
      if ((g_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar11 = (int64_t **)&g_02802688;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar11 = &local_40;
        if (cVar3 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
      }
      puVar7 = local_d0;
      if (*pplVar11 != (int64_t *)0x0) {
        pvVar6 = _pthread_getspecific((void*)pplVar11);
        plVar9 = plVar12;
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar9 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar9 + 0x478))();
        (**(code **)(*local_78 + 0x3f0))();
        cVar3 = (**(code **)(*local_40 + 0x50))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_38 = '\0';
          local_40 = plVar12;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    plVar12 = local_68;
    FUN_00136d50();
    pVar10 = (void*)plVar12;
    uVar15 = FUN_00d50b20();
  }
  if (*(int *)((int64_t)puVar7 + 0xc) != 0) {
    local_178 = 0;
    FUN_00761a80(uVar15,local_180);
  }
  FUN_00da5ad0();
  plVar12 = local_40;
  bVar14 = local_38 != '\0';
  if (bVar14) {
    local_38 = '\0';
  }
  FUN_00da7170();
  FUN_00da7180();
  plVar9 = local_68;
  if (plVar12 != (int64_t *)0x0) {
    FUN_01823d20();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    cVar3 = FUN_01823e80();
    plVar9 = (int64_t *)CONCAT71((int7)((uint64_t)local_68 >> 8),1);
    if (cVar3 != '\0') {
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar9 + 0x18))();
      (**(code **)(*this_ptr + 0x628))();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar15 = FUN_004a1110();
      local_a0 = 0;
      plVar9 = g_02729538;
      if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b00();
        plVar9 = g_02729538;
      }
      local_a0 = '\x01';
      local_a8 = local_78;
      g_02729538 = plVar9;
      if (plVar9 != (int64_t *)0x0) {
        local_a0 = '\x01';
        uVar15 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar9;
      FUN_00ca0840(uVar15,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      uVar15 = (**(code **)(*this_ptr + 0x628))();
      local_90 = 0;
      if (local_78 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b00();
      }
      plVar9 = g_02729540;
      local_90 = '\x01';
      local_98 = local_78;
      if (g_02729540 != (int64_t *)0x0) {
        local_90 = '\x01';
        uVar15 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar9;
      FUN_00ca0840(uVar15,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = this_ptr[0x18];
      if (lVar8 != 0) {
        local_c0 = 0;
        uVar15 = FUN_00d50b00();
        plVar9 = g_02729548;
        local_c0 = '\x01';
        local_c8 = lVar8;
        if (g_02729548 != (int64_t *)0x0) {
          uVar15 = FUN_00d50b00();
        }
        local_40 = plVar9;
        local_38 = '\0';
        FUN_00ca0840(uVar15,&local_40);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
      }
      local_b0 = 0;
      (**(code **)(this_ptr[0xb] + 0x10))();
      FUN_00d50b00();
      local_b0 = '\x01';
      local_e0 = 0;
      local_d8 = '\0';
      local_b8 = this_ptr + 0xb;
      uVar5 = FUN_01824e80(&local_e0,&local_b8);
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        (**(code **)(*local_b8 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar9 = (int64_t *)((uint64_t)uVar5 ^ 1);
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((char)plVar9 != '\0') {
      if (((plVar12 != (int64_t *)0x0) && (FUN_00da7180(), plVar12 != (int64_t *)0x0)) && (bVar14)
         ) {
        FUN_00d50b20();
      }
      uVar13 = 0;
      goto joined_r0x00761120;
    }
    FUN_00da7180();
    if ((plVar12 != (int64_t *)0x0) && (bVar14)) {
      FUN_00d50b20();
    }
  }
  uVar13 = CONCAT71((int7)((uint64_t)plVar9 >> 8),1);
joined_r0x00761120:
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  return uVar13 & 0xffffffff;
}



// ============================================================
// 00533b90
// ============================================================
// Function: FUN_00533b90
// Address: 00533b90
// Size: 2094 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_00533b90(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t **pplVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t this_ptr;
  uint32_t uVar11;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t local_78;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_00d3ecf0();
  FUN_00b34cb0();
  (**(code **)(*local_90 + 0x88))();
  plVar8 = local_58;
  plVar7 = local_68;
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != plVar7) {
    return;
  }
  local_78 = *(int64_t *)(this_ptr + 0x110);
  if (local_78 == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00527070();
  local_a0 = local_58;
  local_98 = 0;
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_007932a0();
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00788660();
  local_80 = local_58;
  if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
     && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
  FUN_00cafd20();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
  FUN_00cb1f10();
  FUN_00db3260();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0015d630();
  plVar7 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_00534331;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_00534331;
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  local_48 = plVar7;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar10 = -local_40._4_4_;
      }
      else {
        iVar10 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar10);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar10 = 0;
      }
      local_40 = CONCAT44(iVar10,(int)local_40);
    }
    lVar4 = (int64_t)(int)local_40;
    iVar10 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar10);
    if (*(int *)((int64_t)local_48 + 0xc) <= iVar10) break;
    plVar7 = *(int64_t **)(local_48[2] + 8 + lVar4 * 8);
    local_58 = plVar7;
    local_68 = plVar7;
    if ((g_026fdd70 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      g_026e3238 = FUN_00115af0();
      g_026e3220 = "MUAudioFileSource";
      g_026e3228 = 0xa0;
      g_026e3230 = FUN_00136df0;
      g_026e3240 = 0;
      ram_00000000026e3248 = 0;
      g_026e3250 = 0;
      ram_00000000026e3258 = 0;
      g_026e3260 = 0;
      ram_00000000026e3268 = 0;
      g_026e3270 = 0;
      ram_00000000026e3278 = 0;
      g_026e3280 = 0;
      ram_00000000026e3288 = 0;
      g_026e3290 = 0;
      ram_00000000026e3298 = 0;
      g_026e32a0 = 0;
      ram_00000000026e32a8 = 0;
      g_026e32b0 = 0;
      ram_00000000026e32b8 = 0;
      g_026e32c0 = 0;
      ram_00000000026e32c8 = 0;
      g_026e32d0 = 0;
      ram_00000000026e32d8 = 0;
      g_026e32e0 = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar6 = &local_68;
      if (cVar2 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    plVar7 = local_58;
    if (*pplVar6 != (int64_t *)0x0) {
      pvVar3 = _pthread_getspecific((void*)pplVar6);
      plVar8 = local_58;
      pVar5 = (void*)pplVar6;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar7 = plVar8, lVar4 != 0)) {
        plVar7 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar7 + 0x478))();
      uVar11 = (**(code **)(*local_90 + 0x388))();
      plVar7 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (int64_t *)0x0) && (uVar11 = FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      local_e0 = plVar7;
      local_d8 = '\0';
      (**(code **)(*local_80 + 0x400))(uVar11,&local_e0);
      plVar8 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      cVar2 = (**(code **)(*plVar8 + 0x398))();
      if (cVar2 == '\0') {
LAB_00534120:
        plVar9 = local_58;
        pvVar3 = _pthread_getspecific(pVar5);
        plVar1 = local_58;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar9 = plVar1, lVar4 != 0)) {
          plVar9 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        cVar2 = (**(code **)(*plVar9 + 0x498))();
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b0 = plVar8;
          local_a8 = '\0';
          FUN_0123bf80();
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_d0 = plVar8;
        local_c8 = '\0';
        cVar2 = FUN_00b80190();
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') goto LAB_00534120;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0124d450();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = plVar8;
        local_b8 = '\0';
        FUN_0123ab70();
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar8 = local_58;
        if (cVar2 == '\0') {
          pvVar3 = _pthread_getspecific(pVar5);
          plVar9 = local_58;
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar8 = plVar9, lVar4 != 0)) {
            plVar8 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x480))();
        }
      }
      FUN_00d50b20();
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00136d50();
  FUN_00d50b20();
LAB_00534331:
  (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
  FUN_00cb1f10();
  FUN_00db3270();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
  (**(code **)(*local_58 + 0x3c8))();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 012cc0c0
// ============================================================
// Function: FUN_012cc0c0
// Address: 012cc0c0
// Size: 2050 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_012cc0c0(int64_t *param_1,void*param_2,uint32_t param_3,uint32_t param_4)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t **pplVar8;
  int iVar9;
  int64_t this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  float fVar12;
  float fVar13;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  uint32_t local_a0;
  uint32_t local_9c;
  void*local_98;
  int local_70;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  local_a0 = param_4;
  local_9c = param_3;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  local_98 = puVar4;
  if (lVar1 != 0) {
    local_70 = -1;
LAB_012cc193:
    do {
      lVar5 = (int64_t)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) goto LAB_012cc474;
      plVar10 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      local_58 = plVar10;
      if ((g_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_58;
        if (cVar3 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar8 != (int64_t *)0x0) {
        pvVar6 = _pthread_getspecific((void*)pplVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124c6e0();
        plVar10 = local_58;
        if (local_50 == '\0') {
          if (local_58 == (int64_t *)0x0) goto LAB_012cc193;
          FUN_00d50b00();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_58 == (int64_t *)0x0) goto LAB_012cc193;
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = plVar10;
        local_40 = 0xffffffff;
        local_38 = 0;
        while( true ) {
          lVar5 = (int64_t)(int)local_40;
          iVar9 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar9);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar9) break;
          local_58 = *(int64_t **)(local_48[2] + 8 + lVar5 * 8);
          pvVar6 = _pthread_getspecific((void*)local_48[2]);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01397570();
          if (cVar3 != '\0') {
            FUN_00d235a0();
            break;
          }
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar9 = -local_40._4_4_;
            }
            else {
              local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar9 = 0;
            }
            local_40 = CONCAT44(iVar9,(int)local_40);
          }
        }
        FUN_00115190();
        FUN_00d50b20();
      }
    } while( true );
  }
LAB_012cc48b:
  if (*(int *)((int64_t)local_98 + 0xc) == 0) {
    lVar1 = *(int64_t *)(this_ptr + 0x48);
    fVar13 = g_02390124;
  }
  else {
    fVar13 = g_02390124 / (float)*(int *)((int64_t)local_98 + 0xc);
    lVar1 = *(int64_t *)(this_ptr + 0x48);
  }
  if (lVar1 != 0) {
    local_70 = -1;
    fVar12 = 0.0;
    while( true ) {
      lVar5 = (int64_t)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      plVar10 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      local_58 = plVar10;
      if ((g_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_58;
        if (cVar3 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar8 != (int64_t *)0x0) {
        local_50 = '\0';
        local_58 = plVar10;
        cVar3 = FUN_00d24090();
        pVar7 = (void*)pplVar8;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar3 == '\0') || (*param_1 == 0)) {
          plVar11 = (int64_t *)0x0;
          bVar2 = false;
        }
        else {
          FUN_00df4f00(fVar12,fVar13 + fVar12);
          plVar11 = local_58 + 2;
          if (local_58 == (int64_t *)0x0) {
            bVar2 = false;
            plVar11 = (int64_t *)0x0;
          }
          else if (local_50 == '\0') {
            (**(code **)(*plVar11 + 0x10))();
            FUN_00d50b00();
            bVar2 = true;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = '\0';
            bVar2 = true;
          }
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        local_c0 = (int64_t *)*param_2;
        local_b8 = '\0';
        local_a8 = '\0';
        local_b0 = plVar11;
        (**(code **)(*plVar10 + 0x488))
                  (&local_b0,&local_c0,(uint8_t)local_9c,(uint8_t)local_a0);
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          (**(code **)(*local_b0 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          (**(code **)(*local_c0 + 0x10))();
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          fVar12 = fVar12 + fVar13;
        }
        if ((bVar2) && (plVar11 != (int64_t *)0x0)) {
          (**(code **)(*plVar11 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    FUN_00136d50();
    if (local_98 == (void*)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
LAB_012cc474:
  FUN_00136d50();
  goto LAB_012cc48b;
}



// ============================================================
// 00268ff0
// ============================================================
// Function: FUN_00268ff0
// Address: 00268ff0
// Size: 1716 bytes
// Class: MUAudioFileSource

uint64_t FUN_00268ff0(void* param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  char *pcVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  bool bVar10;
  double dVar11;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  double local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(int64_t **)(this_ptr + 0xa0) != (int64_t *)0x0) &&
     (cVar2 = (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0xa78))(), cVar2 != '\0')) {
    FUN_01b6d0d0();
    lVar8 = local_48;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_01b6d0d0();
      lVar8 = local_58;
      pvVar3 = _pthread_getspecific(param_1);
      lVar1 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar8 = lVar1, lVar4 != 0)) {
        lVar8 = *(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      if (*(int *)(*(int64_t *)(lVar8 + 0x48) + 0x18) + 7U < 0xf) {
        FUN_00d23310();
        lVar8 = local_48;
        local_68 = local_40[0];
        pcVar7 = &local_68;
        if (local_40[0] != '\0') {
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
        bVar10 = lVar8 == 0;
        if ((local_40[0] != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar10 = false;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar10) {
        (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x958))();
        lVar8 = local_48;
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x958))();
          FUN_01a8c310();
          lVar1 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          uVar9 = CONCAT71((int7)((uint64_t)lVar8 >> 8),lVar1 != 0);
          if ((lVar1 != 0) && (param_2 != '\0')) {
            FUN_00b5dfe0();
            local_90 = 0;
            local_98 = CONCAT71(uStack_67,local_68);
            if (local_60 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_90 = '\x01';
            FUN_001220c0();
            local_a8 = local_58;
            local_a0 = 0;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_a0 = '\x01';
            FUN_00b5dfe0();
            local_88 = local_c0;
            local_80 = 0;
            if (local_b8 == '\0') {
              if (local_c0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b8 = '\0';
            }
            local_80 = '\x01';
            local_e8 = '\0';
            local_f0 = 0;
            plVar6 = &local_88;
            FUN_01f53880(plVar6,&local_a8,&local_f0);
            lVar8 = local_48;
            pVar5 = (void*)plVar6;
            if (local_40[0] == '\0') {
              if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
              FUN_00d50b20();
            }
            if (lVar8 == 0) {
              uVar9 = 0;
            }
            else {
              FUN_01b6d0d0();
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              pcVar7 = &local_68;
              FUN_012527b0(pcVar7,0,0,0);
              lVar4 = local_48;
              pVar5 = (void*)CONCAT71((int7)((uint64_t)pcVar7 >> 8),local_40[0]);
              pcVar7 = local_38;
              if (local_40[0] != '\0') {
                pcVar7 = local_40;
              }
              local_38[0] = local_40[0];
              *pcVar7 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (lVar4 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              FUN_00e7bcc0();
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_b0 = (double)FUN_016c98e0();
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar11 = (double)FUN_016c98e0();
              dVar11 = dVar11 - local_b0;
              local_b0 = (double)FUN_00e7b500();
              local_e0 = lVar1;
              local_d8 = '\0';
              FUN_01a71bc0();
              lVar4 = local_48;
              local_70 = 0;
              if (local_40[0] == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40[0] = '\0';
              }
              local_70 = '\x01';
              local_78 = lVar4;
              local_d0 = lVar8;
              local_c8 = '\0';
              FUN_001256c0(local_b0,dVar11);
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
              uVar9 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
              FUN_00d50b20();
            }
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00269205;
        }
      }
    }
  }
  uVar9 = 0;
LAB_00269205:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 004a64d0
// ============================================================
// Function: FUN_004a64d0
// Address: 004a64d0
// Size: 2472 bytes
// Class: MUAudioFileSource
// String references:
//   "%@.copy"

void FUN_004a64d0(void* param_1)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int iVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t *arg1;
  void* pVar7;
  uint64_t uVar8;
  uint8_t local_138 [8];
  uint8_t local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  void*local_60;
  uint local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_012e6000();
  local_50 = local_128;
  local_58 = 1;
  local_60 = &g_024c5048;
  local_48 = 0;
  if (local_128 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_00d8cb40(uVar8,&local_60);
  local_e0 = local_70;
  local_d8 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_d8 = '\x01';
  local_118 = *arg1;
  local_110 = '\0';
  pVar7 = 1;
  FUN_004f83c0(1,&local_118);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = lVar3;
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_60 = (void*)*arg1;
  local_58 = local_58 & 0xffffff00;
  iVar4 = FUN_00d237a0();
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_004a11d0();
  puVar2 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_130 = 1;
  pVar7 = iVar4 + 1;
  FUN_004a17d0(pVar7,local_138);
  lVar1 = local_e8;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  local_d0 = local_60;
  local_c8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_c8 = '\x01';
  FUN_012e8aa0();
  if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  local_c0 = local_60;
  local_b8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_b8 = '\x01';
  FUN_012e89e0();
  if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  iVar4 = *(int *)((int64_t)local_60 + 0xc);
  if ((char)local_58 != '\0') {
    FUN_00d50b20();
  }
  if (iVar4 != 0) {
    FUN_01ca6a90();
    local_b0 = local_40;
    local_a8 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a8 = '\x01';
    FUN_01c92fe0();
    puVar2 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01c93060();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = '\x01';
    FUN_01266770();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_0125a280();
    if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_90 = local_60;
    local_88 = 0;
    if ((char)local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_88 = '\x01';
    uVar6 = FUN_00e7bdb0();
    FUN_01c936e0(1,uVar6);
    if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_108 = lVar1;
    local_100 = '\0';
    FUN_000ba510();
    local_80 = local_60;
    local_78 = 0;
    if ((char)local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_78 = '\x01';
    local_f0 = '\0';
    local_f8 = 0;
    FUN_01c9db50(uVar8,&local_f8);
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004f0450
// ============================================================
// Function: FUN_004f0450
// Address: 004f0450
// Size: 1588 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

double FUN_004f0450(uint64_t param_1,double param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void* pVar8;
  int64_t **pplVar9;
  int64_t *plVar10;
  char *pcVar11;
  uint64_t uVar12;
  int64_t *this_ptr;
  double dVar13;
  double local_a8;
  int64_t local_a0;
  char local_98 [8];
  int64_t *local_90;
  int local_88;
  int iStack_84;
  int local_80;
  double local_78;
  int64_t *local_70;
  uint64_t local_68;
  uint local_5c;
  double local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  local_a8 = (double)FUN_004f01b0();
  if (*(int *)(*this_ptr + 0xc) == 1) {
    FUN_00d23310();
    pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_98[0]);
    pcVar11 = local_38;
    if (local_98[0] != '\0') {
      pcVar11 = local_98;
    }
    local_38[0] = local_98[0];
    *pcVar11 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_70 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_38[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != (int64_t *)0x0) {
      local_98[0] = '\0';
      local_90 = local_70;
      local_88 = -1;
      iStack_84 = 0;
      local_80 = 0;
      local_5c = 0xffffff01;
      local_68 = 0;
      local_40 = (int64_t *)0x0;
      local_58 = 0.0;
      dVar13 = 0.0;
LAB_004f05cf:
      while( true ) {
        iVar2 = iStack_84;
        if (iStack_84 != 0) {
          if (iStack_84 < 1) {
            iStack_84 = -iStack_84;
          }
          else {
            local_88 = local_88 - iStack_84;
            FUN_00d23690(dVar13,iStack_84);
            local_80 = local_80 + iVar2;
            iStack_84 = 0;
          }
        }
        local_88 = local_88 + 1;
        if (*(int *)((int64_t)local_90 + 0xc) <= local_88) break;
        pVar8 = (void*)local_90[2];
        pvVar3 = _pthread_getspecific(pVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_0125e7c0();
        if (local_48 == '\0') goto LAB_004f0680;
        if (local_50 != (int64_t *)0x0) goto LAB_004f06b0;
      }
      plVar10 = local_90;
      FUN_001159b0();
      FUN_00d50b20();
      plVar4 = local_40;
      if ((local_40 != (int64_t *)0x0) && ((local_58 != 0.0 || (NAN(local_58))))) {
        pvVar3 = _pthread_getspecific((void*)plVar10);
        plVar4 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar4 = local_40, lVar5 != 0)) {
          plVar10 = local_40;
          plVar4 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        pVar8 = (void*)plVar10;
        lVar5 = (**(code **)(*plVar4 + 0x378))();
        plVar4 = local_40;
        pvVar3 = _pthread_getspecific(pVar8);
        plVar10 = plVar4;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        dVar13 = (double)(**(code **)(*plVar10 + 0x370))();
        uVar12 = lVar5 - (int64_t)(dVar13 * (param_2 - local_58));
        uVar7 = -uVar12;
        if (0 < (int64_t)uVar12) {
          uVar7 = uVar12;
        }
        if (uVar7 < 2) {
          local_a8 = local_a8 + local_58;
        }
      }
      if (((char)local_68 != '\0') && (plVar4 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return local_a8;
LAB_004f0680:
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b00();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_004f06b0:
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_013de8d0();
    if ((dVar13 != g_02390448) || (NAN(dVar13) || NAN(g_02390448))) {
      local_78 = local_58;
    }
    else {
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = (double)FUN_01264310();
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_013def20();
      dVar13 = local_78 - dVar13;
      if ((local_5c & 1) == 0) {
        local_78 = local_58;
        if (local_58 < dVar13) {
          local_78 = dVar13;
        }
      }
      else {
        local_5c = 0;
        local_78 = dVar13;
      }
      if (local_40 == (int64_t *)0x0) {
        pvVar3 = _pthread_getspecific(pVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df6b0();
        plVar4 = local_50;
        if ((g_026fdd70 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          ___cxa_guard_release();
        }
        pplVar9 = (int64_t **)&g_02802688;
        if (plVar4 != (int64_t *)0x0) {
          (**(code **)(*plVar4 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar9 = &local_50;
          if (cVar1 == '\0') {
            pplVar9 = (int64_t **)&g_02802688;
          }
        }
        plVar4 = *pplVar9;
        local_40 = plVar4;
        if (plVar4 == (int64_t *)0x0) {
          local_40 = (int64_t *)0x0;
        }
        else {
          if (*(char *)(pplVar9 + 1) == '\0') {
            plVar4 = (int64_t *)FUN_00d50b00();
          }
          else {
            *(void*)(pplVar9 + 1) = 0;
          }
          local_68 = CONCAT71((int7)((uint64_t)plVar4 >> 8),1);
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    local_58 = local_78;
    dVar13 = local_78;
  }
  goto LAB_004f05cf;
}



// ============================================================
// 00243520
// ============================================================
// Function: FUN_00243520
// Address: 00243520
// Size: 2313 bytes
// Class: MUAudioFileSource

void FUN_00243520(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_30;
  char local_28;
  
  FUN_01e53f10();
  FUN_00d403d0();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6d60;
  if (g_026f6d60 != 0) {
    FUN_00d50b00();
  }
  local_230 = lVar1;
  local_228 = '\x01';
  local_220 = 0;
  local_218 = '\0';
  FUN_00d41430(&local_220,&local_230);
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = g_026f6d50;
  if (g_026f6d50 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar1;
  local_208 = '\x01';
  local_200 = 0;
  local_1f8 = '\0';
  FUN_00d41430(&local_200,&local_210);
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = g_026f6d40;
  if (g_026f6d40 != 0) {
    FUN_00d50b00();
  }
  local_1f0 = lVar1;
  local_1e8 = '\x01';
  local_1e0 = 0;
  local_1d8 = '\0';
  FUN_00d41430(&local_1e0,&local_1f0);
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = lVar1;
  local_1c8 = '\x01';
  local_1c0 = 0;
  local_1b8 = '\0';
  FUN_00d41430(&local_1c0,&local_1d0);
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = g_027e7c30;
  if (g_027e7c30 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = lVar1;
  local_1a8 = '\x01';
  local_1a0 = 0;
  local_198 = '\0';
  FUN_00d41430(&local_1a0,&local_1b0);
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = g_026f6d58;
  if (g_026f6d58 != 0) {
    FUN_00d50b00();
  }
  local_190 = lVar1;
  local_188 = '\x01';
  local_180 = 0;
  local_178 = '\0';
  FUN_00d41430(&local_180,&local_190);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = g_026fe420;
  if (g_026fe420 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar1;
  local_168 = '\x01';
  local_160 = 0;
  local_158 = '\0';
  FUN_00d41430(&local_160,&local_170);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = g_026f6d70;
  if (g_026f6d70 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar1;
  local_148 = '\x01';
  local_140 = 0;
  local_138 = '\0';
  FUN_00d41430(&local_140,&local_150);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
    FUN_00d50b00();
  }
  lVar1 = g_026f6ec0;
  if (g_026f6ec0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026d7800;
  local_130 = lVar1;
  local_128 = '\x01';
  if (g_026d7800 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar2;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_000bf690(&local_120,&local_130,&local_110);
  lVar1 = *(int64_t *)(this_ptr + 0xe0);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_00243be0;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0xe0);
      *(int64_t *)(this_ptr + 0xe0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_00243be0:
      *(int64_t *)(this_ptr + 0xe0) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_100 = g_026f6ed0;
  if (g_026f6ed0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6ed8;
  local_f8 = '\x01';
  if (g_026f6ed8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_000bf690(&local_f0,&local_100,&local_e0);
  lVar1 = *(int64_t *)(this_ptr + 0x140);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_00243d8e;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_00243d43;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x140);
    *(int64_t *)(this_ptr + 0x140) = local_30;
  }
  else {
    local_28 = '\0';
LAB_00243d43:
    *(int64_t *)(this_ptr + 0x140) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_00243d8e:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0124cb30
// ============================================================
// Function: FUN_0124cb30
// Address: 0124cb30
// Size: 1399 bytes
// Class: MUAudioFileSource

uint64_t FUN_0124cb30(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t this_ptr;
  uint64_t uVar12;
  uint64_t uVar13;
  bool bVar14;
  char cVar15;
  uint64_t uVar16;
  uint local_6c;
  uint64_t local_60;
  char local_58;
  uint64_t local_48;
  uint64_t local_40;
  char local_31;
  
  lVar7 = *(int64_t *)(this_ptr + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc);
  if (0 < (int)uVar1) {
    local_6c = (uint)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    uVar10 = 0;
    local_40 = 0;
    bVar4 = false;
    uVar8 = 0;
    local_48 = 0;
    uVar9 = 0;
    uVar12 = 0;
    bVar14 = false;
    do {
      uVar11 = *(uint64_t *)(*(int64_t *)(lVar7 + 0x10) + uVar10 * 8);
      pvVar6 = _pthread_getspecific((void*)uVar8);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        uVar11 = *(uint64_t *)(uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
      FUN_01327a50();
      cVar15 = (char)uVar9;
      if (local_60 == local_48) {
        if ((cVar15 == '\0') && (local_60 != 0)) {
          local_31 = '\x01';
          uVar8 = local_48;
          if (local_58 == '\0') {
            FUN_00d50b00();
            goto LAB_0124cc60;
          }
        }
        else {
joined_r0x0124cfec:
          local_31 = cVar15;
          uVar8 = local_48;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        local_31 = '\x01';
        uVar8 = local_60;
        if ((cVar15 != '\0') && (uVar8 = local_60, local_48 != 0)) {
          FUN_00d50b20();
          local_48 = local_60;
LAB_0124cc60:
          local_31 = '\x01';
          cVar15 = local_31;
          goto joined_r0x0124cfec;
        }
      }
      else {
        local_31 = '\x01';
        uVar8 = local_60;
        if ((cVar15 != '\0') && (uVar8 = local_60, local_48 != 0)) {
          FUN_00d50b20();
          uVar8 = local_60;
        }
      }
      local_48 = uVar8;
      uVar8 = local_48;
      if ((local_48 != 0) && (uVar2 = *(uint *)(local_48 + 0xc), 0 < (int)uVar2)) {
        uVar8 = 0;
        do {
          uVar11 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + uVar8 * 8);
          pvVar6 = _pthread_getspecific((void*)uVar8);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            uVar11 = *(uint64_t *)(uVar11 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          FUN_013df790();
          if (local_60 == local_40) {
            if ((bVar4) || (local_60 == 0)) {
joined_r0x0124cf78:
              uVar9 = local_40;
              bVar5 = bVar4;
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              uVar9 = local_40;
              bVar5 = true;
              if (local_58 == '\0') {
                FUN_00d50b00();
                goto LAB_0124cdd2;
              }
            }
          }
          else if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
            uVar9 = local_60;
            bVar5 = true;
            if ((bVar4) && (uVar9 = local_60, local_40 != 0)) {
              FUN_00d50b20();
              local_40 = local_60;
LAB_0124cdd2:
              bVar4 = true;
              goto joined_r0x0124cf78;
            }
          }
          else {
            bVar5 = true;
            uVar9 = local_60;
            if ((bVar4) && (uVar9 = local_60, local_40 != 0)) {
              FUN_00d50b20();
              uVar9 = local_60;
            }
          }
          bVar4 = bVar5;
          local_40 = uVar9;
          if ((local_40 != 0) && (uVar3 = *(uint *)(local_40 + 0xc), 0 < (int)uVar3)) {
            uVar16 = 0;
            uVar9 = local_40;
            uVar13 = uVar12;
            do {
              pvVar6 = _pthread_getspecific((void*)uVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013dd790();
              if (local_60 == uVar13) {
                if ((bVar14) || (local_60 == 0)) {
joined_r0x0124cf09:
                  uVar12 = uVar13;
                  bVar5 = bVar14;
                  if ((local_58 != '\0') && (local_60 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  uVar12 = uVar13;
                  bVar5 = true;
                  if (local_58 == '\0') {
                    FUN_00d50b00();
                    goto LAB_0124cef5;
                  }
                }
              }
              else {
                uVar12 = local_60;
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    FUN_00d50b00();
                  }
                  bVar5 = true;
                  if ((bVar14) && (uVar13 != 0)) {
                    FUN_00d50b20();
                    uVar13 = local_60;
LAB_0124cef5:
                    bVar14 = true;
                    goto joined_r0x0124cf09;
                  }
                }
                else {
                  bVar5 = true;
                  if ((bVar14) && (uVar13 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              bVar14 = bVar5;
              if ((uVar12 != 0) && (*(int *)(uVar12 + 0xc) != 0)) {
                uVar9 = (uint64_t)local_6c;
                goto LAB_0124d08e;
              }
              uVar16 = uVar16 + 1;
              uVar11 = local_60;
              uVar13 = uVar12;
            } while (uVar3 != uVar16);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar2);
      }
      uVar10 = uVar10 + 1;
      uVar9 = CONCAT71((int7)(uVar11 >> 8),uVar10 < uVar1);
      if (uVar10 == uVar1) goto LAB_0124d08e;
      local_6c = (uint)uVar9;
      lVar7 = *(int64_t *)(this_ptr + 0x38);
      uVar8 = CONCAT71((int7)(uVar8 >> 8),local_31);
      uVar9 = uVar8 & 0xffffffff;
    } while( true );
  }
  uVar9 = 0;
LAB_0124d0cf:
  return uVar9 & 0xffffff01;
LAB_0124d08e:
  if ((bVar14) && (uVar12 != 0)) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_0124d0cf;
}



// ============================================================
// 012cb710
// ============================================================
// Function: FUN_012cb710
// Address: 012cb710
// Size: 1372 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void* FUN_012cb710(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  char cVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t *plVar5;
  void* pVar6;
  code *pcVar7;
  int iVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar9;
  int64_t **pplVar10;
  int64_t local_a8;
  char local_a0;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  local_38 = param_2;
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if (*(int64_t *)(arg1 + 0x48) == 0) {
      bVar1 = false;
      plVar9 = (int64_t *)0x0;
    }
    else {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = *(int64_t *)(arg1 + 0x48);
      local_58 = 0xffffffff;
      local_50 = 0;
      bVar1 = false;
      plVar9 = (int64_t *)0x0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar8 = -local_58._4_4_;
          }
          else {
            iVar8 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar8);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
        lVar3 = (int64_t)(int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)(local_60 + 0xc) <= iVar8) break;
        pcVar7 = *(code **)(local_60 + 0x10);
        plVar5 = *(int64_t **)(pcVar7 + lVar3 * 8 + 8);
        local_70 = plVar5;
        if ((g_026fdd70 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          pcVar7 = FUN_00136df0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          ___cxa_guard_release();
        }
        pVar6 = (void*)pcVar7;
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar10 = &local_70;
          if (cVar2 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        plVar5 = *pplVar10;
        if (plVar5 == plVar9) {
          if ((!bVar1) && (plVar5 != (int64_t *)0x0)) {
            plVar5 = plVar9;
            if (*(char *)(pplVar10 + 1) != '\0') goto LAB_012cb865;
            bVar1 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (*(char *)(pplVar10 + 1) == '\0') {
            if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (plVar9 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar9 = plVar5;
              bVar1 = true;
              goto LAB_012cb8c0;
            }
          }
          else {
            if ((bVar1) && (plVar9 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_012cb865:
            *(void*)(pplVar10 + 1) = 0;
          }
          plVar9 = plVar5;
          bVar1 = true;
        }
LAB_012cb8c0:
        if (plVar9 != (int64_t *)0x0) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          lVar3 = *local_38;
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_a8 == lVar3) {
            *(void*)(this_ptr + 1) = 0;
            if (!bVar1) {
              FUN_00d50b00();
            }
            *this_ptr = plVar9;
            *(void*)(this_ptr + 1) = 1;
            FUN_00115e00();
            return this_ptr;
          }
        }
      }
      FUN_00115e00();
    }
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00115cd0();
    pVar6 = 0x25ccea8;
    *plVar5 = (int64_t)&g_025ccea8;
    plVar5[0x13] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    *(void*)((int64_t)plVar5 + 0x84) = 0;
    *(void*)((int64_t)plVar5 + 0x8c) = 0;
    (*g_025ccec0)();
    if (plVar5 == plVar9) {
      plVar5 = plVar9;
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    else if ((bVar1) && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b010();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00b88600();
    local_48 = local_70;
    local_40 = 0;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_40 = '\x01';
    FUN_0123ab70();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123af90();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00b7a710();
    FUN_0123afd0();
    FUN_012cb4b0();
    pvVar4 = _pthread_getspecific(pVar6);
    plVar9 = plVar5;
    if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar9 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar9 + 0x3d0))();
    *this_ptr = plVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}



// ============================================================
// 0076e660
// ============================================================
// Function: FUN_0076e660
// Address: 0076e660
// Size: 1530 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_0076e660(void* param_1,int64_t *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *******ppppppplVar7;
  void*this_ptr;
  int iVar8;
  int64_t ******pppppplVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *******local_a0;
  char local_98;
  int64_t *******local_90;
  int local_88;
  int iStack_84;
  int local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *******local_48;
  int64_t local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00757c60();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_012cb480();
  ppppppplVar7 = local_a0;
  if (local_98 == '\0') {
    if (((local_a0 != (int64_t *******)0x0) && (uVar10 = FUN_00d50b00(), local_98 != '\0')) &&
       (local_a0 != (int64_t *******)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_98 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (ppppppplVar7 != (int64_t *******)0x0) {
    local_98 = 0;
    local_a0 = (int64_t *******)0x0;
    local_48 = ppppppplVar7;
    local_90 = ppppppplVar7;
    local_88 = -1;
    iStack_84 = 0;
    local_80 = 0;
LAB_0076e753:
    while( true ) {
      iVar1 = iStack_84;
      if (iStack_84 != 0) {
        if (iStack_84 < 1) {
          iStack_84 = -iStack_84;
        }
        else {
          local_88 = local_88 - iStack_84;
          uVar10 = FUN_00d23690(uVar10,iStack_84);
          local_80 = local_80 + iVar1;
          iStack_84 = 0;
        }
      }
      lVar5 = (int64_t)local_88;
      iVar8 = local_88 + 1;
      local_88 = iVar8;
      iVar1 = *(int *)((int64_t)local_90 + 0xc);
      if (iVar1 <= iVar8) break;
      pppppplVar9 = (int64_t ******)local_90[2][lVar5 + 1];
      local_a0 = (int64_t *******)pppppplVar9;
      if ((g_026fdd70 == '\0') &&
         (iVar3 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_00, iVar3 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        uVar10 = ___cxa_guard_release();
      }
      ppppppplVar7 = (int64_t *******)&g_02802688;
      if (pppppplVar9 != (int64_t ******)0x0) {
        (*(*pppppplVar9)[0x6c])();
        cVar2 = FUN_00e85ea0();
        ppppppplVar7 = (int64_t *******)&local_a0;
        uVar10 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          ppppppplVar7 = (int64_t *******)&g_02802688;
        }
      }
      pppppplVar9 = *ppppppplVar7;
      if (*(char *)(ppppppplVar7 + 1) == '\0') goto LAB_0076e810;
      *(void*)(ppppppplVar7 + 1) = 0;
      if (pppppplVar9 != (int64_t ******)0x0) goto LAB_0076e825;
    }
    pppppplVar9 = (int64_t ******)0x0;
    ppppppplVar7 = local_90;
    goto LAB_0076ebf0;
  }
LAB_0076ec41:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
LAB_0076e810:
  if (pppppplVar9 == (int64_t ******)0x0) goto LAB_0076e753;
  FUN_00d50b00();
LAB_0076e825:
  pvVar4 = _pthread_getspecific((void*)ppppppplVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123b100();
  if (local_40 == 0) {
    cVar2 = '\0';
  }
  else {
    pvVar4 = _pthread_getspecific((void*)ppppppplVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b100();
    FUN_00b88600();
    local_70 = 0;
    if (local_c8 == '\0') {
      if (local_d0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_c8 = '\0';
    }
    local_70 = '\x01';
    local_78 = local_d0;
    FUN_00b84ae0();
    FUN_00b88600();
    local_50 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_50 = '\x01';
    local_58 = local_b0;
    FUN_00b84ae0();
    local_60 = 0;
    if (local_b8 == '\0') {
      if (local_c0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_b8 = '\0';
    }
    local_60 = '\x01';
    local_68 = local_c0;
    cVar2 = (**(code **)(*local_f8 + 0x50))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    uVar10 = FUN_00d50b20();
    goto LAB_0076e753;
  }
  FUN_00d50b00();
  FUN_00d50b20();
LAB_0076ebf0:
  pVar6 = (void*)ppppppplVar7;
  FUN_00115e00();
  FUN_00d50b20();
  if (pppppplVar9 != (int64_t ******)0x0) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    if (iVar1 <= iVar8) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  goto LAB_0076ec41;
}



// ============================================================
// 004a41a0
// ============================================================
// Function: FUN_004a41a0
// Address: 004a41a0
// Size: 1821 bytes
// Class: MUAudioFileSource
// String references:
//   "%@.%I"

void* FUN_004a41a0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  uint32_t uVar8;
  undefined7 uVar9;
  int64_t arg1;
  void*this_ptr;
  void*puVar10;
  int64_t local_120;
  char local_118;
  int64_t local_f0;
  char local_e8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  void*local_90;
  uint local_88;
  int64_t local_80;
  char local_78;
  int local_70;
  uint32_t local_64;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint64_t local_40;
  void*local_38;
  
  lVar5 = *(int64_t *)(arg1 + 0x38);
  if (lVar5 == 0) {
    plVar7 = param_1;
    pvVar3 = _pthread_getspecific((void*)param_1);
    pVar6 = (void*)plVar7;
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    local_48 = 0;
    plVar7 = param_1;
    FUN_00d50b00();
    pVar6 = (void*)plVar7;
    local_48 = '\x01';
    local_50 = lVar5;
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  local_38 = local_90;
  if ((char)local_88 == '\0') {
    if (local_90 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_88 = local_88 & 0xffffff00;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = *param_2;
  if (lVar5 == 0) {
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar6 = (void*)local_38;
    }
    FUN_012e6000();
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar6 = (void*)local_38;
    }
    FUN_012e6160();
    lVar1 = local_50;
    local_70 = *(int *)(local_f0 + 0xc);
    local_88 = 2;
    local_90 = &g_024c5048;
    local_78 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_70 = local_70 + 1;
    local_80 = lVar1;
    local_78 = '\x01';
    local_90 = (void*)&g_025df2a0;
    FUN_00d8cb40();
    lVar5 = local_60;
    if (local_60 == 0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((uint64_t)lVar1 >> 8);
      if (local_58 == '\0') {
        FUN_00d50b00();
        uVar8 = (uint32_t)CONCAT71(uVar9,1);
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
        uVar8 = (uint32_t)CONCAT71(uVar9,1);
      }
    }
    local_90 = &g_024c5048;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *param_1;
    local_64 = uVar8;
  }
  else if ((char)param_2[1] == '\0') {
    local_64 = 0;
    lVar1 = *param_1;
  }
  else {
    uVar4 = FUN_00d50b00();
    local_64 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((char)local_88 != '\0') {
      FUN_00d50b20();
    }
    local_b8 = '\0';
    local_b0 = local_38;
    local_a8 = '\0';
    pVar6 = 0;
    local_c0 = lVar5;
    uVar4 = FUN_004f83c0(0,&local_b0);
    puVar10 = local_90;
    if (local_90 == (void*)0x0) {
      local_40 = 0;
    }
    else if ((char)local_88 == '\0') {
      uVar4 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = local_88 & 0xffffff00;
      local_40 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    }
    if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_90 = (void*)*param_1;
    local_88 = local_88 & 0xffffff00;
    FUN_00d237a0();
    if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_d0 = *param_1;
    local_c8 = '\0';
    pVar6 = 0;
    uVar4 = FUN_004f83c0(0,&local_d0);
    puVar10 = local_90;
    if (local_90 == (void*)0x0) {
      local_40 = 0;
    }
    else if ((char)local_88 == '\0') {
      uVar4 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = local_88 & 0xffffff00;
      local_40 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = '\0';
  local_a0 = puVar10;
  FUN_012e66e0();
  puVar2 = local_38;
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_004a11d0();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_40 == '\0') && (puVar10 != (void*)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = puVar10;
  *(void*)(this_ptr + 1) = 1;
  if (((char)local_64 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01394e80
// ============================================================
// Function: FUN_01394e80
// Address: 01394e80
// Size: 1579 bytes
// Class: MUAudioFileSource

int64_t FUN_01394e80(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t local_a8;
  char local_a0;
  int64_t local_80;
  char local_78;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  plVar6 = (int64_t *)*this_ptr;
  if (plVar6 == (int64_t *)0x0) {
    FUN_013933d0();
    lVar10 = *this_ptr;
    if (lVar10 == local_a8) {
      if (((char)this_ptr[1] == '\0') && (local_a8 != 0)) {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01394f33;
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar9 = this_ptr[1];
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = local_a8;
        if (((char)lVar9 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *this_ptr = local_a8;
        if (((char)lVar9 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01394f33:
      *(void*)(this_ptr + 1) = 1;
    }
    plVar6 = (int64_t *)*this_ptr;
    if (plVar6 == (int64_t *)0x0) {
      return -1;
    }
  }
  (**(code **)(*plVar6 + 1000))();
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
      goto LAB_01394f99;
    }
  }
  else if (local_a8 != 0) {
LAB_01394f99:
    if (*(int *)(local_a8 + 0xc) < 1) {
      lVar10 = -1;
    }
    else {
      lVar10 = -1;
      lVar9 = 0;
      do {
        lVar7 = g_027bf478;
        plVar6 = *(int64_t **)(*(int64_t *)(local_a8 + 0x10) + lVar9 * 8);
        if (g_027bf478 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar6 + 0x400))();
        plVar4 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        cVar5 = (**(code **)(*plVar4 + 0x398))();
        bVar1 = true;
        if (cVar5 == '\0') {
          bVar3 = false;
LAB_0139524e:
          bVar2 = false;
          local_38 = (int64_t *)0x0;
LAB_01395254:
          lVar7 = (**(code **)(*plVar6 + 0x3b0))();
          if (bVar1) {
            plVar6 = (int64_t *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar6 + 0x18))();
            bVar3 = true;
            local_38 = plVar6;
          }
          FUN_00d468f0();
          plVar6 = g_027bf448;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
              plVar6 = g_027bf448;
            }
          }
          else {
            local_78 = '\0';
          }
          g_027bf448 = plVar6;
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_40 = '\0';
          local_48 = plVar6;
          FUN_00ca0840();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_00ca5c10();
          FUN_00c91c80();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          bVar1 = true;
        }
        else {
          FUN_00ca94c0();
          local_38 = local_48;
          if (local_48 == (int64_t *)0x0) {
            local_38 = (int64_t *)0x0;
            bVar3 = false;
          }
          else if (local_40 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
            bVar3 = true;
          }
          plVar4 = g_027bf448;
          if (local_38 == (int64_t *)0x0) goto LAB_0139524e;
          if (g_027bf448 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_000175c0();
          plVar11 = local_48;
          FUN_00053ac0();
          pplVar8 = (int64_t **)&g_02802688;
          if (plVar11 != (int64_t *)0x0) {
            (**(code **)(*plVar11 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar8 = &local_48;
            if (cVar5 == '\0') {
              pplVar8 = (int64_t **)&g_02802688;
            }
          }
          plVar11 = *pplVar8;
          if (plVar11 == (int64_t *)0x0) {
            bVar2 = false;
            plVar11 = (int64_t *)0x0;
          }
          else {
            if (*(char *)(pplVar8 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(void*)(pplVar8 + 1) = 0;
            }
            bVar2 = true;
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar11 == (int64_t *)0x0) {
            bVar1 = false;
            goto LAB_01395254;
          }
          lVar7 = FUN_00d45790();
          bVar1 = false;
        }
        FUN_00d50b20();
        if (bVar2 && !bVar1) {
          FUN_00d50b20();
        }
        if ((bVar3) && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + lVar7;
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(local_a8 + 0xc));
    }
    FUN_00115910();
    FUN_00d50b20();
    return lVar10;
  }
  return -1;
}



// ============================================================
// 01395870
// ============================================================
// Function: FUN_01395870
// Address: 01395870
// Size: 1424 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_01395870(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t **pplVar6;
  uint32_t uVar7;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x48) == 0) {
    return;
  }
  (**(code **)(*g_028acd10 + 0x368))();
  uVar7 = FUN_01394a40();
  plVar1 = local_50;
  local_b0 = g_027bf478;
  if (g_027bf478 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_a8 = '\x01';
  pplVar6 = &local_40;
  (**(code **)(*plVar1 + 0x400))(uVar7,&local_b0);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != '\0') {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  plVar4 = *(int64_t **)(this_ptr + 0x38);
  local_40 = plVar4;
  local_38 = '\0';
  if ((g_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026e3238 = FUN_00115af0();
    g_026e3220 = "MUAudioFileSource";
    g_026e3228 = 0xa0;
    param_1 = 0x136df0;
    g_026e3230 = FUN_00136df0;
    g_026e3240 = 0;
    ram_00000000026e3248 = 0;
    g_026e3250 = 0;
    ram_00000000026e3258 = 0;
    g_026e3260 = 0;
    ram_00000000026e3268 = 0;
    g_026e3270 = 0;
    ram_00000000026e3278 = 0;
    g_026e3280 = 0;
    ram_00000000026e3288 = 0;
    g_026e3290 = 0;
    ram_00000000026e3298 = 0;
    g_026e32a0 = 0;
    ram_00000000026e32a8 = 0;
    g_026e32b0 = 0;
    ram_00000000026e32b8 = 0;
    g_026e32c0 = 0;
    ram_00000000026e32c8 = 0;
    g_026e32d0 = 0;
    ram_00000000026e32d8 = 0;
    g_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_0139598d;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_0139598d:
  plVar4 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    uVar7 = (**(code **)(*local_80 + 0x3c0))();
    local_90 = local_50;
    local_88 = 0;
    plVar4 = g_027bf468;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        uVar7 = FUN_00d50b00();
        plVar4 = g_027bf468;
      }
    }
    else {
      local_48 = '\0';
    }
    local_88 = '\x01';
    g_027bf468 = plVar4;
    if (plVar4 != (int64_t *)0x0) {
      local_88 = '\x01';
      uVar7 = FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = plVar4;
    FUN_00ca0840(uVar7,&local_40);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar7 = FUN_00c94880();
  local_70 = local_50;
  local_68 = 0;
  plVar4 = g_027bf440;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      uVar7 = FUN_00d50b00();
      plVar4 = g_027bf440;
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  g_027bf440 = plVar4;
  if (plVar4 != (int64_t *)0x0) {
    local_68 = '\x01';
    uVar7 = FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = plVar4;
  FUN_00ca0840(uVar7,&local_40);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x3f0))();
  (**(code **)(*local_80 + 0x3b0))();
  uVar7 = FUN_00d468f0();
  local_60 = local_50;
  local_58 = 0;
  plVar4 = g_027bf448;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      uVar7 = FUN_00d50b00();
      plVar4 = g_027bf448;
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  g_027bf448 = plVar4;
  if (plVar4 != (int64_t *)0x0) {
    local_58 = '\x01';
    uVar7 = FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = plVar4;
  FUN_00ca0840(uVar7,&local_40);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00ca5c10();
  local_a0 = plVar1;
  local_98 = '\0';
  FUN_00c91c80();
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*g_028acd10 + 0x378))();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01b247c0
// ============================================================
// Function: FUN_01b247c0
// Address: 01b247c0
// Size: 1589 bytes
// Class: MUAudioFileSource

void FUN_01b247c0(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  void*puVar7;
  void* pVar8;
  int64_t lVar9;
  int iVar10;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  uint32_t local_9c;
  uint64_t local_98;
  int64_t *local_90;
  void*local_88;
  uint64_t local_80;
  void*local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  void*local_48;
  uint64_t local_40;
  int local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x25795a8;
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01b24df0;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_01b24df0;
  local_88 = puVar3;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  lVar1 = local_58;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    local_80 = 0;
    local_60 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    local_60 = local_58;
    if (local_58 == 0) {
      local_80 = 0;
    }
    else if (local_50 == '\0') {
      uVar6 = FUN_00d50b00();
      local_80 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
      local_80 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (int64_t)&g_025ce610;
  plVar5[2] = 0;
  plVar5[3] = 0;
  (*g_025ce628)();
  local_68 = '\0';
  local_70 = 0;
  local_90 = plVar5;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &g_02572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  local_9c = 0xffffffff;
  local_78 = puVar3;
  FUN_01246780();
  local_98 = 0;
  while( true ) {
    pvVar4 = _pthread_getspecific((void*)puVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_00e7bdb0();
    puVar7 = (void*)FUN_00e7bdb0();
    cVar2 = FUN_01252960(puVar7,uVar6,&local_70,0);
    puVar3 = local_88;
    if (cVar2 == '\0') break;
    if (local_70 != 0) {
      local_e0 = local_70;
      local_d8 = '\0';
      (**(code **)(*local_90 + 0x388))(extraout_XMM0_Da,&local_e0);
      lVar1 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      local_98 = (uint64_t)((int)local_98 + 1);
      if (lVar1 != 0) {
        local_50 = '\0';
        local_58 = lVar1;
        FUN_00d235a0();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  if (local_78 != (void*)0x0) {
    local_50 = '\0';
    local_58 = 0;
    local_48 = local_78;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar10 = -local_40._4_4_;
        }
        else {
          iVar10 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar10 = 0;
        }
        local_40 = CONCAT44(iVar10,(int)local_40);
      }
      lVar1 = g_027d64a0;
      lVar9 = (int64_t)(int)local_40;
      iVar10 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar10);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar10) break;
      local_58 = *(int64_t *)(local_48[2] + 8 + lVar9 * 8);
      if (1 < iVar10 + local_38) break;
      if (iVar10 + local_38 == 1) {
        if (g_027d64a0 != 0) {
          FUN_00d50b00();
        }
        local_d0 = lVar1;
        local_c8 = '\x01';
        FUN_00d8dbf0();
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      local_c0 = local_58;
      local_b8 = '\0';
      FUN_00d8dbf0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00018280();
  }
  lVar1 = g_027e3db0;
  if (2 < (uint)local_98) {
    if (g_027e3db0 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    FUN_00d8dbf0();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_78 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b24df0:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01393860
// ============================================================
// Function: FUN_01393860
// Address: 01393860
// Size: 1296 bytes
// Class: MUAudioFileSource
// String references:
//   "%@-%@"
//   "%@%@%@_"

uint64_t FUN_01393860(void* param_1)

{
  bool bVar1;
  void*puVar2;
  void*puVar3;
  void*puVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  void*puVar9;
  void*puVar10;
  int64_t arg1;
  uint64_t this_ptr;
  int64_t local_e8;
  int64_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  puVar10 = g_027bf428;
  plVar8 = *(int64_t **)(arg1 + 0x38);
  if (plVar8 == (int64_t *)0x0) {
    if (g_027bf428 != (void*)0x0) {
      FUN_00d50b00();
    }
LAB_0139390f:
    local_78 = '\0';
  }
  else {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      plVar8 = *(int64_t **)(arg1 + 0x38);
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar8 + 0x3a8))();
    puVar10 = local_80;
    if (local_78 != '\0') goto LAB_0139390f;
    if (local_80 == (void*)0x0) {
      puVar10 = (void*)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d9bb60();
  puVar2 = local_80;
  if ((((local_78 == '\0') && (local_80 != (void*)0x0)) && (FUN_00d50b00(), local_78 != '\0')
      ) && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d93140();
  FUN_00d93100();
  FUN_00d93180();
  local_e8 = local_d8;
  local_e0 = local_c8;
  FUN_002bd7b0(&local_e0,&local_e8,3);
  FUN_00d8cb40();
  puVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (void*)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = (void*)&g_025df260;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_80 = (void*)&g_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &g_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    local_b0 = (int64_t)puVar3;
    local_a8 = '\0';
    FUN_00d8ede0();
    local_90 = (int64_t)local_40;
    local_88 = 0;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = '\x01';
    FUN_00d997b0(&local_90,&local_b0);
    puVar9 = local_80;
    puVar4 = puVar10;
    if (puVar10 == local_80) {
joined_r0x01393b58:
      puVar9 = puVar4;
      if ((local_78 != '\0') && (puVar10 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_78 == '\0') {
        if (local_80 != (void*)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        puVar4 = puVar9;
        puVar10 = local_80;
        goto joined_r0x01393b58;
      }
      FUN_00d50b20();
      local_78 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    puVar10 = puVar9;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  bVar1 = true;
  if (puVar10 == (void*)0x0) {
LAB_01393c66:
    puVar10 = (void*)0x0;
    if (g_027294c0 == (void*)0x0) goto LAB_01393c97;
LAB_01393c74:
    puVar9 = g_027294c0;
    FUN_00d50b00();
    if (puVar10 == puVar9) {
      FUN_00d50b20();
      puVar9 = puVar10;
      goto LAB_01393cb7;
    }
    if (bVar1) goto LAB_01393cb7;
  }
  else {
    iVar5 = FUN_00d8c7a0();
    if (0x20 < iVar5) {
      FUN_00d97ce0();
      if (local_80 == puVar10) {
LAB_01393c3d:
        if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        puVar10 = local_80;
        if (local_78 == '\0') {
          if (local_80 != (void*)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_01393c3d;
        }
        FUN_00d50b20();
      }
      if (puVar10 == (void*)0x0) goto LAB_01393c66;
    }
    iVar5 = FUN_00d8c7a0();
    puVar9 = puVar10;
    if (iVar5 != 0) goto LAB_01393cb7;
    bVar1 = false;
    if (g_027294c0 != (void*)0x0) goto LAB_01393c74;
LAB_01393c97:
    puVar9 = g_027294c0;
    if ((bool)(puVar10 == g_027294c0 | bVar1)) goto LAB_01393cb7;
  }
  FUN_00d50b20();
LAB_01393cb7:
  local_a0 = puVar2;
  local_40 = puVar9;
  FUN_00083ea0(2,&local_a0);
  FUN_00d8cb40();
  local_80 = (void*)&g_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &g_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 015f66f0
// ============================================================
// Function: FUN_015f66f0
// Address: 015f66f0
// Size: 1316 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_015f66f0(void)

{
  double dVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int64_t lVar9;
  void* pVar10;
  uint uVar11;
  int64_t *plVar12;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar13;
  uint8_t auVar14 [16];
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  plVar12 = (int64_t *)*arg1;
  if ((g_026fdd70 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026e3238 = FUN_00115af0();
    g_026e3220 = "MUAudioFileSource";
    g_026e3228 = 0xa0;
    g_026e3230 = FUN_00136df0;
    g_026e3240 = 0;
    ram_00000000026e3248 = 0;
    g_026e3250 = 0;
    ram_00000000026e3258 = 0;
    g_026e3260 = 0;
    ram_00000000026e3268 = 0;
    g_026e3270 = 0;
    ram_00000000026e3278 = 0;
    g_026e3280 = 0;
    ram_00000000026e3288 = 0;
    g_026e3290 = 0;
    ram_00000000026e3298 = 0;
    g_026e32a0 = 0;
    ram_00000000026e32a8 = 0;
    g_026e32b0 = 0;
    ram_00000000026e32b8 = 0;
    g_026e32c0 = 0;
    ram_00000000026e32c8 = 0;
    g_026e32d0 = 0;
    ram_00000000026e32d8 = 0;
    g_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar12 == (int64_t *)0x0) {
LAB_015f673f:
    plVar12 = &g_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar12 = arg1;
    if (cVar4 == '\0') goto LAB_015f673f;
  }
  local_31 = (char)plVar12[1];
  if ((local_31 == '\0') || (*plVar12 == 0)) {
    if (*plVar12 != 0) goto LAB_015f676b;
    local_40 = '\0';
    local_48 = 0;
    bVar2 = true;
LAB_015f6a9c:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto joined_r0x015f6aad;
  }
  FUN_00d50b00();
LAB_015f676b:
  pVar10 = (void*)plVar12;
  pvVar8 = _pthread_getspecific(pVar10);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123b100();
  lVar9 = local_48;
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_015f6a57;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) {
LAB_015f6a57:
    bVar2 = false;
    goto LAB_015f6a9c;
  }
  local_58 = lVar9;
  uVar13 = FUN_00b88640();
  local_78 = g_02765240;
  if (g_02765240 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_70 = '\x01';
  uVar13 = FUN_000175c0(uVar13,&local_78);
  local_50 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (uVar13 = FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar9 = g_027656f0;
  if (local_50 == 0) {
LAB_015f6ac6:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if (g_027656f0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    lVar3 = local_50;
    local_68 = lVar9;
    local_60 = '\x01';
    FUN_000175c0(uVar13,&local_68);
    lVar9 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 == 0) {
LAB_015f6abd:
      FUN_00d50b20();
      goto LAB_015f6ac6;
    }
    cVar4 = FUN_00bc0dc0();
    if ((cVar4 == '\0') || (iVar5 = FUN_00bc0db0(), iVar5 < 1)) {
LAB_015f6ab1:
      FUN_00d50b20();
      goto LAB_015f6abd;
    }
    plVar12 = (int64_t *)*arg1;
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      plVar12 = (int64_t *)*arg1;
      lVar9 = FUN_00e8b990();
      if (lVar9 != 0) {
        plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
    }
    dVar1 = (double)(**(code **)(*plVar12 + 0x398))();
    iVar5 = FUN_00bc0db0();
    iVar6 = FUN_00bc0d90();
    iVar7 = FUN_00bc0da0();
    dVar1 = g_023b4df8 / (dVar1 / (double)iVar5);
    uVar11 = iVar7 - 1;
    pVar10 = CONCAT31((int3)(uVar11 >> 8),uVar11 < 2);
    auVar14._0_4_ = -(uint)(iVar7 == g_02411230);
    auVar14._4_4_ = -(uint)(iVar7 == _UNK_02411234);
    auVar14._8_4_ = -(uint)(iVar7 == _UNK_02411238);
    auVar14._12_4_ = -(uint)(iVar7 == _UNK_0241123c);
    iVar5 = movmskps((int)lVar3,auVar14);
    if ((((dVar1 < g_023908b8) || (g_024111b8 < dVar1)) || (iVar6 < 1)) ||
       ((iVar7 * 8 < iVar6 || (iVar5 == 0 && (iVar7 != 4 && uVar11 >= 2))))) goto LAB_015f6ab1;
    FUN_016c0b50(pVar10,iVar7);
    lVar9 = local_48;
    if (((local_40 == '\0') && (local_48 != 0)) &&
       ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    *this_ptr = lVar9;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  bVar2 = false;
joined_r0x015f6aad:
  if ((local_31 != '\0') && (!bVar2)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00762a70
// ============================================================
// Function: FUN_00762a70
// Address: 00762a70
// Size: 1289 bytes
// Class: MUAudioFileSource

uint32_t FUN_00762a70(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  char cVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_100;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  int64_t local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  plVar4 = local_78;
  FUN_017a52b0();
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  cVar6 = (**(code **)(*plVar4 + 0x50))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    return 0;
  }
  (**(code **)(*this_ptr + 0x628))();
  plVar4 = local_78;
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) {
    return 0;
  }
  (**(code **)(*this_ptr + 0x610))();
  FUN_00d23310();
  plVar4 = local_78;
  plVar9 = &local_98;
  if (local_70[0] != '\0') {
    plVar9 = (int64_t *)local_70;
  }
  local_98 = CONCAT71(local_98._1_7_,local_70[0]);
  *(char *)plVar9 = '\0';
  if ((local_70[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 == '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  bVar2 = true;
  local_a0 = plVar4;
  if (plVar4 != (int64_t *)0x0) {
    FUN_01e561b0();
    local_48 = local_78;
    if (local_78 != (int64_t *)0x0) {
      if (((local_70[0] == '\0') && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = this_ptr[0xd];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_02729550;
      if (g_02729550 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar3;
      local_98 = lVar1;
      FUN_00083ea0(2,&local_100);
      FUN_000b4da0();
      lVar5 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = (int64_t *)&g_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &g_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_026f6f70;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_02729558;
      if (g_02729558 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar3;
      local_d8 = '\x01';
      local_d0 = lVar5;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      plVar4 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_c0 = plVar4;
      local_b8 = '\0';
      local_b0 = local_48;
      local_a8 = '\0';
      uVar8 = FUN_00172950();
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if (plVar4 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b20();
      }
      local_80 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      bVar2 = false;
      goto LAB_00762e85;
    }
  }
  local_48 = (int64_t *)0x0;
  local_80 = 0;
LAB_00762e85:
  FUN_00763390();
  uVar7 = FUN_00760600();
  lVar1 = this_ptr[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00324fe0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00172bc0();
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
    return uVar7;
  }
  return uVar7;
}



// ============================================================
// 004ef800
// ============================================================
// Function: FUN_004ef800
// Address: 004ef800
// Size: 1839 bytes
// Class: MUAudioFileSource

double FUN_004ef800(int64_t *param_1,int64_t *param_2,char param_3)

{
  void *pvVar1;
  void* pVar2;
  int64_t this_ptr;
  double dVar3;
  double dVar4;
  double local_70;
  int64_t local_68;
  char local_60;
  double local_48;
  int64_t local_40;
  char local_38;
  
  pVar2 = 0x4f0190;
  switch(*(void*)(this_ptr + 0xc)) {
  case 0:
    pvVar1 = _pthread_getspecific(0x4f0190);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = (double)FUN_004f01b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (param_3 == '\0') {
      return local_48;
    }
    if (*param_1 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = (double)FUN_016c9870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c9950();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 1:
    dVar3 = *(double *)(this_ptr + 0x10);
    dVar4 = *(double *)(this_ptr + 0x18) - dVar3;
    goto LAB_004ef8fa;
  case 2:
    FUN_000ba510();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    dVar3 = (double)FUN_004f01b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_38 == '\0') {
      return dVar3;
    }
    if (local_40 == 0) {
      return dVar3;
    }
    FUN_00d50b20();
    return dVar3;
  case 3:
    pvVar1 = _pthread_getspecific(0x4f0190);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_004f01b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (*param_2 != 0) {
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ebfe0();
    }
    local_48 = (double)FUN_00e7b500();
    if (param_3 == '\0') {
      return local_48;
    }
    if (*param_1 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = (double)FUN_016c9870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c9950();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    dVar3 = (double)FUN_004f01b0();
    return dVar3;
  default:
    dVar3 = 0.0;
    dVar4 = g_023b19a0;
LAB_004ef8fa:
    dVar3 = (double)FUN_00e7b500(dVar3,dVar4);
    return dVar3;
  }
  if (local_70 < local_48) {
    local_48 = local_70;
  }
  return local_48;
}



// ============================================================
// 002c8fb0
// ============================================================
// Function: FUN_002c8fb0
// Address: 002c8fb0
// Size: 1114 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_002c8fb0(void)

{
  int64_t *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  void *pvVar7;
  void*puVar8;
  char *pcVar9;
  int64_t **pplVar10;
  int64_t *arg1;
  void*puVar11;
  int64_t lVar12;
  uint32_t uVar13;
  uint64_t local_a8;
  uint8_t local_a0;
  void*local_98;
  int local_60;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  lVar12 = *arg1;
  puVar11 = &g_02572358;
  if (lVar12 != 0) {
    local_98 = &g_02572358;
    local_60 = -1;
    while( true ) {
      lVar6 = (int64_t)local_60;
      local_60 = local_60 + 1;
      if (*(int *)(lVar12 + 0xc) <= local_60) break;
      plVar1 = *(int64_t **)(*(int64_t *)(lVar12 + 0x10) + 8 + lVar6 * 8);
      local_48 = plVar1;
      FUN_0006e1c0();
      pplVar10 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar10 = &local_48;
        if (cVar3 == '\0') {
          pplVar10 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar10 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific((void*)pplVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        plVar1 = local_48;
        if ((g_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          ___cxa_guard_release();
        }
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar10 = &local_48;
          if (cVar3 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = *pplVar10;
        local_38[0] = *(char *)(pplVar10 + 1);
        pplVar10 = pplVar10 + 1;
        if (local_38[0] == '\0') {
          pplVar10 = (int64_t **)local_38;
        }
        *(void*)pplVar10 = 0;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          local_40[0] = '\0';
          local_48 = plVar1;
          FUN_00d235a0();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_002d7220();
    puVar11 = local_98;
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = puVar11;
  uVar13 = (*pcVar2)();
  if (puVar5 != (void*)0x0) {
    if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
      lVar12 = 0;
      do {
        local_a8 = *(void*)(puVar5[2] + lVar12 * 8);
        local_a0 = 0;
        uVar13 = FUN_002c95a0(uVar13,&local_a8);
        plVar1 = local_48;
        local_38[0] = local_40[0];
        pcVar9 = local_40;
        if (local_40[0] == '\0') {
          pcVar9 = local_38;
        }
        *pcVar9 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          local_40[0] = '\0';
          local_48 = plVar1;
          uVar13 = FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            uVar13 = FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < *(int *)((int64_t)puVar5 + 0xc));
    }
    FUN_002d7290();
  }
  if (*(int *)((int64_t)puVar8 + 0xc) != 0) {
    FUN_01d2c5c0();
  }
  FUN_00d50b20();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00536930
// ============================================================
// Function: FUN_00536930
// Address: 00536930
// Size: 1227 bytes
// Class: MUAudioFileSource

uint64_t FUN_00536930(void* param_1)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t **pplVar8;
  int64_t lVar9;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar10;
  void* pVar12;
  float fVar13;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  undefined7 uVar11;
  
  if (*(int64_t *)(this_ptr + 0x308) != 0) {
    uVar10 = 0;
    goto LAB_00536e0f;
  }
  uVar11 = (undefined7)((uint64_t)unaff_R12 >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if (*(char *)(this_ptr + 0x24b) != '\0') goto LAB_00536e0f;
  FUN_00757c60();
  if (local_90 == '\0') {
    if (local_98 == 0) goto LAB_00536e0f;
    FUN_00d50b00();
  }
  else if (local_98 == 0) goto LAB_00536e0f;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  local_38 = local_98;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
      goto LAB_00536a66;
    }
LAB_00536e00:
    uVar10 = CONCAT71(uVar11,1);
  }
  else {
    if (local_98 == 0) goto LAB_00536e00;
LAB_00536a66:
    if (0 < *(int *)(local_38 + 0xc)) {
      pVar12 = 0;
      do {
        lVar3 = local_70;
        pvVar5 = _pthread_getspecific(pVar12);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124e100();
        lVar9 = local_38;
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
            goto LAB_00536b50;
          }
        }
        else if (local_70 != 0) {
LAB_00536b50:
          local_68 = '\0';
          local_70 = 0;
          local_58 = -1;
          do {
            do {
              lVar6 = (int64_t)local_58;
              local_58 = local_58 + 1;
              uVar1 = *(uint *)(lVar3 + 0xc);
              uVar10 = (uint64_t)uVar1;
              if ((int)uVar1 <= local_58) goto LAB_00536db0;
              local_70 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar6 * 8);
              cVar4 = FUN_00e34240();
            } while ((cVar4 != '\0') || (fVar13 = (float)FUN_00e340b0(), g_02390124 <= fVar13));
            FUN_00e33de0();
            lVar6 = g_0270b920;
            if (g_0270b920 != 0) {
              FUN_00d50b00();
            }
            FUN_000175c0();
            plVar2 = local_48;
            FUN_0006e1c0();
            pplVar8 = (int64_t **)&g_02802688;
            if (plVar2 != (int64_t *)0x0) {
              (**(code **)(*plVar2 + 0x360))();
              cVar4 = FUN_00e85ea0();
              pplVar8 = &local_48;
              if (cVar4 == '\0') {
                pplVar8 = (int64_t **)&g_02802688;
              }
            }
            lVar9 = local_38;
            plVar2 = *pplVar8;
            if (*(char *)(pplVar8 + 1) == '\0') {
              if (plVar2 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar8 + 1) = 0;
              lVar9 = local_38;
            }
            pVar7 = (void*)pplVar8;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 == (int64_t *)0x0) break;
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            FUN_0051b4f0();
            plVar2 = local_48;
            if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            lVar9 = local_38;
          } while (plVar2 != local_a8);
LAB_00536db0:
          FUN_00540b60();
          FUN_00d50b20();
          if (local_58 < (int)uVar1) {
            FUN_00115e00();
            uVar10 = 0;
            goto LAB_00536df5;
          }
        }
        pVar12 = pVar12 + 1;
      } while ((int)pVar12 < *(int *)(lVar9 + 0xc));
    }
    FUN_00115e00();
    uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
LAB_00536df5:
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00536e0f:
  return uVar10 & 0xffffffff;
}



// ============================================================
// 002cae80
// ============================================================
// Function: FUN_002cae80
// Address: 002cae80
// Size: 1341 bytes
// Class: MUAudioFileSource
// String references:
//   "_elements"
//   "_subtracks"

void FUN_002cae80(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x498))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_000be210();
  lVar3 = FUN_00e86210();
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fce90;
  if (g_026fce90 != 0) {
    FUN_00d50b00();
  }
  FUN_00c841b0();
  local_78 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)(this_ptr + 0xd0);
  local_a0 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0xd0) + 0x10))();
  FUN_00d50b00();
  local_a0 = '\x01';
  local_a8 = plVar1;
  (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x628))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  lVar2 = local_78;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  local_d8 = lVar2;
  local_d0 = '\0';
  FUN_00cbad30(&local_d8,&local_50,0xa0);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    (**(code **)(*local_a8 + 0x10))();
    FUN_00d50b20();
  }
  local_90 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_90 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  local_98 = plVar1;
  FUN_000823a0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_002cb208;
LAB_002cb1fa:
    local_68 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_002cb1fa;
LAB_002cb208:
    lVar5 = 0;
  }
  local_68 = '\x01';
  local_70 = lVar5;
  FUN_00cbad30(&local_70,&local_c8,0xa0);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    (**(code **)(*local_98 + 0x10))();
    FUN_00d50b20();
  }
  local_80 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_80 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_88 = plVar1;
  FUN_000823a0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if (lVar5 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x28);
      goto joined_r0x002cb307;
    }
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
joined_r0x002cb307:
    if (lVar5 != 0) {
      local_58 = 0;
      FUN_00d50b00();
      goto LAB_002cb319;
    }
  }
  lVar5 = 0;
LAB_002cb319:
  local_58 = '\x01';
  local_60 = lVar5;
  FUN_00cbad30(&local_60,&local_b8,0xa0);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    (**(code **)(*local_88 + 0x10))();
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 002416c0
// ============================================================
// Function: FUN_002416c0
// Address: 002416c0
// Size: 999 bytes
// Class: MUAudioFileSource

uint64_t FUN_002416c0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  void *pvVar7;
  void* pVar8;
  undefined7 uVar9;
  int64_t this_ptr;
  double dVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qa;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_026f6de0;
  if (g_026f6de0 != 0) {
    FUN_00d50b00();
  }
  dVar10 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar10 * g_023907c0);
  dVar10 = dVar10 * g_023907c0 - g_023907c8;
  pVar8 = 0xaaaaaaab;
  uVar11 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar11 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar10 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar11,&local_50);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_38 = '\0';
    local_40 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar11 = FUN_00d50b20();
  uVar9 = (undefined7)((uint64_t)lVar2 >> 8);
  if (lVar1 != 0) {
    uVar11 = FUN_00d50b20();
  }
  if ((lVar2 != 0 & bVar3) != 0) {
    uVar6 = CONCAT71(uVar9,1);
    if (*(int *)(this_ptr + 0x198) == 2) goto LAB_002418bc;
    if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
      local_38 = '\0';
      local_40 = 0;
LAB_00241875:
      uVar6 = CONCAT71(uVar9,1);
    }
    else {
      uVar11 = FUN_006f3f00();
      if (local_40 == 0) goto LAB_00241875;
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
        local_48 = '\0';
        local_50 = 0;
      }
      else {
        FUN_006f3f00();
      }
      uVar4 = FUN_0078cda0();
      uVar6 = (uint64_t)uVar4;
      uVar11 = extraout_XMM0_Qa;
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar11 = FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((char)uVar6 == '\0') {
      FUN_00239240(uVar11,0);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0024190d;
        }
      }
      else if (local_40 != 0) {
LAB_0024190d:
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_01326de0();
        lVar1 = g_026f6f08;
        uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
        if (iVar5 == 3) {
          if (g_026f6f08 != 0) {
            FUN_00d50b00();
          }
          dVar10 = (double)FUN_00e7d6f0();
          uVar6 = (uint64_t)(dVar10 * g_023907c0);
          dVar10 = dVar10 * g_023907c0 - g_023907c8;
          uVar11 = FUN_0071a120();
          if ((((local_38 == '\0') && (local_40 != 0)) &&
              (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            uVar11 = FUN_00d50b20();
          }
          bVar3 = (byte)(((int64_t)dVar10 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
          local_50 = lVar1;
          local_48 = '\0';
          FUN_000175c0(uVar11,&local_50);
          lVar2 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            local_38 = '\0';
            local_40 = lVar2;
            bVar3 = FUN_00c70bc0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
          uVar6 = CONCAT71((int7)((uint64_t)lVar2 >> 8),lVar2 != 0 & bVar3);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        goto LAB_002418bc;
      }
    }
  }
  uVar6 = 0;
LAB_002418bc:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 001221b0
// ============================================================
// Function: FUN_001221b0
// Address: 001221b0
// Size: 955 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_001221b0(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int iVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int iVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  int local_50;
  uint uStack_4c;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00757c60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_012cb480();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    local_60 = 0;
    local_68 = (int64_t *)0x0;
    local_58 = (int64_t)plVar7;
    local_50 = -1;
    uStack_4c = 0;
    local_48 = 0;
    uVar8 = 0;
    do {
      iVar6 = (int)uVar8;
      if (iVar6 != 0) {
        if (iVar6 < 1) {
          uVar8 = (uint64_t)(uint)-iVar6;
        }
        else {
          local_50 = local_50 - iVar6;
          uVar10 = FUN_00d23690(uVar10,uVar8);
          local_48 = local_48 + iVar6;
          uVar8 = 0;
        }
        uStack_4c = (uint)uVar8;
      }
      lVar4 = (int64_t)local_50;
      iVar9 = local_50 + 1;
      iVar6 = *(int *)(local_58 + 0xc);
      local_50 = iVar9;
      if (iVar6 <= iVar9) goto LAB_00122548;
      plVar7 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar4 * 8);
      local_40 = plVar7;
      local_68 = plVar7;
      if ((g_026fdd70 == '\0') &&
         (iVar2 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar2 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        uVar10 = ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar5 = &local_40;
        uVar10 = extraout_XMM0_Da;
        if (cVar1 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = local_68;
      if (*pplVar5 != (int64_t *)0x0) {
        pvVar3 = _pthread_getspecific((void*)pplVar5);
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar7 + 0x478))();
        cVar1 = (**(code **)(*local_40 + 0x50))();
        uVar10 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        lVar4 = g_027259a0;
        if (cVar1 != '\0') goto LAB_001224b6;
      }
      uVar8 = (uint64_t)uStack_4c;
    } while( true );
  }
  uVar8 = 1;
LAB_00122563:
  return uVar8 & 0xffffffff;
LAB_001224b6:
  if (g_027259a0 != 0) {
    uVar10 = FUN_00d50b00();
  }
  uVar8 = g_026e18b0;
  if (g_026e18b0 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_78 = uVar8;
  local_70 = '\x01';
  FUN_01f6ca30(uVar10,&local_78);
  (**(code **)(*local_40 + 0x5e0))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00122548:
  FUN_00136d50();
  uVar8 = CONCAT71((int7)(uVar8 >> 8),iVar6 <= iVar9);
  FUN_00d50b20();
  goto LAB_00122563;
}



// ============================================================
// 012e0640
// ============================================================
// Function: FUN_012e0640
// Address: 012e0640
// Size: 1232 bytes
// Class: MUAudioFileSource

void FUN_012e0640(void*param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  int iVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t *plVar7;
  bool bVar8;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*arg1 != 0) {
    if ((g_028aca30 == (void*)0x0) || (puVar3 = g_028aca30, g_028aca39 == '\0')) {
      FUN_00e8cb50();
      if (g_028aca30 == (void*)0x0) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        param_1 = &g_02572358;
        *puVar3 = &g_02572358;
        (*g_02572370)();
        bVar8 = g_028aca30 == (void*)0x0;
        g_028aca30 = puVar3;
        if (((bVar8) || (FUN_00d50b20(), g_028aca30 != (void*)0x0)) &&
           (g_028aca38 == '\0')) {
          g_028aca38 = '\x01';
          FUN_00e8cb90();
        }
        FUN_00d4efa0();
        lVar6 = g_027e1e80;
        if (g_027e1e80 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d4efa0();
        lVar6 = g_027bf048;
        if (g_027bf048 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d4efa0();
        lVar6 = g_027bf050;
        if (g_027bf050 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        g_028aca39 = '\x01';
        FUN_00e8cb70();
        puVar3 = g_028aca30;
      }
      else {
        g_028aca39 = '\x01';
        FUN_00e8cb70();
        puVar3 = g_028aca30;
      }
    }
    g_028aca30 = puVar3;
    if (puVar3 != (void*)0x0) {
      if (0 < *(int *)((int64_t)puVar3 + 0xc)) {
        lVar6 = 0;
        do {
          uVar1 = *(void*)(puVar3[2] + lVar6 * 8);
          FUN_00c77cd0();
          FUN_00c7b220();
          iVar2 = FUN_00e82730();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          plVar7 = (int64_t *)*arg1;
          pvVar4 = _pthread_getspecific((void*)param_1);
          if (pvVar4 != (void *)0x0) {
            plVar7 = (int64_t *)*arg1;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x218))();
          (**(code **)(*this_ptr + 0x218))();
          iVar2 = _memcmp(param_1,(void *)(int64_t)iVar2,param_3);
          if (iVar2 != 0) {
            param_1 = (void*)((int64_t)&MACH_HEADER.magic + 1);
            (**(code **)(*this_ptr + 0x208))(1,uVar1);
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)((int64_t)puVar3 + 0xc));
      }
      FUN_00cc1480();
    }
  }
  return;
}



// ============================================================
// 012ca6e0
// ============================================================
// Function: FUN_012ca6e0
// Address: 012ca6e0
// Size: 1260 bytes
// Class: MUAudioFileSource
// String references:
//   "%I"

void* FUN_012ca6e0(int64_t *param_1,uint32_t param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  void* pVar5;
  uint64_t uVar6;
  void**ppuVar7;
  uint unaff_ESI;
  void*this_ptr;
  uint uVar8;
  bool bVar9;
  void*local_a0;
  uint32_t local_98;
  uint local_94;
  int64_t local_90;
  char local_88;
  uint32_t local_7c;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48 [8];
  int64_t local_40;
  int64_t *local_38;
  
  local_7c = param_2;
  FUN_01240d70();
  if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
     (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_40 = local_50;
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_0118a5c0();
  (**(code **)(*plVar1 + 0x18))();
  local_38 = plVar1;
  pvVar2 = _pthread_getspecific((void*)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar4 = local_38[0xd];
    plVar1 = local_38;
    if (lVar4 == local_40) goto LAB_012ca7cb;
  }
  else {
    lVar4 = ((int64_t *)local_38[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4])[0xd];
    param_1 = local_38;
    plVar1 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    if (lVar4 == local_40) goto LAB_012ca7cb;
  }
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1[0xd] = local_40;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_012ca7cb:
  pvVar2 = _pthread_getspecific((void*)param_1);
  lVar3 = g_027bed58;
  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar3 = g_027bed58, lVar4 != 0)) {
    param_1 = local_38;
  }
  g_027bed58 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_012c9770();
  if ((local_48[0] == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_012ca540();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = local_38;
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012407c0();
  FUN_00d23310();
  uVar6 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_48[0]);
  ppuVar7 = &local_a0;
  if (local_48[0] != '\0') {
    ppuVar7 = (void**)local_48;
  }
  local_a0 = (void*)CONCAT71(local_a0._1_7_,local_48[0]);
  *(char *)ppuVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_a0 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_012e89e0();
  plVar1 = local_38;
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (0 < (int)unaff_ESI) {
    uVar8 = 1;
    do {
      pVar5 = (void*)uVar6;
      local_98 = 1;
      local_a0 = &g_024cc6f0;
      local_94 = uVar8;
      FUN_00d8cb40();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_012c9770();
      if ((local_48[0] == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar5);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        pVar5 = (void*)local_38;
      }
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = local_50;
      local_88 = '\0';
      FUN_012e6520();
      plVar1 = local_38;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar6 = (uint64_t)(uVar8 + 1);
      bVar9 = uVar8 != unaff_ESI;
      uVar8 = uVar8 + 1;
    } while (bVar9);
  }
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00490b50
// ============================================================
// Function: FUN_00490b50
// Address: 00490b50
// Size: 949 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"
//   ".%@"

void FUN_00490b50(void* param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar11;
  uint32_t uVar12;
  int64_t local_80;
  char local_78;
  int64_t *local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t *local_40;
  int64_t *local_38;
  
  local_48 = *(int64_t *)(arg1 + 0x118);
  if (local_48 == 0) {
    bVar4 = false;
LAB_00490dc4:
    lVar5 = g_02708750;
    local_38 = (int64_t *)0x0;
    local_40 = (int64_t *)0x0;
    bVar1 = false;
    bVar2 = true;
    bVar3 = true;
    *(void*)(this_ptr + 1) = 0;
joined_r0x00490dd6:
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar5;
    *(void*)(this_ptr + 1) = 1;
    if (!bVar1) goto LAB_00490e26;
  }
  else {
    FUN_00d50b00();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar11 = &local_68;
    FUN_01320d00();
    plVar10 = local_68;
    if ((g_026fdd70 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_026e3238 = FUN_00115af0();
      g_026e3220 = "MUAudioFileSource";
      g_026e3228 = 0xa0;
      g_026e3230 = FUN_00136df0;
      g_026e3240 = 0;
      ram_00000000026e3248 = 0;
      g_026e3250 = 0;
      ram_00000000026e3258 = 0;
      g_026e3260 = 0;
      ram_00000000026e3268 = 0;
      g_026e3270 = 0;
      ram_00000000026e3278 = 0;
      g_026e3280 = 0;
      ram_00000000026e3288 = 0;
      g_026e3290 = 0;
      ram_00000000026e3298 = 0;
      g_026e32a0 = 0;
      ram_00000000026e32a8 = 0;
      g_026e32b0 = 0;
      ram_00000000026e32b8 = 0;
      g_026e32c0 = 0;
      ram_00000000026e32c8 = 0;
      g_026e32d0 = 0;
      ram_00000000026e32d8 = 0;
      g_026e32e0 = 0;
      ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00490bf9:
      pplVar11 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_00490bf9;
    }
    plVar10 = *pplVar11;
    local_38 = plVar10;
    if (plVar10 == (int64_t *)0x0) {
      local_38 = (int64_t *)0x0;
      bVar4 = false;
    }
    else {
      if (*(char *)(pplVar11 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
      }
      bVar4 = true;
    }
    pVar9 = (void*)plVar10;
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == (int64_t *)0x0) goto LAB_00490dc4;
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    local_40 = local_68;
    if (local_68 == (int64_t *)0x0) {
      bVar2 = true;
      bVar1 = false;
      local_40 = (int64_t *)0x0;
LAB_00490dee:
      lVar5 = g_02708750;
      bVar3 = false;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x00490dd6;
    }
    if ((char)local_60 == '\0') {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_40 + 0x380))();
    plVar10 = local_68;
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      bVar2 = false;
      bVar1 = true;
      goto LAB_00490dee;
    }
    uVar12 = (**(code **)(*local_40 + 0x380))();
    local_60 = 1;
    local_68 = &g_024c5048;
    local_50 = 0;
    if (local_80 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_58 = local_80;
    local_50 = '\x01';
    FUN_00d8cb40(uVar12,&local_68);
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar3 = false;
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_00490e26:
  if (bVar4 && !bVar3) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012c9e50
// ============================================================
// Function: FUN_012c9e50
// Address: 012c9e50
// Size: 1259 bytes
// Class: MUAudioFileSource
// String references:
//   "%I"

void* FUN_012c9e50(int64_t *param_1,uint32_t param_2)

{
  uint8_t uVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  void**ppuVar7;
  int unaff_ESI;
  void*this_ptr;
  int iVar8;
  bool bVar9;
  void*local_a8;
  uint32_t local_a0;
  int local_9c;
  int64_t local_98;
  char local_90;
  uint32_t local_84;
  int64_t local_80;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  int64_t *local_38;
  
  plVar6 = param_1;
  local_84 = param_2;
  FUN_01241e00();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_80 = local_48;
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_0118a5c0();
  (**(code **)(*plVar2 + 0x18))();
  local_38 = plVar2;
  pvVar3 = _pthread_getspecific((void*)plVar6);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = local_38[0xd];
    plVar2 = local_38;
  }
  else {
    plVar2 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    lVar4 = plVar2[0xd];
    plVar6 = local_38;
  }
  pVar5 = (void*)plVar6;
  if (lVar4 != local_48) {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    plVar2[0xd] = local_48;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar5);
  lVar4 = g_027bed58;
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
    lVar4 = g_027bed58;
  }
  g_027bed58 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  plVar6 = (int64_t *)((uint64_t)param_1 & 0xffffffff);
  FUN_012c9ae0(plVar6,0);
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_012ca540();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)plVar6);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = local_38;
  }
  pVar5 = (void*)plVar6;
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012407c0();
  FUN_00d23310();
  ppuVar7 = &local_a8;
  if (local_40[0] != '\0') {
    ppuVar7 = (void**)local_40;
  }
  local_a8 = (void*)CONCAT71(local_a8._1_7_,local_40[0]);
  *(char *)ppuVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_012e89e0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (0 < unaff_ESI) {
    uVar1 = (uint8_t)local_84;
    iVar8 = 1;
    do {
      local_a0 = 1;
      local_a8 = &g_024cc6f0;
      local_9c = iVar8;
      FUN_00d8cb40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      pVar5 = (void*)param_1;
      FUN_012c9ae0((void*)param_1,uVar1);
      if ((local_40[0] == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        pVar5 = (void*)local_38;
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = local_48;
      local_90 = '\0';
      FUN_012e6520();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      bVar9 = iVar8 != unaff_ESI;
      iVar8 = iVar8 + 1;
    } while (bVar9);
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0124e860
// ============================================================
// Function: FUN_0124e860
// Address: 0124e860
// Size: 927 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_0124e860(int64_t param_1,int64_t *param_2)

{
  char cVar1;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *this_ptr;
  int iVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  
  plVar9 = (int64_t *)*param_2;
  if ((g_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026e3238 = FUN_00115af0();
    g_026e3220 = "MUAudioFileSource";
    g_026e3228 = 0xa0;
    g_026e3230 = FUN_00136df0;
    g_026e3240 = 0;
    ram_00000000026e3248 = 0;
    g_026e3250 = 0;
    ram_00000000026e3258 = 0;
    g_026e3260 = 0;
    ram_00000000026e3268 = 0;
    g_026e3270 = 0;
    ram_00000000026e3278 = 0;
    g_026e3280 = 0;
    ram_00000000026e3288 = 0;
    g_026e3290 = 0;
    ram_00000000026e3298 = 0;
    g_026e32a0 = 0;
    ram_00000000026e32a8 = 0;
    g_026e32b0 = 0;
    ram_00000000026e32b8 = 0;
    g_026e32c0 = 0;
    ram_00000000026e32c8 = 0;
    g_026e32d0 = 0;
    ram_00000000026e32d8 = 0;
    g_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
    plVar9 = &g_02802688;
    lVar5 = g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar9 = param_2;
    if (cVar1 == '\0') {
      plVar9 = &g_02802688;
    }
    lVar5 = *plVar9;
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific((void*)plVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar5 = FUN_0123c2d0();
  }
  iVar11 = 0;
  uVar2 = (**(code **)(*this_ptr + 0x380))();
  iVar3 = 0x1000;
  uVar6 = FUN_00aea410(extraout_XMM0_Da,uVar2);
  while( true ) {
    plVar10 = (int64_t *)*param_2;
    pvVar4 = _pthread_getspecific((void*)plVar9);
    if (pvVar4 != (void *)0x0) {
      plVar10 = (int64_t *)*param_2;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    lVar7 = (**(code **)(*plVar10 + 0x378))();
    if (lVar7 <= iVar11) break;
    plVar10 = (int64_t *)*param_2;
    pvVar4 = _pthread_getspecific((void*)plVar9);
    if (pvVar4 != (void *)0x0) {
      plVar10 = (int64_t *)*param_2;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    lVar7 = (**(code **)(*plVar10 + 0x378))();
    uVar2 = extraout_XMM0_Da_00;
    if (lVar7 < iVar3 + iVar11) {
      plVar10 = (int64_t *)*param_2;
      pvVar4 = _pthread_getspecific((void*)plVar9);
      if (pvVar4 != (void *)0x0) {
        plVar10 = (int64_t *)*param_2;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
      }
      iVar3 = (**(code **)(*plVar10 + 0x378))();
      iVar3 = iVar3 - iVar11;
      uVar2 = extraout_XMM0_Da_01;
    }
    lVar7 = iVar11 + lVar5;
    cVar1 = (**(code **)(*this_ptr + 0x3b0))(uVar2,(int64_t)iVar3);
    if (cVar1 != '\0') {
      plVar10 = (int64_t *)*param_2;
      pvVar4 = _pthread_getspecific((void*)plVar9);
      if (pvVar4 != (void *)0x0) {
        plVar10 = (int64_t *)*param_2;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      uVar2 = (**(code **)(*this_ptr + 0x3a0))();
      (**(code **)(*plVar10 + 0x388))(0,(int)g_0238fee8,uVar2,lVar7);
      uVar2 = (**(code **)(*this_ptr + 0x3a0))();
      plVar9 = (int64_t *)0x0;
      (**(code **)(*this_ptr + 0x440))(0,uVar6,uVar2,param_1 + lVar7);
    }
    iVar11 = iVar11 + iVar3;
  }
  uVar2 = (**(code **)(*this_ptr + 0x380))();
  FUN_00aea540(uVar2,iVar3);
  return;
}



// ============================================================
// 00537dc0
// ============================================================
// Function: FUN_00537dc0
// Address: 00537dc0
// Size: 1418 bytes
// Class: MUAudioFileSource

void FUN_00537dc0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar8;
  double dVar9;
  uint64_t uVar10;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int64_t *local_40;
  char local_38;
  
  lVar3 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar9 * g_023907c0);
  dVar9 = dVar9 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar9 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_60 = lVar3;
  local_58 = '\0';
  FUN_000175c0(uVar10,&local_60);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    local_38 = '\0';
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((local_40 != (int64_t *)0x0 & bVar5) == 0) {
    cVar6 = *(char *)((int64_t)this_ptr + 0x35a);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') goto LAB_00537f8b;
    uVar10 = FUN_0051be00();
    if (local_40 == (int64_t *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
LAB_00537f8b:
    local_50 = 0;
    local_40 = (int64_t *)0x0;
  }
  plVar1 = (int64_t *)*arg1;
  FUN_00d21140();
  lVar3 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar9 * g_023907c0);
  dVar9 = dVar9 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if (plVar1 != (int64_t *)0x0) {
    uVar10 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar9 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_60 = lVar3;
  local_58 = '\0';
  FUN_000175c0(uVar10,&local_60);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((plVar1 != (int64_t *)0x0 & bVar5) != 0) {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00538328;
  }
  cVar6 = *(char *)((int64_t)this_ptr + 0x35a);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') goto LAB_00538328;
  FUN_0051be00();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if (local_40 != plVar1) {
    FUN_000ba510();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar2 = (int64_t *)this_ptr[0x66];
    plVar8 = plVar1;
    if (plVar1 == plVar2) {
      if (plVar1 == (int64_t *)0x0) goto LAB_00538231;
LAB_00538278:
      FUN_00d50b20();
      bVar4 = true;
      plVar8 = (int64_t *)0x0;
    }
    else {
      bVar4 = false;
      if ((plVar1 != (int64_t *)0x0) && (bVar4 = false, plVar2 != (int64_t *)0x0)) {
        FUN_00d50b00();
        cVar6 = (**(code **)(*plVar1 + 0x50))();
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') goto LAB_00538278;
LAB_00538231:
        bVar4 = false;
      }
    }
    lVar3 = this_ptr[0x65];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x618))(this_ptr[0x69],this_ptr[0x6a]);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (!bVar4 && plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00538328:
  if (((char)local_50 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00126ca0
// ============================================================
// Function: FUN_00126ca0
// Address: 00126ca0
// Size: 1200 bytes
// Class: MUAudioFileSource

void FUN_00126ca0(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  void* pVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  double dVar5;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  double local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*this_ptr != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar1 = local_38;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00b5dfe0();
      local_78 = local_48;
      local_70 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_70 = '\x01';
      FUN_001220c0();
      local_88 = local_58;
      local_80 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_80 = '\x01';
      FUN_00b5dfe0();
      local_68 = local_a8;
      local_60 = 0;
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_60 = '\x01';
      local_b0 = '\0';
      local_b8 = 0;
      plVar4 = &local_68;
      FUN_01f53880(plVar4,&local_88,&local_b8);
      lVar1 = local_38;
      pVar3 = (void*)plVar4;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_98 = FUN_016c9870();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = (double)FUN_016c9950();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_016c9870();
        dVar5 = local_90 - dVar5;
        local_98 = FUN_00e7b500(local_98);
        local_90 = dVar5;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        FUN_00125420(local_98,local_90);
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 004a5d20
// ============================================================
// Function: FUN_004a5d20
// Address: 004a5d20
// Size: 1430 bytes
// Class: MUAudioFileSource

void FUN_004a5d20(int64_t *param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  void *pvVar2;
  void* pVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_e0;
  char local_d8;
  int64_t local_80;
  char local_78;
  int64_t local_60;
  char local_58;
  int local_48;
  int64_t *local_38;
  
  plVar4 = param_1;
  if (*param_1 == 0) {
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    lVar5 = *param_1;
    if (lVar5 == local_60) {
      if (((char)param_1[1] != '\0') || (local_60 == 0)) goto LAB_004a5e2e;
      if (local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_004a5e27;
      }
    }
    else {
      lVar1 = param_1[1];
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_60;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_004a5e27:
        local_38 = param_1 + 1;
        *(void*)local_38 = 1;
LAB_004a5e2e:
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_004a5e42;
      }
      *param_1 = local_60;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    local_38 = param_1 + 1;
    *(void*)local_38 = 1;
  }
LAB_004a5e42:
  pVar3 = (void*)plVar4;
  if (*param_3 != 0) goto LAB_004a5f38;
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  lVar5 = *param_3;
  if (lVar5 == local_60) {
    if (((char)param_3[1] != '\0') || (local_60 == 0)) goto LAB_004a5f24;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_004a5f1d;
    }
  }
  else {
    lVar1 = param_3[1];
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_60;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
LAB_004a5f1d:
      local_38 = param_3 + 1;
      *(void*)local_38 = 1;
LAB_004a5f24:
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004a5f38;
    }
    *param_3 = local_60;
    if (((char)lVar1 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  local_38 = param_3 + 1;
  *(void*)local_38 = 1;
LAB_004a5f38:
  lVar5 = *this_ptr;
  if (lVar5 != 0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar5 + 0xc)) {
      pVar3 = (void*)*(void*)(lVar5 + 0x10);
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d560();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d3a0();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    pVar3 = (void*)lVar5;
  }
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6fe0();
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  FUN_01298d30();
  return;
}



// ============================================================
// 00269ad0
// ============================================================
// Function: FUN_00269ad0
// Address: 00269ad0
// Size: 753 bytes
// Class: MUAudioFileSource

uint32_t FUN_00269ad0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char *pcVar2;
  byte in_DL;
  int64_t lVar3;
  int64_t this_ptr;
  uint32_t uVar4;
  uint32_t uVar5;
  int64_t local_68;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar4 = FUN_00d6f370();
  lVar3 = g_026f7000;
  if (g_026f7000 != 0) {
    uVar4 = FUN_00d50b00();
  }
  uVar4 = FUN_00d70f90(uVar4,0);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar4 & in_DL) == 0) {
    return uVar4;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == (int64_t *)0x0) {
LAB_00269bc1:
    lVar3 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    lVar3 = local_48;
    pcVar2 = &local_58;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_58 = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      lVar3 = *(int64_t *)(this_ptr + 0x90);
      if (lVar3 == 0) goto LAB_00269bc1;
    }
    else if (local_58 != '\0') goto LAB_00269bc3;
    FUN_00d50b00();
  }
LAB_00269bc3:
  uVar5 = FUN_01e436c0();
  if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    section_00000388.nrelocs._3_1_ = 1;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    lVar3 = local_48;
    pcVar2 = &local_58;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_58 = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      lVar3 = *(int64_t *)(this_ptr + 0x90);
LAB_00269c4f:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_00269c4f;
    *(void*)(lVar3 + 0x3c7) = 1;
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    local_68 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    local_68 = local_48;
    pcVar2 = local_38;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == 0) {
      local_68 = *(int64_t *)(this_ptr + 0x90);
      if (local_68 != 0) goto LAB_00269ce2;
      local_68 = 0;
    }
    else if (local_38[0] == '\0') {
LAB_00269ce2:
      FUN_00d50b00();
    }
  }
  FUN_0027e3a0(uVar5,param_2);
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    section_00000388.nrelocs._3_1_ = 0;
    return uVar4;
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  pcVar2 = local_40;
  if (local_40[0] == '\0') {
    pcVar2 = &local_58;
  }
  local_58 = local_40[0];
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    lVar3 = *(int64_t *)(this_ptr + 0x90);
  }
  else {
    lVar3 = local_48;
    if (local_58 != '\0') goto LAB_00269da0;
  }
  FUN_00d50b00();
LAB_00269da0:
  *(void*)(lVar3 + 0x3c7) = 0;
  FUN_00d50b20();
  return uVar4;
}



// ============================================================
// 004a5340
// ============================================================
// Function: FUN_004a5340
// Address: 004a5340
// Size: 1113 bytes
// Class: MUAudioFileSource

int64_t * FUN_004a5340(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_003b7950();
  if ((local_80 == '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar7 = *(int64_t *)(arg1 + 0x38);
  if (lVar7 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_90 = '\x01';
    local_98 = lVar7;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_80 == '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != (int64_t *)0x0) {
    if (0 < *(int *)((int64_t)local_88 + 0xc)) {
      lVar7 = 0;
      do {
        lVar1 = *(int64_t *)(local_88[2] + lVar7 * 8);
        FUN_004f9670();
        lVar2 = local_40;
        local_60 = local_38[0];
        pcVar6 = &local_60;
        pcVar5 = local_38;
        if (local_38[0] == '\0') {
          pcVar5 = pcVar6;
        }
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)pcVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004fae50();
        local_50 = local_40;
        local_48 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_48 = '\x01';
        cVar3 = (**(code **)(*local_88 + 0x50))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          *(void*)(this_ptr + 1) = 0;
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          *this_ptr = lVar1;
          *(void*)(this_ptr + 1) = 1;
          if ((local_60 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          FUN_000be170();
          FUN_00d50b20();
          goto LAB_004a578e;
        }
        if ((local_60 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)((int64_t)local_88 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  if (local_88 != (int64_t *)0x0) {
LAB_004a578e:
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 004a4d90
// ============================================================
// Function: FUN_004a4d90
// Address: 004a4d90
// Size: 619 bytes
// Class: MUAudioFileSource

void FUN_004a4d90(uint32_t param_1,int64_t *param_2)

{
  char cVar1;
  int64_t lVar2;
  bool bVar3;
  void*puVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  uint32_t uVar7;
  int64_t local_80;
  char local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  void*local_48;
  char local_40;
  char local_31;
  
  if (*(int64_t *)(arg1 + 0x48) == 0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    param_1 = (**(code **)(*plVar5 + 0x18))();
    lVar2 = *(int64_t *)(arg1 + 0x48);
    *(int64_t **)(arg1 + 0x48) = plVar5;
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
  }
  local_80 = *param_2;
  if (local_80 == 0) {
    param_1 = FUN_00247590();
    puVar4 = local_48;
    puVar6 = (void*)*param_2;
    if (puVar6 == local_48) {
      if (((char)param_2[1] != '\0') || (local_48 == (void*)0x0)) goto LAB_004a4e86;
      local_50 = param_2 + 1;
      if (local_40 == '\0') {
        param_1 = FUN_00d50b00();
        goto LAB_004a4e7f;
      }
LAB_004a4e46:
      *(void*)local_50 = 1;
    }
    else {
      local_50 = param_2 + 1;
      cVar1 = (char)param_2[1];
      if (local_40 != '\0') {
        *param_2 = (int64_t)local_48;
        if ((cVar1 != '\0') && (puVar6 != (void*)0x0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_004a4e46;
      }
      local_31 = cVar1;
      if (local_48 != (void*)0x0) {
        param_1 = FUN_00d50b00();
      }
      *param_2 = (int64_t)puVar4;
      if ((local_31 != '\0') && (puVar6 != (void*)0x0)) {
        param_1 = FUN_00d50b20();
      }
LAB_004a4e7f:
      *(void*)local_50 = 1;
LAB_004a4e86:
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        param_1 = FUN_00d50b20();
      }
    }
    local_80 = *param_2;
  }
  local_78 = '\0';
  FUN_004a50f0(param_1,&local_80);
  puVar6 = local_48;
  if (local_48 == (void*)0x0) {
    bVar3 = true;
    puVar6 = (void*)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_40 == '\0') || (local_48 == (void*)0x0)) goto LAB_004a4ef5;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    bVar3 = false;
  }
LAB_004a4ef5:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (puVar6 == (void*)0x0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_024f4960;
    *(void*)((int64_t)puVar6 + 100) = 0;
    puVar6[0xe] = 0;
    *(void*)(puVar6 + 0xf) = 0;
    puVar6[0x10] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(void*)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(void*)((int64_t)puVar6 + 0x51) = 0;
    *(void*)((int64_t)puVar6 + 0x59) = 0;
    uVar7 = (*g_024f4978)();
    local_68 = '\0';
    local_60 = *param_2;
    local_58 = '\0';
    local_70 = puVar6;
    FUN_004a51a0(uVar7,&local_60);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if (bVar3) {
      FUN_00d50b00();
    }
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 013933d0
// ============================================================
// Function: FUN_013933d0
// Address: 013933d0
// Size: 747 bytes
// Class: MUAudioFileSource

void FUN_013933d0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  void*this_ptr;
  int64_t *plVar6;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar3 = g_028acd40;
  if (g_028acd40 != (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  (**(code **)(*g_028acd10 + 0x368))();
  FUN_00d6f370();
  local_70 = g_027bf420;
  if (g_027bf420 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d704d0(&local_60,&local_70);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
LAB_01393581:
    bVar2 = false;
  }
  else {
    local_50 = plVar3;
    local_48 = '\0';
    FUN_00cddf30();
    plVar6 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar1 = true;
      plVar6 = (int64_t *)0x0;
      bVar2 = false;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        bVar1 = false;
        if ((local_38 == '\0') || (bVar1 = false, local_40 == (int64_t *)0x0)) goto LAB_0139353e;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar2 = true;
      bVar1 = false;
    }
LAB_0139353e:
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      cVar5 = (**(code **)(*plVar6 + 0x3a0))();
      if ((cVar5 != '\0') || (cVar5 = (**(code **)(*plVar6 + 0x428))(), cVar5 != '\0'))
      goto LAB_013935c7;
      if (bVar1) goto LAB_01393581;
      bVar2 = false;
      FUN_00d50b20();
    }
  }
  FUN_00b7b410();
  plVar6 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
  }
  else {
    bVar2 = true;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
  }
LAB_013935c7:
  cVar5 = (**(code **)(*plVar6 + 0x3a0))();
  if (cVar5 == '\0') {
    (**(code **)(*plVar6 + 0x428))();
  }
  (**(code **)(*g_028acd10 + 0x378))();
  cVar5 = (**(code **)(*plVar6 + 0x3a0))();
  plVar4 = g_028acd40;
  if (cVar5 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_028acd40 != plVar6) &&
       (FUN_00d50b00(), g_028acd40 = plVar6, plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (g_028acd48 == '\0') {
      g_028acd48 = '\x01';
      FUN_00e8cb90();
    }
    *(void*)(this_ptr + 1) = 0;
    if (!bVar2) {
      FUN_00d50b00();
    }
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
    bVar2 = false;
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 005371e0
// ============================================================
// Function: FUN_005371e0
// Address: 005371e0
// Size: 999 bytes
// Class: MUAudioFileSource

void FUN_005371e0(void* param_1,uint8_t param_2,uint8_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint8_t uVar3;
  void *pvVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar3 = (uint8_t)param_1;
  FUN_0051a2b0();
  FUN_00518030();
  *(void*)(this_ptr + 0x358) = param_2;
  *(void*)(this_ptr + 0x359) = uVar3;
  *(void*)(this_ptr + 0x35a) = param_3;
  lVar1 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x308);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x308) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x360) == 0) {
    FUN_002d8020();
    lVar1 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    FUN_0051a2b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_0051a2b0();
    FUN_00d50b20();
  }
  if (*(int64_t **)(this_ptr + 0x368) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x368) + 0x408))();
  }
  FUN_01f27fe0();
  FUN_0167ab60();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01537ab0();
  FUN_00d23310();
  lVar1 = local_48;
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  if (local_38[0] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_60 = '\x01';
  local_68 = lVar1;
  FUN_00b34cb0();
  (**(code **)(*local_98 + 0x88))();
  local_58 = local_48;
  local_50 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_50 = '\x01';
  FUN_000c24e0(&local_58,&local_68);
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_00518030();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    (**(code **)(*local_98 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x360) != 0) {
    *(void*)(this_ptr + 0x360) = 0;
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004a7d00
// ============================================================
// Function: FUN_004a7d00
// Address: 004a7d00
// Size: 920 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_004a7d00(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int local_60;
  int64_t *local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38;
  
  lVar5 = *(int64_t *)(this_ptr + 0x38);
  if (lVar5 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_38 = '\x01';
    local_40 = lVar5;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    local_60 = -1;
    while( true ) {
      lVar5 = (int64_t)local_60;
      local_60 = local_60 + 1;
      if (*(int *)(local_78 + 0xc) <= local_60) break;
      plVar1 = *(int64_t **)(*(int64_t *)(local_78 + 0x10) + 8 + lVar5 * 8);
      local_50 = plVar1;
      if ((g_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar7 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar7 = &local_50;
        if (cVar2 == '\0') {
          pplVar7 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar7 != (int64_t *)0x0) {
        pvVar4 = _pthread_getspecific((void*)pplVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123b100();
        plVar1 = local_50;
        local_40 = CONCAT71(local_40._1_7_,local_48[0]);
        plVar6 = (int64_t *)local_48;
        if (local_48[0] == '\0') {
          plVar6 = &local_40;
        }
        *(void*)plVar6 = 0;
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00b875e0();
          if ((char)local_40 != '\0') {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_00136d50();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004a3af0
// ============================================================
// Function: FUN_004a3af0
// Address: 004a3af0
// Size: 811 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint32_t FUN_004a3af0(void* param_1)

{
  int64_t *plVar1;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)*this_ptr;
  if ((g_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026e3238 = FUN_00115af0();
    g_026e3220 = "MUAudioFileSource";
    g_026e3228 = 0xa0;
    param_1 = 0x136df0;
    g_026e3230 = FUN_00136df0;
    g_026e3240 = 0;
    ram_00000000026e3248 = 0;
    g_026e3250 = 0;
    ram_00000000026e3258 = 0;
    g_026e3260 = 0;
    ram_00000000026e3268 = 0;
    g_026e3270 = 0;
    ram_00000000026e3278 = 0;
    g_026e3280 = 0;
    ram_00000000026e3288 = 0;
    g_026e3290 = 0;
    ram_00000000026e3298 = 0;
    g_026e32a0 = 0;
    ram_00000000026e32a8 = 0;
    g_026e32b0 = 0;
    ram_00000000026e32b8 = 0;
    g_026e32c0 = 0;
    ram_00000000026e32c8 = 0;
    g_026e32d0 = 0;
    ram_00000000026e32d8 = 0;
    g_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    FUN_00e85ea0();
  }
  plVar1 = (int64_t *)*arg1;
  if ((g_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026e3238 = FUN_00115af0();
    g_026e3220 = "MUAudioFileSource";
    g_026e3228 = 0xa0;
    param_1 = 0x136df0;
    g_026e3230 = FUN_00136df0;
    g_026e3240 = 0;
    ram_00000000026e3248 = 0;
    g_026e3250 = 0;
    ram_00000000026e3258 = 0;
    g_026e3260 = 0;
    ram_00000000026e3268 = 0;
    g_026e3270 = 0;
    ram_00000000026e3278 = 0;
    g_026e3280 = 0;
    ram_00000000026e3288 = 0;
    g_026e3290 = 0;
    ram_00000000026e3298 = 0;
    g_026e32a0 = 0;
    ram_00000000026e32a8 = 0;
    g_026e32b0 = 0;
    ram_00000000026e32b8 = 0;
    g_026e32c0 = 0;
    ram_00000000026e32c8 = 0;
    g_026e32d0 = 0;
    ram_00000000026e32d8 = 0;
    g_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    FUN_00e85ea0();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  (**(code **)(*local_60 + 0x390))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  (**(code **)(*local_50 + 0x390))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar2 = (**(code **)(*local_70 + 0x58))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar2;
}



// ============================================================
// 004a0bd0
// ============================================================
// Function: FUN_004a0bd0
// Address: 004a0bd0
// Size: 993 bytes
// Class: MUAudioFileSource

void FUN_004a0bd0(void* param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar5;
  void*puVar6;
  uint32_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_024e9f60;
  puVar1[0xd] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(void*)((int64_t)puVar1 + 0x51) = 0;
  *(void*)((int64_t)puVar1 + 0x59) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar4 = *arg1;
    lVar5 = puVar1[8];
    puVar6 = puVar1;
    if (lVar5 == lVar4) goto LAB_004a0c93;
  }
  else {
    lVar4 = *arg1;
    lVar5 = ((void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4])[8];
    puVar6 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    if (lVar5 == lVar4) goto LAB_004a0c93;
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  puVar6[8] = lVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
LAB_004a0c93:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01713990();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_004a0530(uVar7,1);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017139d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_004a0530(uVar7,1,param_3,param_4,1);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00124e00
// ============================================================
// Function: FUN_00124e00
// Address: 00124e00
// Size: 903 bytes
// Class: MUAudioFileSource

void FUN_00124e00(uint32_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  void* pVar4;
  void*puVar5;
  void*in_RDX;
  char *pcVar6;
  int64_t this_ptr;
  uint32_t uVar7;
  int64_t local_a0;
  char local_98;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_00127400();
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &g_025ee570;
  *puVar2 = &g_025ee570;
  puVar2[6] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(void*)((int64_t)puVar2 + 0x1c) = 0;
  *(void*)((int64_t)puVar2 + 0x24) = 0;
  (*g_025ee588)();
  FUN_00d23310();
  lVar1 = local_40;
  pVar4 = (void*)CONCAT71((int7)((uint64_t)puVar5 >> 8),local_38[0]);
  pcVar6 = &local_90;
  if (local_38[0] != '\0') {
    pcVar6 = local_38;
  }
  local_90 = local_38[0];
  *pcVar6 = '\0';
  if ((local_38[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  local_80 = local_50;
  local_78 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = '\x01';
  FUN_01531f40();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  FUN_01532bc0(param_1,param_2);
  (**(code **)(*(int64_t *)*in_RDX + 0x390))();
  local_70 = local_40;
  local_68 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_68 = '\x01';
  FUN_01532bd0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01532c20(*(void*)(this_ptr + 0xb0),1,0,0);
  FUN_00d6f370();
  (**(code **)(*(int64_t *)*in_RDX + 0x370))();
  uVar7 = FUN_00df1af0();
  local_60 = local_50;
  local_58 = 0;
  local_a0 = g_026e18a0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar7 = FUN_00d50b00();
      local_a0 = g_026e18a0;
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  g_026e18a0 = local_a0;
  if (local_a0 != 0) {
    local_58 = '\x01';
    uVar7 = FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00d6f570(uVar7,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00269ed0
// ============================================================
// Function: FUN_00269ed0
// Address: 00269ed0
// Size: 582 bytes
// Class: MUAudioFileSource

uint64_t FUN_00269ed0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t local_40;
  char local_38 [8];
  char local_30 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == (int64_t *)0x0) {
LAB_00269f57:
    lVar4 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar3 = local_30;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      lVar4 = *(int64_t *)(this_ptr + 0x90);
      if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_00269f57;
    }
    else {
      lVar4 = local_40;
      if (local_30[0] != '\0') goto LAB_00269f59;
    }
    FUN_00d50b00();
  }
LAB_00269f59:
  FUN_019f7c10();
  if ((plVar1 != (int64_t *)0x0) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == (int64_t *)0x0) {
LAB_00269fec:
    lVar4 = 0;
    lVar2 = g_026f7008;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar3 = local_30;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      lVar4 = *(int64_t *)(this_ptr + 0x90);
      if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_00269fec;
    }
    else {
      lVar4 = local_40;
      lVar2 = g_026f7008;
      if (local_30[0] != '\0') goto joined_r0x00269ff9;
    }
    FUN_00d50b00();
    lVar2 = g_026f7008;
  }
joined_r0x00269ff9:
  g_026f7008 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_019f7c50();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((plVar1 != (int64_t *)0x0) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == (int64_t *)0x0) {
LAB_0026a0b6:
    local_40 = 0;
    lVar4 = g_026f7010;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar3 = local_30;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      local_40 = *(int64_t *)(this_ptr + 0x90);
      if (local_40 == 0) goto LAB_0026a0b6;
    }
    else {
      lVar4 = g_026f7010;
      if (local_30[0] != '\0') goto joined_r0x0026a0c3;
    }
    FUN_00d50b00();
    lVar4 = g_026f7010;
  }
joined_r0x0026a0c3:
  g_026f7010 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_019f7c50();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar1 != (int64_t *)0x0) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 002c95a0
// ============================================================
// Function: FUN_002c95a0
// Address: 002c95a0
// Size: 784 bytes
// Class: MUAudioFileSource

int64_t * FUN_002c95a0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int local_40;
  
  lVar1 = *(int64_t *)(arg1 + 0xe0);
  if (lVar1 == 0) {
LAB_002c988e:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  local_40 = -1;
  do {
    while( true ) {
      lVar6 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_002d7300();
        lVar1 = *(int64_t *)(arg1 + 0xe0);
        if (lVar1 == 0) goto LAB_002c988e;
        lVar8 = 0;
        goto LAB_002c96ec;
      }
      lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar6 * 8);
      lVar8 = *(int64_t *)(lVar6 + 0x10);
      if (lVar8 == 0) break;
      FUN_00d50b00();
      lVar2 = *param_2;
      FUN_00d50b20();
      if (lVar8 == lVar2) goto LAB_002c9858;
    }
  } while (*param_2 != 0);
LAB_002c9858:
  *(void*)(this_ptr + 1) = 0;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  goto LAB_002c98b2;
  while( true ) {
    lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
    if (*(int64_t *)(lVar2 + 0x18) == 0) {
      plVar7 = *(int64_t **)(lVar2 + 0x10);
      pvVar4 = _pthread_getspecific((void*)lVar6);
      if (pvVar4 != (void *)0x0) {
        plVar7 = *(int64_t **)(lVar2 + 0x10);
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar7 + 0x478))();
    }
    else {
      FUN_00b88600();
    }
    plVar7 = (int64_t *)*param_2;
    pvVar4 = _pthread_getspecific((void*)lVar6);
    if (pvVar4 != (void *)0x0) {
      plVar7 = (int64_t *)*param_2;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar7 + 0x478))();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    cVar3 = (**(code **)(*local_98 + 0x50))();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = lVar8 + 1;
    if (cVar3 != '\0') break;
LAB_002c96ec:
    if (*(int *)(lVar1 + 0xc) <= (int)lVar8) {
      FUN_002d7300();
      goto LAB_002c988e;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  FUN_00d50b00();
  *this_ptr = lVar2;
LAB_002c98b2:
  *(void*)(this_ptr + 1) = 1;
  FUN_002d7300();
  return this_ptr;
}



// ============================================================
// 00763bc0
// ============================================================
// Function: FUN_00763bc0
// Address: 00763bc0
// Size: 709 bytes
// Class: MUAudioFileSource

void FUN_00763bc0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *this_ptr;
  int64_t lVar2;
  bool bVar3;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a0;
  char local_98;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x610))();
  if (local_98 == '\0') {
    if (local_a0 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_a0 == 0) {
    return;
  }
  if (0 < *(int *)(local_a0 + 0xc)) {
    lVar2 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(local_a0 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x5d8))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          local_58 = local_40;
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00763d10;
        }
      }
      else {
        local_58 = local_40;
        if (local_40 != 0) {
LAB_00763d10:
          (**(code **)(*this_ptr + 0x468))();
          if (local_40 == 0) {
            bVar3 = false;
          }
          else {
            (**(code **)(*this_ptr + 0x468))();
            (**(code **)(*local_b8 + 0x368))();
            bVar3 = local_68 != (int64_t *)0x0;
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (bVar3) {
            (**(code **)(*this_ptr + 0x468))();
            (**(code **)(*local_68 + 0x390))();
            local_50 = local_40;
            local_48 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_48 = '\x01';
            local_70 = '\0';
            local_78 = plVar1;
            FUN_0064e1c0(param_1,&local_78);
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(local_a0 + 0xc));
  }
  FUN_000e3600();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01394a40
// ============================================================
// Function: FUN_01394a40
// Address: 01394a40
// Size: 624 bytes
// Class: MUAudioFileSource
// String references:
//   "Cannot create separation folder at %@"

void FUN_01394a40(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  
  FUN_013933d0();
  plVar4 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar2 = *(int64_t *)(arg1 + 0x48);
  if (lVar2 == 0) {
    local_38 = plVar4;
    FUN_01393860();
    plVar4 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    plVar1 = (int64_t *)(arg1 + 0x48);
    FUN_00d64850();
    plVar3 = (int64_t *)*plVar1;
    if (plVar3 != plVar4) {
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *plVar1 = (int64_t)plVar4;
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *plVar1;
    plVar4 = local_38;
  }
  if (lVar2 != 0) {
    local_60 = 0;
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar2;
  (**(code **)(*plVar4 + 0x400))(param_1,&local_68);
  plVar4 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*plVar4 + 0x3a0))();
  if (cVar5 == '\0') {
    (**(code **)(*plVar4 + 0x428))();
  }
  cVar5 = (**(code **)(*plVar4 + 0x3a0))();
  lVar2 = g_027bf470;
  if (cVar5 == '\0') {
    if (g_027bf470 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0x368))();
    local_50 = 1;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (local_88 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_88;
    local_40 = '\x01';
    FUN_00cc7b40(param_1,&local_58);
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}



// ============================================================
// 0124d6c0
// ============================================================
// Function: FUN_0124d6c0
// Address: 0124d6c0
// Size: 1274 bytes
// Class: MUAudioFileSource

void FUN_0124d6c0(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void*puVar5;
  void* pVar6;
  int64_t *this_ptr;
  int64_t local_68;
  char local_60;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_002773c0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  pVar6 = (void*)plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = pVar6;
  }
  FUN_0132dd40();
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_007eeec0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = pVar6;
  }
  FUN_01327c60();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010fe5f0();
  (**(code **)(*plVar4 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb250();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*this_ptr + 0x378))();
  FUN_014bb2b0();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = pVar6;
  }
  FUN_01328c70();
  plVar4 = (int64_t *)FUN_00115860();
  (**(code **)(*plVar4 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = (void*)plVar1;
  }
  FUN_013dfbc0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd650();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc440();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x25c9ec0;
  *puVar5 = &g_025c9ec0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  (*g_025c9ed8)();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2ef0(0);
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*this_ptr + 0x398))();
  FUN_011f2f60();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124de20();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_013c9490();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_0124c710();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01394200
// ============================================================
// Function: FUN_01394200
// Address: 01394200
// Size: 1307 bytes
// Class: MUAudioFileSource

int FUN_01394200(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void*arg1;
  void*this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  
  lVar1 = g_027bf438;
  if (g_027bf438 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)*this_ptr + 0x88))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*(int64_t *)*arg1 + 0x88))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00(local_58);
    }
  }
  else {
    local_50 = '\0';
  }
  lVar5 = local_58;
  if (local_58 == 0) {
    local_48 = 0;
    lVar4 = g_027bf440;
joined_r0x0139445d:
    g_027bf440 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 == lVar4) {
      lVar4 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*this_ptr + 0x88))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x88))();
    if (local_58 == local_48) {
LAB_013945f7:
      bVar6 = local_50 == '\0';
joined_r0x013945fb:
      lVar5 = local_48;
      if ((!bVar6) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
          local_48 = local_58;
          goto LAB_013945f7;
        }
        bVar6 = true;
        local_48 = local_58;
        goto joined_r0x013945fb;
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_58 == 0) {
      local_58 = 0;
      iVar3 = 0;
      lVar1 = lVar4;
joined_r0x01394370:
      lVar4 = lVar1;
      if (lVar5 != 0) goto LAB_013946a3;
      goto LAB_013946a8;
    }
    if (lVar5 != 0) {
      iVar3 = FUN_00e8b280();
LAB_013946a3:
      FUN_00d50b20();
      goto LAB_013946a8;
    }
    iVar3 = 0;
  }
  else {
    if (local_58 != 0) {
      iVar3 = FUN_00e8b280();
      local_48 = local_58;
      lVar4 = g_027bf440;
      if (iVar3 == 0) goto joined_r0x0139445d;
      goto joined_r0x01394370;
    }
    cVar2 = FUN_00d45ad0();
    if (cVar2 == '\0') {
      local_48 = 0;
      lVar4 = g_027bf440;
      goto joined_r0x0139445d;
    }
    iVar3 = -1;
    lVar4 = lVar1;
LAB_013946a8:
    if (local_58 == 0) goto LAB_013946b5;
  }
  FUN_00d50b20();
LAB_013946b5:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return iVar3;
}



// ============================================================
// 012e0130
// ============================================================
// Function: FUN_012e0130
// Address: 012e0130
// Size: 1004 bytes
// Class: MUAudioFileSource

void* FUN_012e0130(void* param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  void*this_ptr;
  int64_t lVar8;
  bool bVar9;
  int64_t local_48;
  char local_40;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025d6300;
  *(void*)(puVar4 + 7) = 0;
  *(void*)((int64_t)puVar4 + 0x3c) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270710();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270900();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01263cf0();
  if (cVar2 == '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01263cf0();
    if (cVar2 != '\0') goto LAB_012e030a;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if (local_48 == 0) {
      bVar1 = false;
      bVar9 = false;
      lVar8 = 0;
    }
    else {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_40 = '\0';
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      lVar8 = local_48;
      if (iVar3 == 2) {
        bVar1 = true;
        bVar9 = true;
      }
      else {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 4;
        bVar1 = true;
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar9) goto LAB_012e03a2;
  }
  else {
LAB_012e030a:
    lVar8 = 0;
    bVar1 = false;
  }
  pvVar5 = _pthread_getspecific(param_1);
  puVar7 = puVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    puVar7 = (void*)puVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  FUN_00d64850();
  puVar7[8] = 0;
  FUN_00d64910();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012df4e0(0);
LAB_012e03a2:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00496ec0
// ============================================================
// Function: FUN_00496ec0
// Address: 00496ec0
// Size: 761 bytes
// Class: MUAudioFileSource

uint64_t FUN_00496ec0(void* param_1,char param_2)

{
  uint uVar1;
  void *pvVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x118) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a600();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      uVar3 = 0;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a600();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a540();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      uVar1 = FUN_00d51e10();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (param_2 == '\x01' && (char)uVar1 == '\0') {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134a600();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_0134a580();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        uVar3 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      }
      else {
        uVar3 = (uint64_t)uVar1 ^ 1;
      }
    }
    FUN_00d50b20();
  }
  return uVar3 & 0xffffffff;
}



// ============================================================
// 012e0fb0
// ============================================================
// Function: FUN_012e0fb0
// Address: 012e0fb0
// Size: 912 bytes
// Class: MUAudioFileSource

void FUN_012e0fb0(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_00003020();
  FUN_00d91a70(param_1,1);
  plVar1 = g_0270b820;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    plVar1 = g_0270b820;
  }
  g_0270b820 = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00003060();
  FUN_00d91a70(param_1,1);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1 = g_0270b828;
  if (g_0270b828 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00003010();
  FUN_00d91a70(param_1,1);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1 = g_0270b830;
  if (g_0270b830 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_30 + 0x550))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d46300();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    plVar1 = g_0270b838;
    if (g_0270b838 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_28 = '\0';
    local_30 = plVar1;
    FUN_00ca0840(param_1,&local_30);
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00127400
// ============================================================
// Function: FUN_00127400
// Address: 00127400
// Size: 648 bytes
// Class: MUAudioFileSource

void FUN_00127400(uint32_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  void* pVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t local_80;
  char local_78 [8];
  int64_t local_70;
  uint64_t local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  FUN_00d23310();
  pVar5 = CONCAT31((int3)((uint)param_1 >> 8),local_78[0]);
  pcVar6 = local_38;
  if (local_78[0] != '\0') {
    pcVar6 = local_78;
  }
  local_38[0] = local_78[0];
  *pcVar6 = '\0';
  if ((local_78[0] != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b60();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar2 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_78[0] = '\0';
    local_70 = lVar2;
    local_60 = 0;
    local_68 = 0;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4a50();
        local_40 = '\0';
        local_48 = lVar1;
        cVar3 = FUN_00d23d70();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4a00();
        }
        else {
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4a00();
        }
        lVar7 = lVar7 + 1;
        local_68 = CONCAT44(local_68._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0076f670
// ============================================================
// Function: FUN_0076f670
// Address: 0076f670
// Size: 824 bytes
// Class: MUAudioFileSource

void* FUN_0076f670(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  code *pcVar2;
  int iVar3;
  void*puVar4;
  void*puVar5;
  void *pvVar6;
  void*puVar7;
  void* pVar8;
  void*this_ptr;
  int64_t lVar9;
  uint32_t uVar10;
  float local_58;
  float local_54;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  if (0 < *(int *)(*param_2 + 0xc)) {
    lVar9 = 0;
    do {
      pVar8 = (void*)param_1;
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      if (iVar3 == 1) {
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0137c150();
        lVar1 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + lVar9 * 8);
        if ((g_023b7c14 <= local_58) || (local_54 <= g_023b7c18)) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        lVar1 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + lVar9 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      lVar9 = lVar9 + 1;
      param_1 = (int64_t)*(int *)(*param_2 + 0xc);
    } while (lVar9 < param_1);
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  uVar10 = (*pcVar2)();
  if (*(int *)((int64_t)puVar4 + 0xc) == 0) {
    if (*(int *)((int64_t)puVar5 + 0xc) != 0) {
      FUN_00d214d0(uVar10,*(void*)((int64_t)puVar7 + 0xc));
    }
  }
  else if (*(int *)((int64_t)puVar5 + 0xc) == 0) {
    FUN_00d214d0(uVar10,*(void*)((int64_t)puVar7 + 0xc));
  }
  else {
    FUN_00d214d0(uVar10,*(void*)((int64_t)puVar7 + 0xc));
  }
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 01c9d710
// ============================================================
// Function: FUN_01c9d710
// Address: 01c9d710
// Size: 763 bytes
// Class: MUAudioFileSource

int64_t * FUN_01c9d710(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  void* pVar5;
  int64_t *plVar6;
  void*puVar7;
  int64_t *this_ptr;
  int iVar8;
  int64_t local_98;
  char local_90;
  int64_t local_40;
  char local_38;
  
  if (*param_2 != 0) {
    plVar6 = param_1;
    pvVar2 = _pthread_getspecific((void*)param_1);
    pVar5 = (void*)plVar6;
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012eb770();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        FUN_00d50b00();
        FUN_00cb1fa0();
      }
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar7 = &g_02572358;
      *puVar4 = &g_02572358;
      (*g_02572370)();
      lVar1 = *param_1;
      if (lVar1 != 0) {
        if (0 < *(int *)(lVar1 + 0xc)) {
          iVar8 = 0;
          do {
            pvVar2 = _pthread_getspecific((void*)puVar7);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f98b0();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if (local_40 != 0) {
              local_38 = '\0';
              FUN_00d21140();
              FUN_00d50b20();
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(lVar1 + 0xc));
        }
        FUN_001159b0();
      }
      *this_ptr = (int64_t)puVar4;
      *(void*)(this_ptr + 1) = 1;
      if (lVar3 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar3 = *param_1;
  if ((char)param_1[1] == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar3;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_1 + 1) = 0;
  }
  return this_ptr;
}



// ============================================================
// 0053bd80
// ============================================================
// Function: FUN_0053bd80
// Address: 0053bd80
// Size: 707 bytes
// Class: MUAudioFileSource

void FUN_0053bd80(void)

{
  void*this_ptr;
  
  *this_ptr = &g_02501518;
  this_ptr[0x12] = &g_02501b50;
  this_ptr[0x13] = &g_02501b80;
  if (this_ptr[0x75] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x74] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x73] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x72] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x71] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x70] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x6f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x6d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x6c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x68] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x67] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x66] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x65] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[100] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[99] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x62] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x61] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x60] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x5f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x5e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x5d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x5b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x57] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x56] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x55] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x53] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x51] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x50] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x22] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x21] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x20] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x19] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x17] != 0) {
    FUN_00d50b20();
  }
  FUN_00013900();
  return;
}



// ============================================================
// 004a11d0
// ============================================================
// Function: FUN_004a11d0
// Address: 004a11d0
// Size: 947 bytes
// Class: MUAudioFileSource

void FUN_004a11d0(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_004a1563;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_004a1563;
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = (void*)local_40;
  }
  FUN_012e7fb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_004a12fd;
    }
  }
  else if (local_40 != 0) {
LAB_004a12fd:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_40 = *arg1;
    local_38 = '\0';
    FUN_00d23d20();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f1c0();
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0044be80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_004a1563:
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 004a7530
// ============================================================
// Function: FUN_004a7530
// Address: 004a7530
// Size: 1005 bytes
// Class: MUAudioFileSource

void FUN_004a7530(void* param_1)

{
  void *pvVar1;
  int64_t local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_004a7739;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_004a7739;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe10();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f380();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0150ec20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_004a7739:
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e68b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012edae0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01b253d0
// ============================================================
// Function: FUN_01b253d0
// Address: 01b253d0
// Size: 533 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_01b253d0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  int64_t *local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar6 = &local_40;
  FUN_01320d00();
  plVar1 = local_40;
  if ((g_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026e3238 = FUN_00115af0();
    g_026e3220 = "MUAudioFileSource";
    g_026e3228 = 0xa0;
    param_1 = 0x136df0;
    g_026e3230 = FUN_00136df0;
    g_026e3240 = 0;
    ram_00000000026e3248 = 0;
    g_026e3250 = 0;
    ram_00000000026e3258 = 0;
    g_026e3260 = 0;
    ram_00000000026e3268 = 0;
    g_026e3270 = 0;
    ram_00000000026e3278 = 0;
    g_026e3280 = 0;
    ram_00000000026e3288 = 0;
    g_026e3290 = 0;
    ram_00000000026e3298 = 0;
    g_026e32a0 = 0;
    ram_00000000026e32a8 = 0;
    g_026e32b0 = 0;
    ram_00000000026e32b8 = 0;
    g_026e32c0 = 0;
    ram_00000000026e32c8 = 0;
    g_026e32d0 = 0;
    ram_00000000026e32d8 = 0;
    g_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01b25469;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_01b25469:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0272fa48;
  if (plVar1 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_40 + 0x390))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0026a580
// ============================================================
// Function: FUN_0026a580
// Address: 0026a580
// Size: 684 bytes
// Class: MUAudioFileSource

void FUN_0026a580(void)

{
  void*this_ptr;
  
  *this_ptr = &g_024d8da0;
  this_ptr[0xe] = &g_024d9420;
  this_ptr[0xf] = &g_024d9470;
  if (this_ptr[0x3c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x39] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x38] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x37] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x36] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x35] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x30] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x29] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x27] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x26] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x25] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x24] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x23] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x22] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x21] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x20] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x19] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x18] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x17] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x16] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x15] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x14] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x13] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x12] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x11] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x10] != 0) {
    FUN_00d50b20();
  }
  FUN_00015ea0();
  return;
}



// ============================================================
// 012c9ae0
// ============================================================
// Function: FUN_012c9ae0
// Address: 012c9ae0
// Size: 693 bytes
// Class: MUAudioFileSource

void FUN_012c9ae0(void* param_1,char param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  void*puVar3;
  void* pVar4;
  void*this_ptr;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3[7] = 0;
  puVar3[8] = 0;
  pVar4 = 0x25d31f0;
  *puVar3 = &g_025d31f0;
  *(void*)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  *(void*)(puVar3 + 0xb) = 0;
  *(void*)((int64_t)puVar3 + 0x5c) = 0;
  *(void*)((int64_t)puVar3 + 99) = 0;
  (*g_025d3208)();
  if (param_2 != '\0') {
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar4 = 0x2607248;
    *puVar3 = &g_02607248;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    *(void*)((int64_t)puVar3 + 0x76) = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    (*g_02607260)();
    FUN_012c64a0();
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7710();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7900();
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}



// ============================================================
// 012c9770
// ============================================================
// Function: FUN_012c9770
// Address: 012c9770
// Size: 692 bytes
// Class: MUAudioFileSource

void FUN_012c9770(void* param_1,char param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  void*puVar3;
  void* pVar4;
  void*this_ptr;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3[7] = 0;
  puVar3[8] = 0;
  pVar4 = 0x25d31f0;
  *puVar3 = &g_025d31f0;
  *(void*)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  *(void*)(puVar3 + 0xb) = 0;
  *(void*)((int64_t)puVar3 + 0x5c) = 0;
  *(void*)((int64_t)puVar3 + 99) = 0;
  (*g_025d3208)();
  if (param_2 != '\0') {
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar4 = 0x2607248;
    *puVar3 = &g_02607248;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    *(void*)((int64_t)puVar3 + 0x76) = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    (*g_02607260)();
    FUN_012c64a0();
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7710();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7900();
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}



// ============================================================
// 004f01b0
// ============================================================
// Function: FUN_004f01b0
// Address: 004f01b0
// Size: 574 bytes
// Class: MUAudioFileSource

void FUN_004f01b0(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int iVar3;
  int64_t *this_ptr;
  bool bVar4;
  double dVar5;
  double local_40;
  double local_38;
  
  lVar1 = *this_ptr;
  if (lVar1 == 0) {
    local_40 = 0.0;
    local_38 = 0.0;
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_40 = 0.0;
      local_38 = 0.0;
    }
    else {
      bVar4 = true;
      local_38 = 0.0;
      iVar3 = 0;
      local_40 = 0.0;
      do {
        if (bVar4) {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (double)FUN_012ebfe0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_38 = (double)FUN_012ebd30();
          bVar4 = false;
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar5 = (double)FUN_012ebfe0();
          if (dVar5 < local_40) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = (double)FUN_012ebfe0();
          }
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar5 = (double)FUN_012ebd30();
          if (local_38 < dVar5) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_38 = (double)FUN_012ebd30();
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
  FUN_00e7b500(local_40,local_38 - local_40);
  return;
}



// ============================================================
// 004a21b0
// ============================================================
// Function: FUN_004a21b0
// Address: 004a21b0
// Size: 813 bytes
// Class: MUAudioFileSource

void* FUN_004a21b0(void)

{
  int64_t lVar1;
  void*puVar2;
  code *pcVar3;
  int64_t *plVar4;
  void *pvVar5;
  code *pcVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t local_78;
  char local_70;
  void*local_40;
  char local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar3 = g_02572370;
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      pcVar6 = g_02572370;
      do {
        puVar2 = *(void**)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        pvVar5 = _pthread_getspecific((void*)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        FUN_004a26e0();
        if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b00();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (void*)0x0) {
          local_40 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_40 = &g_02572358;
          (*pcVar3)();
          pvVar5 = _pthread_getspecific((void*)pcVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          FUN_004a2790();
        }
        local_38 = '\0';
        FUN_00d21140();
        if (local_40 != (void*)0x0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_40 = puVar2;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 012dfc10
// ============================================================
// Function: FUN_012dfc10
// Address: 012dfc10
// Size: 566 bytes
// Class: MUAudioFileSource

void FUN_012dfc10(void* param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_48;
  char local_40;
  float local_34;
  
  local_34 = g_02394288;
  if ((*(int64_t *)(this_ptr + 0x60) == 0) || (*(int64_t *)(this_ptr + 0x58) == 0))
  goto LAB_012dfce8;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01263cf0();
  if (cVar2 == '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01263cf0();
    if (cVar2 != '\0') goto LAB_012dfcca;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if (local_48 == 0) {
      lVar5 = 0;
      bVar1 = false;
      bVar6 = false;
    }
    else {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_40 = '\0';
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      lVar5 = local_48;
      if (iVar3 == 2) {
        bVar1 = true;
        bVar6 = true;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar6 = iVar3 == 4;
        bVar1 = true;
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_34 = g_02394288;
    if (bVar6) goto LAB_012dfccf;
  }
  else {
LAB_012dfcca:
    bVar1 = false;
    lVar5 = 0;
LAB_012dfccf:
    local_34 = 0.0;
  }
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
LAB_012dfce8:
  FUN_012df4e0((double)local_34);
  return;
}



// ============================================================
// 004a1c00
// ============================================================
// Function: FUN_004a1c00
// Address: 004a1c00
// Size: 958 bytes
// Class: MUAudioFileSource

void FUN_004a1c00(void* param_1)

{
  void *pvVar1;
  int64_t local_38;
  char local_30;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012ca540();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505730();
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e68b0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f380();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0076fba0
// ============================================================
// Function: FUN_0076fba0
// Address: 0076fba0
// Size: 517 bytes
// Class: MUAudioFileSource

void FUN_0076fba0(void* param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  local_68 = *param_3;
  local_60 = 0;
  pVar5 = param_1;
  FUN_00788fc0(param_1,&local_68);
  lVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) {
    return;
  }
  if ((char)param_1 == '\0') {
    if (*param_3 != 0) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_016c2e90();
      if (1 < iVar2) {
        pvVar3 = _pthread_getspecific(pVar5);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          local_38 = lVar1;
        }
        else {
          local_38 = *(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c2e90();
        FUN_016c1150();
      }
    }
  }
  else {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = lVar1;
  local_40 = '\0';
  FUN_012caf90();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 004a5a00
// ============================================================
// Function: FUN_004a5a00
// Address: 004a5a00
// Size: 588 bytes
// Class: MUAudioFileSource

byte FUN_004a5a00(void* param_1)

{
  int64_t lVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  int64_t this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_38 = '\x01';
    local_40 = lVar1;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar2 = FUN_0131ae60();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_48 = '\x01';
    local_50 = lVar1;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  bVar3 = FUN_004a0530();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return bVar2 & bVar3;
}



// ============================================================
// 00763640
// ============================================================
// Function: FUN_00763640
// Address: 00763640
// Size: 558 bytes
// Class: MUAudioFileSource

void FUN_00763640(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int iVar5;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  char local_58;
  int local_48;
  
  cVar3 = (**(code **)(*this_ptr + 0x478))();
  if (((char)this_ptr[0x19] != '\0') && (cVar3 != '\0')) {
    *(void*)(this_ptr + 0x19) = 0;
  }
  (**(code **)(*(int64_t *)this_ptr[0x10] + 0x4a0))();
  if (local_98 == '\0') {
    if (local_a0 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_a0 == 0) {
    return;
  }
  if (0 < *(int *)(local_a0 + 0xc)) {
    iVar5 = 0;
    do {
      lVar2 = local_60;
      (**(code **)(*this_ptr + 0x610))();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          goto LAB_007637b0;
        }
      }
      else if (local_60 != 0) {
LAB_007637b0:
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        while( true ) {
          lVar4 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar2 + 0xc) <= local_48) break;
          lVar1 = *(int64_t *)(lVar2 + 0x10);
          local_60 = *(int64_t *)(lVar1 + 8 + lVar4 * 8);
          local_70 = '\0';
          local_78 = local_60;
          FUN_0064e3a0(lVar1,&local_78);
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_000e3600();
        FUN_00d50b20();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_a0 + 0xc));
  }
  FUN_000ad7a0();
  FUN_00d50b20();
  return;
}



// ============================================================
// 004960c0
// ============================================================
// Function: FUN_004960c0
// Address: 004960c0
// Size: 545 bytes
// Class: MUAudioFileSource

uint64_t FUN_004960c0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t this_ptr;
  float fVar7;
  uint32_t uVar8;
  int64_t local_60;
  char local_58;
  int local_48;
  
  lVar3 = local_60;
  if (param_2 == 0) {
    return 1;
  }
  fVar7 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x930))();
  FUN_0048a5a0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_0049621d;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_0049621d;
  local_58 = '\0';
  local_60 = 0;
  local_48 = -1;
  fVar7 = g_02390124 - fVar7;
  while( true ) {
    lVar5 = (int64_t)local_48;
    local_48 = local_48 + 1;
    if (*(int *)(lVar3 + 0xc) <= local_48) break;
    lVar1 = *(int64_t *)(lVar3 + 0x10);
    local_60 = *(int64_t *)(lVar1 + 8 + lVar5 * 8);
    pvVar6 = _pthread_getspecific((void*)lVar1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013d7dd0(fVar7);
  }
  FUN_00115190();
  FUN_00d50b20();
LAB_0049621d:
  FUN_0047dd70();
  iVar4 = FUN_01caecd0();
  plVar2 = *(int64_t **)(this_ptr + 0x100);
  if (iVar4 == 3) {
    (**(code **)(*plVar2 + 0x6e0))();
  }
  else {
    (**(code **)(*plVar2 + 0x6b0))();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    uVar8 = FUN_01e3f820();
    (**(code **)(*plVar2 + 0x6d8))(uVar8,0);
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 0053b0a0
// ============================================================
// Function: FUN_0053b0a0
// Address: 0053b0a0
// Size: 688 bytes
// Class: MUAudioFileSource

void FUN_0053b0a0(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar6 = local_58;
  if (*(char *)(this_ptr + 0x248) != '\0') {
    return;
  }
  if (*(char *)(this_ptr + 0x249) == '\0') {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x278) == 0) {
    return;
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  FUN_012d2610();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0053b2a0;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0053b2a0;
  local_50 = '\0';
  local_58 = 0;
  local_40 = -1;
  while( true ) {
    lVar4 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(lVar6 + 0xc) <= local_40) break;
    lVar1 = *(int64_t *)(lVar6 + 0x10);
    local_58 = *(int64_t *)(lVar1 + 8 + lVar4 * 8);
    pvVar5 = _pthread_getspecific((void*)lVar1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f0960(param_1,1);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0053b2a0:
  FUN_0141c3e0(param_1);
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_0141c1e0();
  lVar6 = FUN_00e313b0();
  do {
    cVar2 = FUN_00e31450(3,local_58);
  } while (cVar2 == '\0');
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0053a480
// ============================================================
// Function: FUN_0053a480
// Address: 0053a480
// Size: 759 bytes
// Class: MUAudioFileSource

int64_t * FUN_0053a480(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_48;
  char local_40;
  
  lVar4 = *(int64_t *)(arg1 + 0x340);
  if (lVar4 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar5 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          lVar2 = *(int64_t *)(arg1 + 0x340);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_003231a0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          FUN_00d23d90();
          local_48 = lVar1;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170();
    lVar4 = *(int64_t *)(arg1 + 0x340);
    *(void*)(this_ptr + 1) = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
      goto LAB_0053a74b;
    }
  }
  lVar4 = 0;
LAB_0053a74b:
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 0053a050
// ============================================================
// Function: FUN_0053a050
// Address: 0053a050
// Size: 759 bytes
// Class: MUAudioFileSource

int64_t * FUN_0053a050(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_48;
  char local_40;
  
  lVar4 = *(int64_t *)(arg1 + 0x338);
  if (lVar4 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar5 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01657380();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          lVar2 = *(int64_t *)(arg1 + 0x338);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00539f40();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          FUN_00d23d90();
          local_48 = lVar1;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_00277f20();
    lVar4 = *(int64_t *)(arg1 + 0x338);
    *(void*)(this_ptr + 1) = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
      goto LAB_0053a31b;
    }
  }
  lVar4 = 0;
LAB_0053a31b:
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 004a17d0
// ============================================================
// Function: FUN_004a17d0
// Address: 004a17d0
// Size: 710 bytes
// Class: MUAudioFileSource

void FUN_004a17d0(void* param_1)

{
  void *pvVar1;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  if (param_1 == 0xffffffff) {
    pvVar1 = _pthread_getspecific(0xffffffff);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e66e0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f1c0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0044be80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004a0530
// ============================================================
// Function: FUN_004a0530
// Address: 004a0530
// Size: 625 bytes
// Class: MUAudioFileSource

uint64_t FUN_004a0530(void* param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t local_98;
  char local_90;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4ba0();
  lVar1 = g_02708bf0;
  if (g_02708bf0 != 0) {
    FUN_00d50b00();
  }
  uVar3 = FUN_00c9ff50();
  uVar5 = (uint64_t)uVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (param_2 == '\x01' && (char)uVar3 == '\0') {
    FUN_004f7da0();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar6 = 0;
      do {
        cVar2 = FUN_004a0530();
        uVar5 = uVar5 & 0xff;
        if (cVar2 == '\0') {
          uVar5 = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffffffffff01;
}



// ============================================================
// 010f4e00
// ============================================================
// Function: FUN_010f4e00
// Address: 010f4e00
// Size: 1193 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_010f4e00(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_010f5320();
  *this_ptr = &g_025ccea8;
  FUN_010f5b10();
  this_ptr[0xe] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e32db == '\0') {
    FUN_010f5d90();
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e32db == '\0') {
    FUN_010f5f00();
    FUN_00e87980();
  }
  this_ptr[0x10] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e32db == '\0') {
    FUN_010f6070();
    FUN_00e87980();
  }
  FUN_010f61e0();
  *(void*)(this_ptr + 0x12) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e32db == '\0') {
    FUN_010f6460();
    FUN_00e87980();
  }
  this_ptr[0x13] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e32db == '\0') {
    FUN_010f65d0();
    FUN_00e87980();
  }
  return;
}

