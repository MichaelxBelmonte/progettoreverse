// Function: FUN_01d21ed0
// Address: 01d21ed0
// Size: 1868 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d21ed0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  uint32_t uVar7;
  float fVar8;
  float fVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int64_t local_40;
  char local_38;
  
  fVar8 = (float)((uint64_t)param_2 >> 0x20);
  fVar13 = (float)param_2;
  iVar3 = FUN_01d3a5a0();
  if ((iVar3 == 1) && (iVar3 = FUN_01d3b630(), iVar3 == 1)) {
    cVar2 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar2 != '\0') {
      uVar4 = FUN_01d3b590();
      uVar5 = FUN_01daf9a0();
      if ((uVar5 & ~uVar4) == 0) {
        (**(code **)(*this_ptr + 0x990))();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          (**(code **)(*this_ptr + 0x990))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          (**(code **)(*this_ptr + 0x978))();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0xa50))();
          return;
        }
      }
      *(void*)(this_ptr + 0x31) = 1;
      FUN_01d3abf0();
      uVar10 = FUN_01e466c0();
      local_d8 = (float)uVar10;
      fStack_d4 = (float)((uint64_t)uVar10 >> 0x20);
      uVar7 = (**(code **)(*this_ptr + 0x930))();
      *(void*)(this_ptr + 0x3d) = uVar7;
      (**(code **)(*this_ptr + 0xaa8))();
LAB_01d220aa:
      (**(code **)(*this_ptr + 0x658))();
      lVar1 = *arg1;
      if (lVar1 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != 0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01d2214b;
          }
LAB_01d22102:
          *(void*)(arg1 + 1) = 1;
          local_38 = '\0';
        }
        lVar1 = *arg1;
      }
      else {
        lVar6 = arg1[1];
        if (local_38 != '\0') {
          *arg1 = local_40;
          if (((char)lVar6 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01d22102;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_40;
        if (((char)lVar6 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01d2214b:
        *(void*)(arg1 + 1) = 1;
        lVar1 = *arg1;
      }
      if (lVar1 != 0) {
        iVar3 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar3 == 6) goto LAB_01d22593;
        iVar3 = FUN_01d3a5a0();
        if (iVar3 == 4) {
          uVar7 = (**(code **)(*this_ptr + 0x930))();
          *(void*)(this_ptr + 0x3d) = uVar7;
          FUN_01d3abf0();
          uVar10 = FUN_01e466c0();
          local_d8 = (float)uVar10;
          fStack_d4 = (float)((uint64_t)uVar10 >> 0x20);
        }
        iVar3 = FUN_01d3a5a0();
        if (iVar3 == 5) {
          FUN_01d3abf0();
          uVar10 = FUN_01e466c0();
          fVar13 = *(float *)(this_ptr + 0x3d);
          fVar14 = (fStack_d4 + (((float)uVar10 - local_d8) - (float)((uint64_t)uVar10 >> 0x20))) /
                   g_02390d38;
          fVar8 = (float)(**(code **)(*this_ptr + 0xad0))();
          fVar9 = (float)(**(code **)(*this_ptr + 0xac0))();
          fVar14 = (fVar8 - fVar9) * fVar14;
          uVar4 = FUN_01d3b590();
          uVar5 = FUN_01daf9d0();
          fVar8 = fVar14 * g_02391090;
          if ((uVar5 & ~uVar4) != 0) {
            fVar8 = fVar14;
          }
          (**(code **)(*this_ptr + 0xb20))(fVar13 + fVar8);
          if (this_ptr[0x39] != 0) {
            uVar4 = FUN_01d3b590();
            uVar5 = FUN_01daf9d0();
            if ((uVar5 & ~uVar4) != 0) {
              FUN_01d0d420();
            }
          }
          uVar4 = FUN_01d3b590();
          uVar5 = FUN_01daf9a0();
          if ((uVar5 & ~uVar4) == 0) {
            (**(code **)(*this_ptr + 0x990))();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 == 0) goto LAB_01d223e0;
            (**(code **)(*this_ptr + 0x990))();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            (**(code **)(*this_ptr + 0x978))();
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
LAB_01d223e0:
            (**(code **)(*this_ptr + 0x928))();
          }
LAB_01d223f2:
          if (*(char *)((int64_t)this_ptr + 0x16a) != '\0') {
            (**(code **)(*this_ptr + 0xa50))();
          }
          (**(code **)(*this_ptr + 0x620))();
        }
        else {
          iVar3 = FUN_01d3a5a0();
          if (iVar3 == 4) {
            uVar4 = FUN_01d3b590();
            uVar5 = FUN_01daf9a0();
            if ((uVar5 & ~uVar4) == 0) {
              (**(code **)(*this_ptr + 0x990))();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                (**(code **)(*this_ptr + 0x990))();
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                (**(code **)(*this_ptr + 0x978))();
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_01d223f2;
              }
            }
          }
        }
        (**(code **)(*this_ptr + 0xaa8))();
        goto LAB_01d220aa;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01d22593:
      *(void*)(this_ptr + 0x31) = 0;
      (**(code **)(*this_ptr + 0x6e0))();
      (**(code **)(*this_ptr + 0xa50))();
    }
  }
  else if ((this_ptr[0x3c] == 0) ||
          ((iVar3 = FUN_01d3a5a0(), iVar3 != 1 || (iVar3 = FUN_01d3b630(), iVar3 != 2)))) {
    FUN_01daee00();
  }
  else {
    uVar10 = FUN_01e3f820();
    fStack_d0 = (float)extraout_XMM0_Qb;
    fStack_cc = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
    lVar1 = this_ptr[0x3c];
    if (lVar1 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_00d50b00();
      lVar6 = lVar1;
    }
    FUN_00d50b00();
    auVar12._8_4_ = fStack_d0;
    auVar12._0_8_ = uVar10;
    auVar12._12_4_ = fStack_cc;
    auVar11._0_4_ = (float)uVar10 + fVar13;
    auVar11._4_4_ = (float)((uint64_t)uVar10 >> 0x20) + fVar8;
    auVar11._8_4_ = fStack_d0 + in_XMM1_Dc;
    auVar11._12_4_ = fStack_cc + in_XMM1_Dd;
    auVar12 = blendps(auVar11,auVar12,0xd);
    FUN_01d5ef60(auVar12._0_8_,0xffffffff);
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((lVar1 != 0) && (lVar6 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

