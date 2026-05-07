// Function: FUN_00d8b9c0
// Address: 00d8b9c0
// Size: 1417 bytes
// Class: GNString
// String references:
//   "GNString has no data!"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d8b9c0(void)

{
  ushort *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  void*arg1;
  int64_t lVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  short local_42;
  int local_40;
  uint32_t uStack_3c;
  char local_38;
  
  cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
  local_58 = g_027815c0;
  lVar5 = g_027648d0;
  if (cVar2 != '\0') {
    plVar9 = (int64_t *)*arg1;
    uVar13 = extraout_XMM0_Qa;
    if (g_027648d0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_98 = lVar5;
    local_90 = '\x01';
    uVar13 = (**(code **)(*plVar9 + 0x580))(uVar13,&local_98);
    lVar5 = CONCAT44(uStack_3c,local_40);
    if (local_38 == '\0') {
      if (((lVar5 != 0) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
         (CONCAT44(uStack_3c,local_40) != 0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar7 = g_027815b0;
    lVar8 = g_027815a8;
    if (lVar5 == 0) {
      if (g_027815a8 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_88 = lVar8;
      local_80 = '\x01';
      FUN_00cc7b40(uVar13,g_025908a0);
      if (local_80 == '\0') {
        return;
      }
      if (local_88 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    plVar9 = (int64_t *)*arg1;
    if (g_027815b0 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar7;
    local_70 = '\x01';
    iVar4 = (**(code **)(*plVar9 + 0x520))();
    uVar13 = extraout_XMM0_Qa_00;
    if ((local_70 != '\0') && (local_78 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (iVar4 == 5) {
      iVar4 = *(int *)(lVar5 + 0x18);
      *(int *)(this_ptr + 0x20) = iVar4 / 2 + -1;
      uVar13 = FUN_00e83010();
      *(void*)(this_ptr + 0x18) = uVar13;
      FUN_00e7dbc0(extraout_XMM0_Qa_02,(int64_t)iVar4);
      local_68 = g_027815b8;
      plVar9 = (int64_t *)*arg1;
      if (g_027815b8 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      iVar4 = (**(code **)(*plVar9 + 0x520))();
      uVar13 = extraout_XMM0_Qa_03;
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (iVar4 == 1) {
        FUN_00e7d230(uVar13,3);
      }
      if ((*(int64_t *)(this_ptr + 0x10) != 0) &&
         (*(int64_t *)(this_ptr + 0x10) != this_ptr + 0x28)) {
        FUN_00e83070();
      }
    }
    else {
      if (iVar4 == 0) {
        iVar4 = *(int *)(lVar5 + 0x18);
        if ((int64_t)iVar4 < 0x19) {
          lVar5 = this_ptr + 0x28;
        }
        else {
          lVar5 = FUN_00e83010();
          uVar13 = extraout_XMM0_Qa_04;
        }
        *(int64_t *)(this_ptr + 0x10) = lVar5;
        FUN_00e7dbc0(uVar13,(int64_t)iVar4);
        goto LAB_00d8be13;
      }
      iVar6 = *(int *)(lVar5 + 0x18);
      uVar13 = FUN_00e83010();
      *(void*)(this_ptr + 0x18) = uVar13;
      iVar4 = FUN_00da3950(iVar6 + -1,iVar4);
      *(int *)(this_ptr + 0x20) = iVar4;
      *(void*)(*(int64_t *)(this_ptr + 0x18) + (int64_t)iVar4 * 2) = 0;
      if ((*(int64_t *)(this_ptr + 0x10) != 0) &&
         (*(int64_t *)(this_ptr + 0x10) != this_ptr + 0x28)) {
        FUN_00e83070();
      }
    }
    *(void*)(this_ptr + 0x10) = 0;
LAB_00d8be13:
    *(byte *)(this_ptr + 0x24) = *(byte *)(this_ptr + 0x24) & 0xfe;
    FUN_00d50b20();
    return;
  }
  plVar9 = (int64_t *)*arg1;
  if (g_027815c0 != 0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  iVar4 = (**(code **)(*plVar9 + 0x598))();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = (int64_t *)*arg1;
  if (1 < iVar4) {
    iVar4 = (**(code **)(*plVar9 + 0x428))();
    if (iVar4 == 5) {
      (**(code **)(*(int64_t *)*arg1 + 0x478))(extraout_XMM0_Qa_01,2);
      lVar5 = (**(code **)(*(int64_t *)*arg1 + 0x480))();
      *(int64_t *)(this_ptr + 0x18) = lVar5;
      auVar14 = g_023de250;
      iVar4 = local_40 / 2 + -1;
      if ((local_42 == -2) && (3 < local_40)) {
        iVar6 = 1;
        if (1 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 - 1U < 0xf) {
          uVar11 = 0;
        }
        else {
          uVar12 = (uint64_t)(iVar6 - 1U) + 1;
          uVar11 = uVar12 & 0xfffffffffffffff0;
          uVar10 = (uVar11 - 0x10 >> 4) + 1;
          if (uVar11 - 0x10 == 0) {
            lVar8 = 0;
          }
          else {
            lVar7 = -(uVar10 & 0xfffffffffffffffe);
            lVar8 = 0;
            do {
              auVar15 = pshufb(*(uint8_t (*) [16])(lVar5 + lVar8 * 2),auVar14);
              auVar16 = pshufb(*(uint8_t (*) [16])(lVar5 + 0x10 + lVar8 * 2),auVar14);
              *(uint8_t (*) [16])(lVar5 + lVar8 * 2) = auVar15;
              *(uint8_t (*) [16])(lVar5 + 0x10 + lVar8 * 2) = auVar16;
              auVar15 = pshufb(*(uint8_t (*) [16])(lVar5 + 0x20 + lVar8 * 2),auVar14);
              auVar16 = pshufb(*(uint8_t (*) [16])(lVar5 + 0x30 + lVar8 * 2),auVar14);
              *(uint8_t (*) [16])(lVar5 + 0x20 + lVar8 * 2) = auVar15;
              *(uint8_t (*) [16])(lVar5 + 0x30 + lVar8 * 2) = auVar16;
              lVar8 = lVar8 + 0x20;
              lVar7 = lVar7 + 2;
            } while (lVar7 != 0);
          }
          if ((uVar10 & 1) != 0) {
            auVar14 = pshufb(*(uint8_t (*) [16])(lVar5 + lVar8 * 2),g_023de250);
            auVar15 = pshufb(*(uint8_t (*) [16])(lVar5 + 0x10 + lVar8 * 2),g_023de250);
            *(uint8_t (*) [16])(lVar5 + lVar8 * 2) = auVar14;
            *(uint8_t (*) [16])(lVar5 + 0x10 + lVar8 * 2) = auVar15;
          }
          if (uVar12 == uVar11) goto LAB_00d8befd;
          lVar5 = lVar5 + uVar11 * 2;
        }
        lVar8 = 0;
        do {
          puVar1 = (ushort *)(lVar5 + lVar8 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          lVar8 = lVar8 + 1;
        } while (iVar6 - (int)uVar11 != (int)lVar8);
      }
LAB_00d8befd:
      *(int *)(this_ptr + 0x20) = iVar4;
      local_40 = iVar4;
      if ((*(int64_t *)(this_ptr + 0x10) != 0) &&
         (*(int64_t *)(this_ptr + 0x10) != this_ptr + 0x28)) {
        FUN_00e83070();
      }
      *(void*)(this_ptr + 0x10) = 0;
      goto LAB_00d8bf20;
    }
    if (iVar4 != 0) {
      (**(code **)(*(int64_t *)*arg1 + 0x480))();
      local_40 = local_40 + -1;
      uVar13 = FUN_00e83010();
      *(void*)(this_ptr + 0x18) = uVar13;
      local_40 = FUN_00da3950(local_40,iVar4);
      *(void*)(*(int64_t *)(this_ptr + 0x18) + (int64_t)local_40 * 2) = 0;
      *(int *)(this_ptr + 0x20) = local_40;
      if ((*(int64_t *)(this_ptr + 0x10) != 0) &&
         (*(int64_t *)(this_ptr + 0x10) != this_ptr + 0x28)) {
        FUN_00e83070();
      }
      *(void*)(this_ptr + 0x10) = 0;
      FUN_00e83070();
      goto LAB_00d8bf20;
    }
    plVar9 = (int64_t *)*arg1;
  }
  uVar13 = (**(code **)(*plVar9 + 0x480))();
  *(void*)(this_ptr + 0x10) = uVar13;
  if (local_40 < 0x19) {
    FUN_00e7dbc0();
    FUN_00e83070();
    *(int64_t *)(this_ptr + 0x10) = this_ptr + 0x28;
  }
LAB_00d8bf20:
  bVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(byte *)(this_ptr + 0x24) = *(byte *)(this_ptr + 0x24) & 0xfe | bVar3;
  return;
}

