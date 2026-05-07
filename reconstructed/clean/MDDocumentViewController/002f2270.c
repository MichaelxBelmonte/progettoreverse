// Function: FUN_002f2270
// Address: 002f2270
// Size: 1400 bytes
// Class: MDDocumentViewController
// String references:
//   "MDDocumentViewController"

uint32_t FUN_002f2270(void)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  char *pcVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int64_t in_stack_ffffffffffffffa8;
  int64_t *plVar8;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_48 + 0x450))();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_01ddf370();
    return uVar4;
  }
  if ((this_ptr[0x5d] != 0) && (FUN_01c023b0(), this_ptr[0x5d] != 0)) {
    this_ptr[0x5d] = 0;
    FUN_00d50b20();
  }
  FUN_01d384d0();
  FUN_01ca8220();
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (in_stack_ffffffffffffffa8 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = g_027f29d0;
  if (g_027f29d0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40[0] = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_40[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(char *)(this_ptr + 0x5c) = cVar3;
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
    cVar3 = (char)this_ptr[0x5c];
  }
  if (cVar3 != '\0') {
    uVar4 = FUN_01ddf370();
    goto LAB_002f27ca;
  }
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar8 = this_ptr;
  do {
    (**(code **)(*plVar8 + 0x370))();
    if (plVar2 == plVar8) {
      if (((local_38[0] == '\0') && (plVar2 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_002f24c7;
      }
    }
    else {
      plVar8 = plVar2;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar6 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar6 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_002f24c7:
        local_38[0] = '\x01';
        pcVar6 = local_40;
      }
      *pcVar6 = '\0';
    }
    if ((local_40[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026d8470 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026fe6b8 = FUN_00015ff0();
      g_026fe6a0 = "MDDocumentViewController";
      g_026fe6a8 = 0x100;
      g_026fe6b0 = FUN_00082e10;
      g_026fe6c0 = 0;
      ram_00000000026fe6c8 = 0;
      g_026fe6d0 = 0;
      g_026fe748 = 0;
      ram_00000000026fe750 = 0;
      g_026fe758 = 0;
      g_026fe75a = 1;
      g_026fe6d8 = 0;
      ram_00000000026fe6e0 = 0;
      g_026fe6e8 = 0;
      ram_00000000026fe6f0 = 0;
      g_026fe6f8 = 0;
      ram_00000000026fe700 = 0;
      g_026fe708 = 0;
      ram_00000000026fe710 = 0;
      g_026fe718 = 0;
      ram_00000000026fe720 = 0;
      g_026fe728 = 0;
      ram_00000000026fe730 = 0;
      g_026fe738 = 0;
      ram_00000000026fe740 = 0;
      g_026fe763 = 0;
      g_026fe75b = 0;
      ___cxa_guard_release();
    }
    plVar7 = &g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar7 = (int64_t *)&stack0xffffffffffffffa8;
      if (cVar3 == '\0') {
        plVar7 = &g_02802688;
      }
    }
    if (*plVar7 != 0) {
      bVar1 = false;
      plVar7 = plVar8;
      if (local_38[0] == '\0') {
        if (plVar8 == (int64_t *)0x0) goto LAB_002f2659;
        FUN_00d50b00();
        this_ptr[0x5e] = (int64_t)plVar8;
      }
      else {
        this_ptr[0x5e] = (int64_t)plVar8;
      }
      goto LAB_002f2665;
    }
  } while (plVar8 != (int64_t *)0x0);
  bVar1 = true;
  plVar7 = (int64_t *)0x0;
LAB_002f2659:
  this_ptr[0x5e] = (int64_t)plVar7;
  if (!bVar1) {
LAB_002f2665:
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (this_ptr[0x5e] != 0) {
    FUN_006f4810();
    FUN_01be8270();
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_01bcee20();
      plVar8 = (int64_t *)this_ptr[0x5d];
      plVar7 = plVar8;
      if (plVar8 != plVar2) {
        plVar7 = plVar2;
        if (local_40[0] == '\0') {
          if (plVar2 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x0;
            goto LAB_002f2713;
          }
          FUN_00d50b00();
          plVar8 = (int64_t *)this_ptr[0x5d];
          this_ptr[0x5d] = (int64_t)plVar2;
        }
        else {
          local_40[0] = '\0';
LAB_002f2713:
          this_ptr[0x5d] = (int64_t)plVar7;
        }
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar7 = plVar2;
        }
      }
      if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  uVar4 = (**(code **)(*this_ptr + 0x3d0))();
LAB_002f27ca:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar4;
}

