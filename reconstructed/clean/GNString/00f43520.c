// Function: FUN_00f43520
// Address: 00f43520
// Size: 910 bytes
// Class: GNString
// String references:
//   "insufficient memory"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00f43520(uint64_t param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  int iVar7;
  int unaff_ESI;
  int iVar8;
  int64_t this_ptr;
  code *pcVar9;
  uint32_t uVar10;
  byte bVar11;
  char *local_res8;
  int local_res10;
  
  if (local_res8 == (char *)0x0) {
    return -6;
  }
  if (*local_res8 != '1') {
    return -6;
  }
  if (local_res10 != 0x70) {
    return -6;
  }
  iVar2 = -2;
  if (this_ptr == 0) {
    return -2;
  }
  *(void*)(this_ptr + 0x30) = 0;
  pcVar9 = *(code **)(this_ptr + 0x40);
  if (pcVar9 == 0x0) {
    pcVar9 = FUN_00f4d840;
    *(code **)(this_ptr + 0x40) = FUN_00f4d840;
    *(void*)(this_ptr + 0x50) = 0;
    lVar4 = *(int64_t *)(this_ptr + 0x48);
  }
  else {
    lVar4 = *(int64_t *)(this_ptr + 0x48);
  }
  if (lVar4 == 0) {
    *(code **)(this_ptr + 0x48) = FUN_00f4d850;
  }
  iVar1 = 6;
  if (unaff_ESI != -1) {
    iVar1 = unaff_ESI;
  }
  iVar8 = (int)param_1;
  if (iVar8 < 0) {
    if (iVar8 < -0xf) {
      return -2;
    }
    uVar6 = -iVar8;
    uVar10 = 0;
  }
  else {
    if (iVar8 < 0x10) {
      uVar10 = 1;
      bVar11 = 0;
      goto LAB_00f435e5;
    }
    uVar6 = iVar8 - 0x10;
    uVar10 = 2;
  }
  param_1 = (uint64_t)uVar6;
  bVar11 = 1;
LAB_00f435e5:
  iVar8 = (int)param_1;
  if (((((param_3 - 1U < 9) && (param_2 == 8)) && (7 < iVar8)) &&
      (((iVar8 < 0x10 && (-1 < iVar1)) && ((iVar1 < 10 && ((-1 < param_4 && (param_4 < 5)))))))) &&
     (!(bool)(iVar8 == 8 & bVar11))) {
    iVar7 = 9;
    if (iVar8 != 8) {
      iVar7 = iVar8;
    }
    plVar3 = (int64_t *)(*pcVar9)(param_1,&UNK_00001740);
    iVar2 = -4;
    if (plVar3 != (int64_t *)0x0) {
      *(int64_t **)(this_ptr + 0x38) = plVar3;
      *plVar3 = this_ptr;
      *(void*)(plVar3 + 1) = 0x2a;
      *(void*)(plVar3 + 6) = uVar10;
      iVar8 = 1 << ((byte)iVar7 & 0x1f);
      plVar3[7] = 0;
      *(int *)((int64_t)plVar3 + 0x54) = iVar7;
      *(int *)(plVar3 + 10) = iVar8;
      *(int *)(plVar3 + 0xb) = iVar8 + -1;
      iVar7 = param_3 + 7;
      *(int *)(plVar3 + 0x11) = iVar7;
      iVar8 = 1 << ((byte)iVar7 & 0x1f);
      *(int *)((int64_t)plVar3 + 0x84) = iVar8;
      *(int *)((int64_t)plVar3 + 0x8c) = iVar8 + -1;
      *(uint *)(plVar3 + 0x12) = (param_3 + 9U & 0xff) / 3;
      lVar4 = (**(code **)(this_ptr + 0x40))(iVar7,2);
      plVar3[0xc] = lVar4;
      lVar4 = (**(code **)(this_ptr + 0x40))();
      plVar3[0xe] = lVar4;
      lVar4 = (**(code **)(this_ptr + 0x40))();
      bVar11 = (char)param_3 + 6;
      plVar3[0xf] = lVar4;
      plVar3[0x2e7] = 0;
      *(int *)(plVar3 + 0x2e1) = 1 << (bVar11 & 0x1f);
      lVar4 = (**(code **)(this_ptr + 0x40))(bVar11,4);
      plVar3[2] = lVar4;
      uVar6 = *(uint *)(plVar3 + 0x2e1);
      plVar3[3] = (uint64_t)uVar6 * 4;
      if ((((plVar3[0xc] == 0) || (plVar3[0xe] == 0)) || (plVar3[0xf] == 0)) || (lVar4 == 0)) {
        *(void*)(plVar3 + 1) = 0x29a;
        *(void*)(this_ptr + 0x30) = g_02593e60;
        FUN_00f438b0();
      }
      else {
        plVar3[0x2e0] = lVar4 + (uint64_t)uVar6;
        *(uint *)(plVar3 + 0x2e2) = uVar6 * 3 + -3;
        *(int *)((int64_t)plVar3 + 0xc4) = iVar1;
        *(int *)(plVar3 + 0x19) = param_4;
        *(void*)(plVar3 + 9) = 8;
        iVar2 = FUN_00f43e00();
        if (iVar2 == 0) {
          lVar4 = *(int64_t *)(this_ptr + 0x38);
          *(uint64_t *)(lVar4 + 0x68) = (uint64_t)*(uint *)(lVar4 + 0x50) * 2;
          *(void*)(*(int64_t *)(lVar4 + 0x78) + (uint64_t)(*(int *)(lVar4 + 0x84) - 1) * 2)
               = 0;
          ___bzero();
          lVar5 = (int64_t)*(int *)(lVar4 + 0xc4) * 0x10;
          *(uint *)(lVar4 + 0xc0) = (uint)*(ushort *)(&g_02593d32 + lVar5);
          *(uint *)(lVar4 + 0xcc) = (uint)*(ushort *)(&g_02593d30 + lVar5);
          *(uint *)(lVar4 + 0xd0) = (uint)*(ushort *)(&g_02593d34 + lVar5);
          *(uint *)(lVar4 + 0xbc) = (uint)*(ushort *)(&g_02593d36 + lVar5);
          *(void*)(lVar4 + 0x98) = 0;
          *(void*)(lVar4 + 0xb4) = 0x200000000;
          *(void*)(&g_0000172c + lVar4) = 0;
          *(void*)(lVar4 + 0xa0) = 2;
          *(void*)(lVar4 + 0xa8) = 0;
          *(void*)(lVar4 + 0x80) = 0;
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

