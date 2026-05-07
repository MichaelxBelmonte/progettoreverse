// Function: FUN_01b1c920
// Address: 01b1c920
// Size: 926 bytes
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


uint64_t FUN_01b1c920(void* param_1,byte param_2)

{
  uint8_t auVar1 [16];
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t *this_ptr;
  float fVar7;
  uint64_t uVar8;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar9;
  uint8_t in_XMM1 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01b1c964;
    }
  }
  else if (local_40 != 0) {
LAB_01b1c964:
    FUN_01caeae0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01b1ca49;
      FUN_00d50b00();
LAB_01b1c9b0:
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_0174e1b0();
      uVar6 = (uint64_t)uVar3;
      if ((param_2 & (byte)uVar3) == 1) {
        iVar4 = FUN_01d654a0();
        if (iVar4 == 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0174e250();
        }
        else {
          iVar4 = FUN_01d654a0();
          if (iVar4 == 1) {
            pvVar5 = _pthread_getspecific(param_1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0174e250();
          }
          else {
            iVar4 = FUN_01d654a0();
            if (iVar4 == 2) {
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0174e250();
            }
            else {
              iVar4 = FUN_01d654a0();
              if (iVar4 == 3) {
                pvVar5 = _pthread_getspecific(param_1);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0174e250();
              }
            }
          }
        }
        if ((*(int *)((int64_t)this_ptr + 0x284) == 1) ||
           (*(int *)((int64_t)this_ptr + 0x284) == 0)) {
          fVar9 = (float)g_023dccec;
          fVar12 = (float)g_023dccf4;
        }
        else {
          uVar8 = FUN_01e3f820();
          if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
            auVar10 = in_XMM1;
            FUN_01e3f820();
            auVar10 = blendps(auVar10,g_0241c700,0xd);
          }
          else {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = g_023dccf4;
          }
          auVar1._8_4_ = extraout_XMM0_Dc;
          auVar1._0_8_ = uVar8;
          auVar1._12_4_ = extraout_XMM0_Dd;
          auVar11._0_4_ = auVar10._0_4_ + (float)uVar8;
          auVar11._4_4_ = auVar10._4_4_ + (float)((uint64_t)uVar8 >> 0x20);
          auVar11._8_4_ = auVar10._8_4_ + extraout_XMM0_Dc;
          auVar11._12_4_ = auVar10._12_4_ + extraout_XMM0_Dd;
          auVar10 = blendps(auVar11,auVar1,2);
          fVar9 = auVar10._0_4_;
          auVar10 = blendps(in_XMM1,g_0241c710,0xd);
          fVar12 = auVar10._0_4_;
        }
        fVar7 = fVar9 + fVar12 * g_0239011c;
        if ((fVar12 == 0.0) && (!NAN(fVar12))) {
          fVar7 = fVar9;
        }
        (**(code **)(*this_ptr + 0x618))(fVar7);
        FUN_00d403d0();
        lVar2 = g_027e3d40;
        if (g_027e3d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b00();
        local_68 = 0;
        local_60 = '\0';
        FUN_00d40470(&local_68,&stack0xffffffffffffffa8,1,3);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        uVar6 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
      }
      FUN_00d50b20();
    }
    else {
      if (local_40 != 0) goto LAB_01b1c9b0;
LAB_01b1ca49:
      uVar6 = 0;
    }
    FUN_00d50b20();
    goto LAB_01b1ccad;
  }
  uVar6 = 0;
LAB_01b1ccad:
  return uVar6 & 0xffffffff;
}

