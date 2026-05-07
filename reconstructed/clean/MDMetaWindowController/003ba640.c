// Function: FUN_003ba640
// Address: 003ba640
// Size: 1251 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_003ba640(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t in_stack_ffffffffffffff80;
  char local_78;
  int64_t *local_58;
  char local_50 [32];
  
  FUN_00075b90();
  if (local_78 == '\0') {
    if (in_stack_ffffffffffffff80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_004f9670();
  local_50[8] = local_50[0];
  pcVar3 = local_50 + 8;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (in_stack_ffffffffffffff80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != 0)) {
    FUN_00d50b20();
  }
  FUN_003ba530();
  local_50[0x10] = local_50[0];
  pcVar3 = local_50 + 0x10;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (int64_t *)0x0) goto LAB_003baac7;
  cVar1 = FUN_003b7990();
  if (cVar1 != '\0') {
    FUN_003b7d00();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_58 + 0x450))();
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_00d50b00();
    local_50[0x18] = '\0';
    plVar5 = this_ptr;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_58 == plVar5) {
        if (((local_50[0x18] == '\0') && (local_58 != (int64_t *)0x0)) && (local_50[0] != '\0')) {
          local_50[0x18] = 1;
          goto LAB_003ba827;
        }
      }
      else {
        plVar5 = local_58;
        if (local_50[0] == '\0') {
          if (local_50[0x18] == '\0') {
            pcVar3 = local_50 + 0x18;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_50 + 0x18;
          }
        }
        else {
          if (local_50[0x18] != '\0') {
            FUN_00d50b20();
          }
          local_50[0x18] = 1;
LAB_003ba827:
          local_50[0x18] = '\x01';
          pcVar3 = local_50;
        }
        *pcVar3 = '\0';
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026fddb0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_026e0ab8 = FUN_00015ff0();
        g_026e0aa0 = "MDMetaWindowController";
        g_026e0aa8 = 0x198;
        g_026e0ab0 = FUN_0006dea0;
        g_026e0ac0 = 0;
        ram_00000000026e0ac8 = 0;
        g_026e0ad0 = 0;
        g_026e0b48 = 0;
        ram_00000000026e0b50 = 0;
        g_026e0b58 = 0;
        g_026e0b5a = 1;
        g_026e0ad8 = 0;
        ram_00000000026e0ae0 = 0;
        g_026e0ae8 = 0;
        ram_00000000026e0af0 = 0;
        g_026e0af8 = 0;
        ram_00000000026e0b00 = 0;
        g_026e0b08 = 0;
        ram_00000000026e0b10 = 0;
        g_026e0b18 = 0;
        ram_00000000026e0b20 = 0;
        g_026e0b28 = 0;
        ram_00000000026e0b30 = 0;
        g_026e0b38 = 0;
        ram_00000000026e0b40 = 0;
        g_026e0b63 = 0;
        g_026e0b5b = 0;
        ___cxa_guard_release();
      }
      plVar4 = &g_02802688;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (int64_t *)&stack0xffffffffffffff80;
        if (cVar1 == '\0') {
          plVar4 = &g_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_50[0x18] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_003ba99c;
      }
    } while (plVar5 != (int64_t *)0x0);
    plVar5 = (int64_t *)0x0;
LAB_003ba99c:
    FUN_00d50b20();
    if (plVar5 != (int64_t *)0x0) {
      FUN_0063f230();
      if (local_50[0] == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_003ba9f2;
        }
      }
      else if (local_58 != (int64_t *)0x0) {
LAB_003ba9f2:
        FUN_00228b30();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (((int64_t *)this_ptr[0x10] != (int64_t *)0x0) &&
     (((**(code **)(*(int64_t *)this_ptr[0x10] + 0x998))(), unaff_SIL == '\0' ||
      (cVar1 = (**(code **)(*(int64_t *)this_ptr[0x10] + 0xa78))(), cVar1 == '\0')))) {
    iVar2 = FUN_003b7980();
    if (iVar2 == 2) {
      (**(code **)(*(int64_t *)this_ptr[0x10] + 0x918))();
    }
    else {
      (**(code **)(*(int64_t *)this_ptr[0x10] + 0x918))();
    }
  }
  if (((int64_t *)this_ptr[0x11] != (int64_t *)0x0) &&
     (((**(code **)(*(int64_t *)this_ptr[0x11] + 0x998))(), unaff_SIL == '\0' ||
      (cVar1 = (**(code **)(*(int64_t *)this_ptr[0x11] + 0xa78))(), cVar1 == '\0')))) {
    plVar5 = (int64_t *)this_ptr[0x11];
    FUN_003b7980();
    (**(code **)(*plVar5 + 0x918))();
  }
LAB_003baac7:
  FUN_003bad90();
  FUN_01d243a0();
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50[0x10] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50[8] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

