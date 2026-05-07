// Function: FUN_00555360
// Address: 00555360
// Size: 2568 bytes
// Class: MDTimeGridController

void FUN_00555360(uint64_t param_1,float param_2)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t **pplVar9;
  uint64_t uVar10;
  int64_t *in_RDX;
  int64_t *this_ptr;
  int64_t *plVar11;
  char cVar12;
  int64_t *plVar13;
  uint32_t uVar14;
  float fVar15;
  int64_t local_f0;
  char local_e8;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  uint local_a4;
  int64_t *local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  uint64_t local_58;
  int64_t *local_40;
  uint64_t local_38;
  
  if (*in_RDX == 0) {
    return;
  }
  local_98 = in_RDX;
  FUN_01e53c20();
  local_a0 = local_80;
  if ((((local_78 == '\0') && (local_80 != (int64_t *)0x0)) && (FUN_00d50b00(), local_78 != '\0'))
     && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar6 = FUN_01d3a5a0();
  if (iVar6 == 1) {
    uVar7 = FUN_01d3b630();
    local_a4 = (uint)CONCAT71((int7)((uint64_t)uVar7 >> 8),(int)uVar7 == 1);
  }
  else {
    local_a4 = 0;
  }
  FUN_00d4efa0();
  FUN_00c81c60();
  local_58 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = (int64_t *)0x0;
  if (local_58 != (int64_t *)0x0) {
    local_78 = '\0';
    local_80 = (int64_t *)0x0;
    local_70 = local_58;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    do {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar6 = -local_68._4_4_;
        }
        else {
          iVar6 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar6);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar6 = 0;
        }
        local_68 = CONCAT44(iVar6,(int)local_68);
      }
      lVar8 = (int64_t)(int)local_68;
      iVar6 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar6);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar6) {
        bVar2 = false;
        local_40 = (int64_t *)0x0;
        goto LAB_005556d4;
      }
      local_80 = *(int64_t **)(local_70[2] + 8 + lVar8 * 8);
      uVar14 = FUN_00d74120();
      local_c0 = 0;
      if (local_e8 == '\0') {
        if (local_f0 != 0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        local_e8 = '\0';
      }
      local_c0 = '\x01';
      local_c8 = local_f0;
      (**(code **)(*this_ptr + 0x88))(uVar14,&local_c8);
      plVar3 = local_90;
      FUN_000f5df0();
      pplVar9 = (int64_t **)&g_02802688;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar9 = &local_90;
        if (cVar4 == '\0') {
          pplVar9 = (int64_t **)&g_02802688;
        }
      }
      local_40 = *pplVar9;
      if (*(char *)(pplVar9 + 1) == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00(pplVar9,local_40);
        }
      }
      else {
        *(void*)(pplVar9 + 1) = 0;
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        iVar6 = (**(code **)(*local_40 + 0x920))();
        if (iVar6 != 0) goto LAB_005556b7;
        FUN_00d50b20();
      }
    } while( true );
  }
  bVar2 = false;
LAB_005556e6:
  FUN_01e561b0();
  FUN_01d8c6e0();
  plVar3 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_01e3f820();
    local_58 = (int64_t *)FUN_01e46ed0();
    FUN_01e3f820();
    uVar7 = FUN_01e46ed0();
    param_2 = local_58._4_4_ - (float)((uint64_t)uVar7 >> 0x20);
    FUN_01e5bd60((float)local_58 - (float)uVar7);
  }
  local_38 = 0;
  local_58 = (int64_t *)0x0;
  uVar14 = FUN_01e5b880();
  FUN_01e49570();
  FUN_01d3abf0();
  FUN_01f514b0();
  local_b8 = local_80;
  local_b0 = 0;
  if (local_78 == '\0') {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_b0 = '\x01';
  FUN_01edf2f0(uVar14,param_2);
  FUN_01e5ba50();
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = 0;
  local_58 = (int64_t *)0x0;
  FUN_01e5d9c0();
  local_38 = 0;
  local_58 = (int64_t *)0x0;
  FUN_01e5d070();
  local_38 = 0;
  local_58 = (int64_t *)0x0;
  plVar11 = (int64_t *)0x0;
  uVar10 = 0;
  while( true ) {
    FUN_01e42030();
    plVar1 = local_80;
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) break;
    FUN_01d3abf0();
    uVar14 = FUN_01e466c0();
    fVar15 = (float)FUN_01e3f820();
    cVar4 = FUN_00d05410(uVar14,fVar15,param_2);
    cVar12 = (char)uVar10;
    if (cVar4 == '\0') {
      param_2 = fVar15;
      if (plVar11 != (int64_t *)0x0) {
        if (cVar12 != '\0') {
          FUN_00d50b20();
        }
        uVar10 = 0;
        param_2 = fVar15;
      }
      plVar11 = (int64_t *)0x0;
      if (local_58 != (int64_t *)0x0) goto LAB_00555b44;
    }
    else {
      (**(code **)(*local_a0 + 0x490))(uVar14);
      plVar1 = local_80;
      FUN_000f5df0();
      pplVar9 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar9 = &local_80;
        if (cVar5 == '\0') {
          pplVar9 = (int64_t **)&g_02802688;
        }
      }
      plVar13 = *pplVar9;
      if (plVar11 == plVar13) {
        if ((cVar12 == '\0') && (plVar11 != (int64_t *)0x0)) {
          plVar13 = plVar11;
          if (*(char *)(pplVar9 + 1) != '\0') goto LAB_00555a9e;
          FUN_00d50b00();
          goto joined_r0x00555b24;
        }
        uVar10 = uVar10 & 0xffffffff;
        param_2 = fVar15;
      }
      else {
        if (*(char *)(pplVar9 + 1) == '\0') {
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((cVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((cVar12 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_00555a9e:
          *(void*)(pplVar9 + 1) = 0;
        }
joined_r0x00555b24:
        uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
        plVar11 = plVar13;
        param_2 = fVar15;
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != local_58) {
LAB_00555b44:
        if (local_58 != (int64_t *)0x0) {
          (**(code **)(*local_58 + 0x918))();
        }
        if (((char)uVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (((char)local_38 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 == (int64_t *)0x0) {
          if (local_40 != (int64_t *)0x0) goto LAB_00555bbf;
          local_38 = uVar10 & 0xffffffff;
          local_58 = (int64_t *)0x0;
        }
        else {
          (**(code **)(*plVar11 + 0x918))();
          if (local_40 != (int64_t *)0x0) {
LAB_00555bbf:
            plVar1 = local_40;
            (**(code **)(*local_40 + 0x918))();
            local_a4 = local_a4 & 0xff;
            if (plVar1 != plVar11) {
              local_a4 = 1;
            }
          }
          local_38 = uVar10 & 0xffffffff;
          local_58 = plVar11;
        }
      }
    }
    (**(code **)(*local_a0 + 0x658))();
    plVar13 = local_80;
    plVar1 = (int64_t *)*local_98;
    if (plVar1 == local_80) {
      if (((char)local_98[1] != '\0') || (local_80 == (int64_t *)0x0)) goto LAB_00555cb0;
      if (local_78 == '\0') {
        FUN_00d50b00();
        goto LAB_00555ca5;
      }
LAB_00555c51:
      *(void*)(local_98 + 1) = 1;
    }
    else {
      lVar8 = local_98[1];
      if (local_78 != '\0') {
        *local_98 = (int64_t)local_80;
        if (((char)lVar8 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00555c51;
      }
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *local_98 = (int64_t)plVar13;
      if (((char)lVar8 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00555ca5:
      *(void*)(local_98 + 1) = 1;
LAB_00555cb0:
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((*local_98 == 0) ||
        ((((local_a4 & 1) != 0 && (iVar6 = FUN_01d3a5a0(), iVar6 == 6)) && (cVar4 == '\x01')))) ||
       (iVar6 = FUN_01d3a5a0(), iVar6 == 1)) goto LAB_00555d1a;
  }
  uVar10 = uVar10 & 0xffffffff;
LAB_00555d1a:
  if (local_58 != (int64_t *)0x0) {
    FUN_01d11e80();
  }
  FUN_01d7c320();
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_005556b7:
  FUN_00d50b00();
  FUN_00d50b20();
  bVar2 = true;
LAB_005556d4:
  FUN_00559a70();
  FUN_00d50b20();
  goto LAB_005556e6;
}

