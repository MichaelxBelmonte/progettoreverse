// Function: FUN_01d79730
// Address: 01d79730
// Size: 2062 bytes
// Class: GNMultipleValue

void FUN_01d79730(uint64_t param_1,uint32_t param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t local_c8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_60;
  char local_58;
  char local_31;
  
  iVar7 = FUN_01d3a5a0();
  if (iVar7 != 1) goto LAB_01d79d9c;
  iVar7 = FUN_01d3b630();
  if (iVar7 != 1) {
    iVar7 = FUN_01d3b630();
    if (iVar7 != 2) goto LAB_01d79d9c;
    (**(code **)(*this_ptr + 0x6f0))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 != 0) goto LAB_01d79d9c;
  }
  cVar5 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar5 == '\0') {
    return;
  }
  bVar2 = true;
  if ((char)this_ptr[0x4a] == '\0') {
LAB_01d797b7:
    cVar5 = (char)this_ptr[0x45];
  }
  else {
    if (this_ptr[0x44] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      goto LAB_01d797b7;
    }
    bVar2 = false;
    cVar5 = (char)this_ptr[0x45];
  }
  if ((cVar5 != '\0') && (iVar7 = FUN_01d3b630(), iVar7 == 1)) {
    FUN_01d3abf0();
    local_c8 = FUN_01e466c0();
    FUN_00d50b00();
    if (*(int *)((int64_t)this_ptr + 500) == 2) {
      *(void*)(this_ptr + 0x31) = 1;
      *(void*)(this_ptr + 0x29) = 1;
      FUN_01d11e80();
    }
    bVar1 = 0;
    bVar3 = false;
    lVar9 = 0;
    cVar5 = '\0';
LAB_01d79850:
    if (*arg1 != 0) {
      FUN_01d3abf0();
      local_c8 = FUN_01e466c0();
    }
    if (bVar3) {
      bVar3 = true;
      bVar11 = false;
      uVar12 = param_2;
    }
    else {
      uVar12 = FUN_01e3f820();
      cVar6 = FUN_00d05410(local_c8,uVar12,param_2);
      bVar11 = true;
      if (cVar6 == '\0') {
        bVar11 = *(int *)((int64_t)this_ptr + 500) == 2;
      }
    }
    *(bool *)(this_ptr + 0x31) = bVar11;
    if ((bool)(bVar1 & 1) != bVar11) {
      if (*(char *)((int64_t)this_ptr + 0x16b) != '\0') {
        *(uint *)(this_ptr + 0x29) = (uint)((int)this_ptr[0x29] == 0);
      }
      (**(code **)(*this_ptr + 0x620))();
      bVar1 = *(byte *)(this_ptr + 0x31);
    }
    if (bVar3) {
      bVar2 = false;
      goto LAB_01d79ce4;
    }
    lVar10 = *arg1;
    local_31 = (char)arg1[1];
    if (lVar9 == lVar10) {
      lVar10 = lVar9;
      if (((local_31 != '\0') && (cVar5 == '\0')) && (lVar9 != 0)) {
        local_31 = '\x01';
        FUN_00d50b00();
        goto LAB_01d79986;
      }
      uVar13 = (uint32_t)g_023908d0;
      param_2 = uVar12;
    }
    else {
      if ((local_31 != '\0') && (lVar10 != 0)) {
        FUN_00d50b00();
      }
      if ((cVar5 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
LAB_01d79986:
      uVar13 = (uint32_t)g_023908d0;
      param_2 = uVar12;
      cVar5 = local_31;
    }
    if (!bVar2) {
      uVar13 = (uint32_t)g_023b19a0;
    }
    (**(code **)(*this_ptr + 0x660))(uVar13,0);
    lVar9 = *arg1;
    if (lVar9 == local_60) {
      if (((char)arg1[1] != '\0') || (local_60 == 0)) goto LAB_01d79a8f;
      if (local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_01d79a89;
      }
LAB_01d79a33:
      *(void*)(arg1 + 1) = 1;
    }
    else {
      lVar4 = arg1[1];
      if (local_58 != '\0') {
        *arg1 = local_60;
        if (((char)lVar4 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d79a33;
      }
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_60;
      if (((char)lVar4 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
LAB_01d79a89:
      *(void*)(arg1 + 1) = 1;
LAB_01d79a8f:
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (*arg1 == 0) {
      if (!bVar2) goto LAB_01d79cd7;
      if (lVar10 == 0) {
        if (cVar5 == '\0') {
          bVar3 = true;
          goto LAB_01d79ac4;
        }
        bVar3 = true;
        cVar6 = (char)arg1[1];
      }
      else {
        if ((cVar5 != '\0') && (lVar10 != 0)) {
          FUN_00d50b00();
        }
        *arg1 = lVar10;
        *(char *)(arg1 + 1) = cVar5;
        bVar3 = true;
        cVar6 = cVar5;
      }
    }
    else {
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 6) goto LAB_01d79cd7;
LAB_01d79ac4:
      cVar6 = (char)arg1[1];
    }
    lVar9 = *arg1;
    if (lVar10 == lVar9) {
      bVar2 = false;
      lVar9 = lVar10;
      if (((cVar6 != '\0') && (bVar2 = false, cVar5 == '\0')) && (cVar5 = '\0', lVar10 != 0)) {
        cVar5 = '\x01';
        FUN_00d50b00();
        bVar2 = false;
      }
    }
    else {
      if ((cVar6 != '\0') && (lVar9 != 0)) {
        FUN_00d50b00();
      }
      bVar2 = false;
      bVar11 = cVar5 != '\0';
      cVar5 = cVar6;
      if ((bVar11) && (lVar10 != 0)) {
        bVar2 = false;
        FUN_00d50b20();
      }
    }
    goto LAB_01d79850;
  }
  cVar5 = '\0';
  lVar9 = 0;
  lVar10 = this_ptr[0x44];
  goto joined_r0x01d79d58;
LAB_01d79cd7:
  bVar2 = true;
  lVar9 = lVar10;
LAB_01d79ce4:
  if ((char)this_ptr[0x31] != '\0') {
    if (*(int *)((int64_t)this_ptr + 500) == 2) {
      *(void*)(this_ptr + 0x29) = 0;
    }
    FUN_01d11e80();
  }
  *(void*)(this_ptr + 0x31) = 0;
  (**(code **)(*this_ptr + 0x620))();
  FUN_00d50b20();
  if (bVar2) {
    if (cVar5 == '\0') {
      return;
    }
    if (lVar9 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  lVar10 = this_ptr[0x44];
joined_r0x01d79d58:
  if (lVar10 == 0) {
    if (this_ptr[0x46] != 0) {
      FUN_01d7a120();
    }
  }
  else {
    (**(code **)(*this_ptr + 0xac8))();
  }
  if ((cVar5 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
LAB_01d79d9c:
  if (*arg1 != 0) {
    iVar7 = FUN_01d3a5a0();
    if ((iVar7 == 2) && (uVar8 = FUN_01d3b590(), (uVar8 & 0xc00) != 0)) {
      if (this_ptr[0x44] == 0) {
        if (this_ptr[0x46] != 0) {
          FUN_01d7a120();
        }
      }
      else {
        (**(code **)(*this_ptr + 0xac8))();
      }
    }
    else if (*arg1 != 0) {
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 2) {
        FUN_01d3b5d0();
        if (local_60 == 0) {
          cVar5 = '\0';
        }
        else {
          FUN_01d3b5d0();
          lVar9 = g_027f3310;
          if (g_027f3310 != 0) {
            FUN_00d50b00();
          }
          cVar5 = (**(code **)(*local_b0 + 0x50))();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          FUN_01cf0820();
          return;
        }
      }
      if ((*arg1 != 0) && (iVar7 = FUN_01d3a5a0(), iVar7 == 7)) {
        FUN_01cf0820();
      }
    }
  }
  return;
}

