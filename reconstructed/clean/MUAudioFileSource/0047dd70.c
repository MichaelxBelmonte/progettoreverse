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

