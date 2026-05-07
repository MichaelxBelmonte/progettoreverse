// Function: FUN_01e0b690
// Address: 01e0b690
// Size: 1296 bytes
// Class: GNMultipleValue

void FUN_01e0b690(void)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint64_t uVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  char cVar7;
  int iVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar9;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  float fVar11;
  uint8_t in_XMM1 [16];
  float fVar12;
  uint8_t auVar10 [16];
  int64_t local_88;
  char local_80;
  int64_t *local_40;
  char local_38;
  
  if (((*arg1 != 0) && (iVar8 = FUN_01d3a5a0(), iVar8 == 1)) &&
     (iVar8 = FUN_01d3b630(), iVar8 == 1)) {
    cVar7 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar7 == '\0') {
      return;
    }
    cVar7 = (**(code **)(*this_ptr + 0xb30))();
    if ((cVar7 != '\0') && (iVar8 = FUN_01d3b620(), iVar8 == 1)) {
      FUN_01d3abf0();
      uVar9 = FUN_01e466c0();
      cVar7 = (**(code **)(*this_ptr + 0xb30))();
      if (cVar7 != '\0') {
        uVar3 = FUN_01e3f820();
        fVar11 = in_XMM1._4_4_;
        fVar12 = in_XMM1._12_4_;
        auVar10._0_4_ = in_XMM1._0_4_ - fVar11;
        auVar10._4_4_ = fVar11 - fVar11;
        auVar10._8_4_ = in_XMM1._8_4_ - fVar12;
        auVar10._12_4_ = fVar12 - fVar12;
        auVar2._8_4_ = extraout_XMM0_Dc;
        auVar2._0_8_ = uVar3;
        auVar2._12_4_ = extraout_XMM0_Dd;
        blendps(auVar10,auVar2,2);
        cVar7 = FUN_00d05410(uVar9);
        if (cVar7 != '\0') {
                                                  (**(code **)(*this_ptr + 0xb38))();
          return;
        }
      }
    }
    if (((*(char *)((int64_t)this_ptr + 0x1e3) != '\0') && ((char)this_ptr[0x3c] != '\0')) &&
       (iVar8 = FUN_01d3b620(), iVar8 == 1)) {
      *(void*)((int64_t)this_ptr + 0x1e1) = 1;
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(*this_ptr + 0x960))();
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      FUN_00d8dab0();
      if (local_40 == (int64_t *)0x0) {
        bVar5 = true;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = false;
      }
      else {
        local_38 = '\0';
        bVar5 = false;
      }
      if (local_88 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      bVar4 = false;
      do {
        (**(code **)(*this_ptr + 0x658))();
        plVar1 = (int64_t *)*arg1;
        if (plVar1 == local_40) {
          if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01e0ba90;
            }
LAB_01e0ba4f:
            *(void*)(arg1 + 1) = 1;
            local_38 = '\0';
          }
          lVar6 = *arg1;
        }
        else {
          lVar6 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = (int64_t)local_40;
            if (((char)lVar6 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01e0ba4f;
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)local_40;
          if (((char)lVar6 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01e0ba90:
          *(void*)(arg1 + 1) = 1;
          lVar6 = *arg1;
        }
        if (lVar6 == 0) {
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01e0bb61:
          *(void*)((int64_t)this_ptr + 0x1e1) = 0;
          if (bVar4) {
            FUN_01d11e80();
          }
          if (bVar5 || local_40 == (int64_t *)0x0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        iVar8 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 == 6) goto LAB_01e0bb61;
        FUN_01d3abf0();
        FUN_01e466c0();
        *(void*)((int64_t)this_ptr + 0x1e1) = 0;
        FUN_01e07060(extraout_XMM0_Db - extraout_XMM0_Db_00,
                     (int)(extraout_XMM0_Db - extraout_XMM0_Db_00));
        *(void*)((int64_t)this_ptr + 0x1e1) = 1;
        (**(code **)(*this_ptr + 0x620))();
        cVar7 = (**(code **)(*this_ptr + 0xa38))();
        bVar4 = true;
        if (cVar7 != '\0') {
          FUN_01d11e80();
          bVar4 = true;
        }
      } while( true );
    }
    FUN_01e42030();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x640))();
      FUN_01e3f820();
      (**(code **)(*local_40 + 0x548))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d3abf0();
      FUN_01e466c0();
      cVar7 = FUN_00d05410();
      if (cVar7 != '\0') {
        if (this_ptr[0x40] != 0) {
          return;
        }
        cVar7 = FUN_01e42250();
        if (cVar7 == '\0') {
          return;
        }
        (**(code **)(*this_ptr + 0xac0))();
        return;
      }
    }
  }
  FUN_01d122b0();
  return;
}

