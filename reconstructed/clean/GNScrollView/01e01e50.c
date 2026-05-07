// Function: FUN_01e01e50
// Address: 01e01e50
// Size: 1293 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "GNModuleView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01e01e50(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t arg1;
  void*this_ptr;
  bool bVar6;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(arg1 + 0x140);
  if (plVar1 == (int64_t *)0x0) {
    local_48 = (int64_t *)0x0;
LAB_01e01eb4:
    FUN_01e4b8e0();
LAB_01e02054:
    if (local_48 != (int64_t *)0x0) goto LAB_01e02059;
  }
  else {
    FUN_00d50b00();
    local_48 = (int64_t *)0x0;
    (**(code **)(*plVar1 + 0x380))();
    if (local_40 == (int64_t *)0x0) {
      if (local_38 != '\0') {
        local_48 = (int64_t *)0x0;
      }
LAB_01e01eee:
      if (local_48 != (int64_t *)0x0) goto LAB_01e01ef7;
LAB_01e02157:
      (**(code **)(*plVar1 + 0x390))();
      if (local_40 == local_48) {
LAB_01e021ba:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar3 = (int64_t *)0x0;
        plVar2 = local_48;
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar6 = local_48 != (int64_t *)0x0;
          local_48 = local_40;
          if (bVar6) {
            FUN_00d50b20();
          }
          goto LAB_01e021ba;
        }
        plVar3 = local_40;
        plVar2 = local_40;
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar3 = local_40;
        }
      }
      local_48 = plVar3;
      if (plVar2 != (int64_t *)0x0) {
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        goto LAB_01e021df;
      }
      goto LAB_01e01eb4;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_48 = local_40;
      goto LAB_01e01eee;
    }
    local_48 = local_40;
LAB_01e01ef7:
    FUN_01e42030();
    FUN_01d8b200();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == local_40) {
      FUN_01e4b8e0();
      goto LAB_01e02054;
    }
    if ((g_026e5340 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_027e7718 = FUN_0006d940();
      g_027e7700 = "GNModuleView";
      g_027e7708 = 0x178;
      g_027e7710 = FUN_00191170;
      g_027e7720 = 0;
      ram_00000000027e7728 = 0;
      g_027e7730 = 0;
      ram_00000000027e7738 = 0;
      g_027e7740 = 0;
      ram_00000000027e7748 = 0;
      g_027e7750 = 0;
      ram_00000000027e7758 = 0;
      g_027e7760 = 0;
      ram_00000000027e7768 = 0;
      g_027e7770 = 0;
      ram_00000000027e7778 = 0;
      g_027e7780 = 0;
      ram_00000000027e7788 = 0;
      g_027e7790 = 0;
      ram_00000000027e7798 = 0;
      g_027e77a0 = 0;
      ram_00000000027e77a8 = 0;
      g_027e77b0 = 0;
      ram_00000000027e77b8 = 0;
      g_027e77c0 = 0;
      ___cxa_guard_release();
    }
    if (local_48 != (int64_t *)0x0) {
      (**(code **)(*local_48 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01e01f7f;
      if (local_48 != (int64_t *)0x0) goto LAB_01e01f90;
LAB_01e02081:
      if ((g_026f0e00 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026f8e78 = FUN_0006d940();
        g_026f8e60 = "GNScrollView";
        g_026f8e68 = 0x1c0;
        g_026f8e70 = FUN_00074e80;
        g_026f8e80 = 0;
        ram_00000000026f8e88 = 0;
        g_026f8e90 = 0;
        ram_00000000026f8e98 = 0;
        g_026f8ea0 = 0;
        ram_00000000026f8ea8 = 0;
        g_026f8eb0 = 0;
        ram_00000000026f8eb8 = 0;
        g_026f8ec0 = 0;
        ram_00000000026f8ec8 = 0;
        g_026f8ed0 = 0;
        ram_00000000026f8ed8 = 0;
        g_026f8ee0 = 0;
        ram_00000000026f8ee8 = 0;
        g_026f8ef0 = 0;
        ram_00000000026f8ef8 = 0;
        g_026f8f00 = 0;
        ram_00000000026f8f08 = 0;
        g_026f8f10 = 0;
        ram_00000000026f8f18 = 0;
        g_026f8f20 = 0;
        ___cxa_guard_release();
      }
      plVar2 = g_02802688;
      if (local_48 != (int64_t *)0x0) {
        (**(code **)(*local_48 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar2 = g_02802688;
        if (cVar4 != '\0') {
          plVar2 = local_48;
        }
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_01d97850();
        FUN_01e42030();
        FUN_01d8b200();
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == local_68) {
          FUN_01e4b8e0();
          goto LAB_01e02054;
        }
      }
      goto LAB_01e02157;
    }
LAB_01e01f7f:
    if (g_02802688 == (int64_t *)0x0) goto LAB_01e02081;
LAB_01e01f90:
    (**(code **)(*local_48 + 0x980))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) {
      FUN_01e4b8e0();
    }
    else {
      (**(code **)(*local_48 + 0x980))();
      FUN_01e42030();
      FUN_01d8b200();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != local_68) goto LAB_01e02081;
      FUN_01e4b8e0();
    }
LAB_01e02059:
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
LAB_01e021df:
  FUN_00d50b20();
  return;
}

