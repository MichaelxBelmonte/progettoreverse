// Function: FUN_00d902b0
// Address: 00d902b0
// Size: 658 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d902b0(uint64_t param_1,int param_2)

{
  ushort *puVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *arg1;
  uint64_t uVar10;
  int64_t this_ptr;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar13;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  int local_38;
  int local_34;
  
  local_38 = 0;
  local_34 = -1;
  if (*(int *)(*arg1 + 0x18) == 0) goto LAB_00d904d1;
  cVar4 = FUN_00da48b0(&local_38,&local_34);
  auVar14 = g_023de250;
  uVar13 = extraout_XMM0_Qa;
  if (cVar4 == '\0') {
    if (param_2 != 5) {
      iVar7 = *(int *)(*arg1 + 0x18);
      iVar5 = param_2;
LAB_00d90481:
      local_34 = iVar5;
      FUN_00d8dd20(local_34,iVar7);
      iVar7 = *(int *)(*arg1 + 0x18);
      if (iVar7 == 0) goto LAB_00d904d1;
      iVar5 = *(int *)(this_ptr + 0x20);
      if (iVar5 == -1) {
        if (*(int64_t *)(this_ptr + 0x10) != 0) {
          iVar5 = FUN_00e7dde0();
          goto joined_r0x00d904bb;
        }
      }
      else {
joined_r0x00d904bb:
        if (iVar5 != 0) goto LAB_00d904d1;
        iVar7 = *(int *)(*arg1 + 0x18);
      }
      FUN_00d8dd20(0,iVar7);
      goto LAB_00d904d1;
    }
LAB_00d903e6:
    local_38 = 0;
    local_34 = 5;
  }
  else {
    if ((local_34 == -1) && (param_2 == 5)) goto LAB_00d903e6;
    if (local_34 != 5) {
      iVar7 = *(int *)(*arg1 + 0x18);
      iVar5 = param_2;
      if ((local_34 == 6) && (cVar4 = FUN_00da4890(), iVar5 = local_34, cVar4 != '\0')) {
        iVar7 = iVar7 + -3;
      }
      goto LAB_00d90481;
    }
    if (local_38 != 0) {
      iVar7 = *(int *)(*arg1 + 0x18);
      if (2 < iVar7 + 1U) {
        lVar6 = *(int64_t *)(*arg1 + 0x10);
        iVar7 = iVar7 / 2;
        if (0xe < iVar7 - 1U) {
          uVar8 = (uint64_t)(iVar7 - 1U) + 1;
          uVar12 = uVar8 & 0xfffffffffffffff0;
          uVar10 = (uVar12 - 0x10 >> 4) + 1;
          if (uVar12 - 0x10 == 0) {
            lVar9 = 0;
          }
          else {
            lVar11 = -(uVar10 & 0xfffffffffffffffe);
            lVar9 = 0;
            uVar13 = (uint64_t)g_023de250;
            do {
              auVar15 = pshufb(*(uint8_t (*) [16])(lVar6 + lVar9 * 2),auVar14);
              auVar16 = pshufb(*(uint8_t (*) [16])(lVar6 + 0x10 + lVar9 * 2),auVar14);
              *(uint8_t (*) [16])(lVar6 + lVar9 * 2) = auVar15;
              *(uint8_t (*) [16])(lVar6 + 0x10 + lVar9 * 2) = auVar16;
              auVar15 = pshufb(*(uint8_t (*) [16])(lVar6 + 0x20 + lVar9 * 2),auVar14);
              auVar16 = pshufb(*(uint8_t (*) [16])(lVar6 + 0x30 + lVar9 * 2),auVar14);
              *(uint8_t (*) [16])(lVar6 + 0x20 + lVar9 * 2) = auVar15;
              *(uint8_t (*) [16])(lVar6 + 0x30 + lVar9 * 2) = auVar16;
              lVar9 = lVar9 + 0x20;
              lVar11 = lVar11 + 2;
            } while (lVar11 != 0);
          }
          if ((uVar10 & 1) != 0) {
            auVar14 = pshufb(*(uint8_t (*) [16])(lVar6 + lVar9 * 2),g_023de250);
            uVar13 = auVar14._0_8_;
            auVar15 = pshufb(*(uint8_t (*) [16])(lVar6 + 0x10 + lVar9 * 2),g_023de250);
            *(uint8_t (*) [16])(lVar6 + lVar9 * 2) = auVar14;
            *(uint8_t (*) [16])(lVar6 + 0x10 + lVar9 * 2) = auVar15;
          }
          if (uVar8 == uVar12) goto LAB_00d903f4;
          lVar6 = lVar6 + uVar12 * 2;
          iVar7 = iVar7 - (int)uVar12;
        }
        lVar9 = 0;
        do {
          puVar1 = (ushort *)(lVar6 + lVar9 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          lVar9 = lVar9 + 1;
        } while (iVar7 != (int)lVar9);
      }
    }
  }
LAB_00d903f4:
  uVar3 = *(uint *)(*arg1 + 0x18);
  if (((int)uVar3 < 2) ||
     ((sVar2 = **(short **)(*arg1 + 0x10), sVar2 != -2 && (sVar2 != -0x101)))) {
    FUN_00d8ea20(uVar13,(int)uVar3 / 2);
  }
  else {
    FUN_00d8ea20(uVar13,(uVar3 >> 1) - 1);
  }
LAB_00d904d1:
  *(byte *)(this_ptr + 0x24) = *(byte *)(this_ptr + 0x24) & 0xfe;
  return;
}

