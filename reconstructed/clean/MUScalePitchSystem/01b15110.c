// Function: FUN_01b15110
// Address: 01b15110
// Size: 806 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint64_t FUN_01b15110(void* param_1,uint32_t param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint64_t uVar9;
  uint8_t in_XMM1 [16];
  uint8_t auVar10 [16];
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      cVar1 = *(char *)((int64_t)this_ptr + 0x315);
      goto joined_r0x01b15167;
    }
  }
  else if (local_40 != 0) {
    cVar1 = *(char *)((int64_t)this_ptr + 0x315);
joined_r0x01b15167:
    if ((cVar1 == '\0') || (*(char *)((int64_t)this_ptr + 0x316) == '\0')) {
      uVar5 = 0;
    }
    else if ((char)param_2 == '\0') {
      FUN_01caeae0();
      if (local_38 == '\0') {
        if (local_40 == 0) goto LAB_01b153b1;
        FUN_00d50b00();
      }
      else if (local_40 == 0) {
LAB_01b153b1:
        uVar5 = CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
        goto LAB_01b1541d;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar2 = _pthread_getspecific(param_1);
      lVar4 = local_40;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar4 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      FUN_01736840();
      FUN_01d66ab0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
      FUN_00d50b20();
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar2 = _pthread_getspecific(param_1);
      lVar4 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar4 = *(int64_t *)(local_50 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      FUN_01736840();
      FUN_01736c00();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar6 = g_023dccec;
      uVar9 = g_023dccf4;
      if ((*(int *)((int64_t)this_ptr + 0x284) != 1) &&
         (*(int *)((int64_t)this_ptr + 0x284) != 0)) {
        uVar6 = FUN_01e3f820();
        if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
          auVar7 = in_XMM1;
          FUN_01e3f820();
          auVar7 = blendps(auVar7,g_0241c700,0xd);
        }
        else {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = g_023dccf4;
        }
        auVar10._8_8_ = extraout_XMM0_Qb;
        auVar10._0_8_ = uVar6;
        auVar8._0_4_ = auVar7._0_4_ + (float)uVar6;
        auVar8._4_4_ = auVar7._4_4_ + (float)((uint64_t)uVar6 >> 0x20);
        auVar8._8_4_ = auVar7._8_4_ + (float)extraout_XMM0_Qb;
        auVar8._12_4_ = auVar7._12_4_ + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auVar7 = blendps(auVar8,auVar10,2);
        auVar10 = blendps(in_XMM1,g_0241c710,0xd);
        uVar6 = auVar7._0_8_;
        uVar9 = auVar10._0_8_;
      }
      uVar5 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
      (**(code **)(*this_ptr + 0x618))(uVar6,uVar9);
    }
LAB_01b1541d:
    FUN_00d50b20();
    goto LAB_01b15425;
  }
  uVar5 = 0;
LAB_01b15425:
  return uVar5 & 0xffffffff;
}

