// Function: FUN_01b55820
// Address: 01b55820
// Size: 2607 bytes
// Class: MUScaleDetectionOptionsData

void FUN_01b55820(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  bool bVar9;
  int64_t **pplVar10;
  undefined7 uVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar12;
  int64_t *plVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  float extraout_XMM0_Db;
  uint64_t local_160;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  uint32_t local_10c;
  int64_t local_108;
  char local_100;
  uint64_t local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  int local_8c;
  uint64_t local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  int64_t *local_38;
  int64_t *plVar13;
  
  if (((*arg1 != 0) && (iVar6 = FUN_01d3a5a0(), iVar6 == 1)) &&
     (iVar6 = FUN_01d3b630(this_ptr), iVar6 == 1)) {
    cVar5 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar5 == '\0') {
      return;
    }
    if ((char)this_ptr[0x49] != '\0') {
      FUN_01d11e80();
      return;
    }
    if (((this_ptr[0x48] != 0) && (cVar5 = FUN_01e05890(), cVar5 != '\0')) &&
       ((cVar5 = FUN_01e06f90(this_ptr), cVar5 != '\0' &&
        (iVar6 = FUN_01d3b620(this_ptr), iVar6 == 1)))) {
      FUN_01e07010(this_ptr);
      FUN_01d3abf0();
      uVar16 = FUN_01e466c0();
      (**(code **)(*this_ptr + 0x960))();
      lVar3 = local_108;
      local_a0 = 0;
      if (local_100 == '\0') {
        if (local_108 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_100 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = lVar3;
      FUN_00d8dab0();
      if (local_60 == (int64_t *)0x0) {
        local_10c = (uint32_t)CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
        local_98 = 0;
      }
      else if (local_58 == '\0') {
        uVar7 = FUN_00d50b00();
        local_10c = 0;
        local_98 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
      else {
        local_98 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
        local_58 = '\0';
        local_10c = 0;
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      local_8c = (int)(float)uVar16;
      bVar1 = false;
      local_48 = (int64_t *)0x0;
      local_68 = 0;
      bVar9 = false;
      local_160 = 0;
      local_f8 = 0;
      local_b0 = 0;
      plVar12 = (int64_t *)0x0;
      bVar4 = bVar1;
      plVar14 = (int64_t *)0x0;
LAB_01b55bd7:
      do {
        plVar13 = plVar14;
        bVar2 = bVar4;
        (**(code **)(*this_ptr + 0x658))();
        plVar14 = (int64_t *)*arg1;
        if (plVar14 == local_60) {
          if (((char)arg1[1] == '\0') && (local_60 != (int64_t *)0x0)) {
            if (local_58 == '\0') {
              FUN_00d50b00();
              goto LAB_01b55c60;
            }
            goto LAB_01b55c2a;
          }
        }
        else {
          lVar3 = arg1[1];
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)local_60;
            if (((char)lVar3 != '\0') && (plVar14 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01b55c60:
            *(void*)(arg1 + 1) = 1;
          }
          else {
            *arg1 = (int64_t)local_60;
            if (((char)lVar3 != '\0') && (plVar14 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01b55c2a:
            *(void*)(arg1 + 1) = 1;
            local_58 = '\0';
          }
        }
        if (*arg1 == 0) {
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01b56147:
          FUN_01e07010();
          if ((char)local_b0 != '\0') {
            (**(code **)(*this_ptr + 0xa50))();
          }
          if ((local_f8 & 1) != 0) {
            plVar14 = (int64_t *)this_ptr[0x48];
            local_b8 = 0;
            uVar15 = FUN_00d50b00();
            local_b8 = '\x01';
            local_c0 = this_ptr;
            (**(code **)(*plVar14 + 0x28))(uVar15,local_8c);
            if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (((char)local_68 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar2) && (plVar13 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar1) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_10c != '\0' || local_60 == (int64_t *)0x0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        iVar6 = FUN_01d3a5a0();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar6 == 6) goto LAB_01b56147;
        if ((local_f8 & 1) == 0) {
          plVar14 = (int64_t *)this_ptr[0x48];
          local_e8 = 0;
          uVar15 = FUN_00d50b00();
          local_e8 = '\x01';
          local_f0 = this_ptr;
          (**(code **)(*plVar14 + 0x20))(uVar15,local_8c);
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar14 = (int64_t *)this_ptr[0x48];
          local_d8 = 0;
          uVar15 = FUN_00d50b00();
          local_d8 = '\x01';
          local_e0 = this_ptr;
          uVar7 = (**(code **)(*plVar14 + 0x30))(uVar15,&local_e0);
          uVar11 = (undefined7)((uint64_t)plVar14 >> 8);
          if (local_60 == local_48) {
            if (((char)local_68 == '\0') && (local_60 != (int64_t *)0x0)) {
              plVar14 = local_48;
              if (local_58 != '\0') goto LAB_01b55d69;
              uVar8 = CONCAT71(uVar11,1);
              FUN_00d50b00();
            }
            else {
              uVar8 = local_68 & 0xffffffff;
            }
LAB_01b55dbb:
            if ((local_58 == '\0') || (local_60 == (int64_t *)0x0)) {
              local_68 = uVar8 & 0xffffffff;
            }
            else {
              FUN_00d50b20();
              local_68 = uVar8 & 0xffffffff;
            }
          }
          else {
            if (local_58 == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              uVar8 = CONCAT71(uVar11,1);
              if (((char)local_68 == '\0') || (local_48 == (int64_t *)0x0)) {
                local_48 = local_60;
              }
              else {
                FUN_00d50b20();
                local_48 = local_60;
              }
              goto LAB_01b55dbb;
            }
            plVar14 = local_60;
            if (((char)local_68 != '\0') && (local_48 != (int64_t *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
LAB_01b55d69:
            local_58 = '\0';
            local_68 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            local_48 = plVar14;
          }
          uVar8 = local_68;
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
          local_f8 = CONCAT71((int7)(uVar8 >> 8),1);
        }
        FUN_01d3abf0();
        FUN_01e466c0();
        plVar14 = (int64_t *)this_ptr[0x48];
        local_c8 = 0;
        FUN_00d50b00();
        local_c8 = '\x01';
        local_150 = local_60;
        local_148 = '\0';
        pplVar10 = &local_d0;
        local_d0 = this_ptr;
        (**(code **)(*plVar14 + 0x18))
                  (&local_150,pplVar10,local_8c,
                   (int)((float)((uint64_t)uVar16 >> 0x20) - extraout_XMM0_Db));
        if (local_60 == plVar12) {
          local_38 = plVar12;
          if ((!bVar1) && (local_60 != (int64_t *)0x0)) {
            if (local_58 != '\0') goto LAB_01b55ec1;
            bVar1 = true;
            FUN_00d50b00();
          }
LAB_01b55f0f:
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_38 = local_60;
              bVar1 = true;
            }
            else {
              local_38 = local_60;
              bVar1 = true;
            }
            goto LAB_01b55f0f;
          }
          local_38 = local_60;
          if ((bVar1) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01b55ec1:
          local_58 = '\0';
          bVar1 = true;
        }
        if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar12 = local_38;
        bVar4 = bVar2;
        plVar14 = plVar13;
      } while (local_38 == (int64_t *)0x0);
      if (plVar13 != (int64_t *)0x0) {
        local_138 = '\0';
        local_140 = plVar13;
        cVar5 = (**(code **)(*local_38 + 0x50))();
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') goto LAB_01b55bd7;
      }
      FUN_01e07010();
      local_128 = '\0';
      local_130 = local_38;
      (**(code **)(*this_ptr + 0x958))();
      if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e07010();
      if ((local_48 != (int64_t *)0x0) && ((local_160 & 1) != 0)) {
        (**(code **)(*local_48 + 0x3b8))();
      }
      uVar8 = (**(code **)(*this_ptr + 0xa38))();
      if ((char)uVar8 != '\0') {
        if (bVar9) {
          uVar8 = (**(code **)(*this_ptr + 0xa50))();
        }
        else {
          bVar9 = true;
          uVar8 = (**(code **)(*this_ptr + 0xa50))();
        }
      }
      if (local_48 != (int64_t *)0x0) {
        uVar8 = (**(code **)(*local_48 + 0x3c0))();
        local_160 = uVar8;
      }
      if (plVar13 == local_38) {
        local_b0 = CONCAT71((int7)((uint64_t)pplVar10 >> 8),1);
        if (bVar1) {
          if (!bVar2) {
            uVar7 = FUN_00d50b00();
            local_b0 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            bVar4 = true;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        if (bVar1) {
          uVar8 = FUN_00d50b00();
        }
        local_b0 = CONCAT71((int7)(uVar8 >> 8),1);
        bVar4 = bVar1;
        plVar14 = local_38;
        if ((bVar2) && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01b55bd7;
    }
  }
  local_120 = *arg1;
  local_118 = '\0';
  FUN_01e0b690();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  return;
}

