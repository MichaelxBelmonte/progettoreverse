// Function: FUN_00c70bc0
// Address: 00c70bc0
// Size: 1012 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00c70bc0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint32_t uVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t *this_ptr;
  undefined7 uVar12;
  
  plVar11 = (int64_t *)*this_ptr;
  if (plVar11 != (int64_t *)0x0) {
    FUN_00053ac0();
    (**(code **)(*plVar11 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar11 = this_ptr;
    if (cVar4 == '\0') {
      plVar11 = &g_02802688;
    }
    lVar3 = plVar11[1];
    if (((char)lVar3 != '\0') && (*plVar11 != 0)) {
      FUN_00d50b00();
LAB_00c70c2d:
      uVar8 = FUN_00d45ad0();
      this_ptr = (int64_t *)(uint64_t)uVar8;
      if ((char)lVar3 != '\0') {
        FUN_00d50b20();
      }
      goto LAB_00c70ef4;
    }
    if (*plVar11 != 0) goto LAB_00c70c2d;
    plVar11 = (int64_t *)*this_ptr;
    if ((g_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      ___cxa_guard_release();
    }
    if (plVar11 == (int64_t *)0x0) {
LAB_00c70c83:
      this_ptr = &g_02802688;
    }
    else {
      (**(code **)(*plVar11 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00c70c83;
    }
    lVar3 = *this_ptr;
    cVar4 = (char)this_ptr[1];
    if ((cVar4 == '\0') || (lVar3 == 0)) {
      if (lVar3 != 0) goto LAB_00c70cb2;
joined_r0x00c70cff:
      bVar2 = true;
      bVar1 = true;
    }
    else {
      FUN_00d50b00();
      FUN_00d50b00();
LAB_00c70cb2:
      uVar9 = FUN_00d8c7a0();
      uVar12 = (undefined7)((uint64_t)this_ptr >> 8);
      switch(uVar9) {
      case 1:
        cVar5 = FUN_00d8ca70();
        if (cVar5 != '0') {
          if (cVar5 == '1') goto LAB_00c70cf0;
          break;
        }
LAB_00c70e7d:
        bVar1 = false;
        this_ptr = (int64_t *)0x0;
        goto LAB_00c70e86;
      case 2:
        cVar5 = FUN_00d8ca70();
        if (cVar5 == 'n') {
          bVar7 = FUN_00d8ca70();
        }
        else {
          if (cVar5 != 'N') break;
          bVar7 = FUN_00d8ca70();
          bVar7 = bVar7 | 0x20;
        }
        if (bVar7 == 0x6f) goto LAB_00c70e7d;
        break;
      case 3:
        cVar5 = FUN_00d8ca70();
        if (cVar5 == 'y') {
          cVar5 = FUN_00d8ca70();
          if ((cVar5 == 'e') && (cVar5 = FUN_00d8ca70(), cVar5 == 's')) goto LAB_00c70cf0;
        }
        else if (cVar5 == 'Y') {
          cVar5 = FUN_00d8ca70();
          cVar6 = FUN_00d8ca70();
          this_ptr = (int64_t *)CONCAT71(uVar12,1);
          if (((cVar5 == 'E') && (cVar6 == 'S')) || ((cVar5 == 'e' && (cVar6 == 's')))) {
            bVar1 = false;
            goto LAB_00c70e86;
          }
        }
        break;
      case 4:
        cVar5 = FUN_00d8ca70();
        if (((cVar5 == 't') &&
            ((cVar5 = FUN_00d8ca70(), cVar5 == 'r' && (cVar5 = FUN_00d8ca70(), cVar5 == 'u')))) &&
           (cVar5 = FUN_00d8ca70(), cVar5 == 'e')) {
LAB_00c70cf0:
          this_ptr = (int64_t *)CONCAT71(uVar12,1);
          bVar1 = false;
          goto LAB_00c70e86;
        }
        break;
      case 5:
        cVar5 = FUN_00d8ca70();
        if ((((cVar5 == 'f') && (cVar5 = FUN_00d8ca70(), cVar5 == 'a')) &&
            (cVar5 = FUN_00d8ca70(), cVar5 == 'l')) &&
           ((cVar5 = FUN_00d8ca70(), cVar5 == 's' && (cVar5 = FUN_00d8ca70(), cVar5 == 'e'))))
        goto LAB_00c70e7d;
      }
      bVar1 = true;
LAB_00c70e86:
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
      if (bVar1) goto joined_r0x00c70cff;
      bVar2 = false;
      bVar1 = false;
    }
    if ((cVar4 != '\0') && (bVar1 = bVar2, lVar3 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027720b0;
    if (!bVar1) goto LAB_00c70ef4;
    if (g_027720b0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  this_ptr = (int64_t *)0x0;
LAB_00c70ef4:
  return (uint64_t)this_ptr & 0xffffff01;
}

