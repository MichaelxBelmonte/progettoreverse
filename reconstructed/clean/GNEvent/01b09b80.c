// Function: FUN_01b09b80
// Address: 01b09b80
// Size: 985 bytes
// Class: GNEvent
// String references:
//   "GNEvent"
// === GNEvent properties ===
//   GNEventType     _type
//   GNMouseWheelAxis _mouseWheelAxis
//   GNMouseButton   _mouseButton


void FUN_01b09b80(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t **pplVar5;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027e3b40;
  if (g_027e3b40 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026fce70;
  if (cVar3 == '\0') {
    if (g_026fce70 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027f1430;
    if (cVar3 == '\0') {
      if (g_027f1430 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027e3bc0;
      if (cVar3 != '\0') {
        pplVar5 = &local_40;
        FUN_00d3ecf0();
        plVar1 = local_40;
        if ((g_026ec420 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_027e3fc8 = FUN_00d4fe50();
          g_027e3fb0 = "GNEvent";
          g_027e3fb8 = 0x50;
          g_027e3fc0 = FUN_001c75c0;
          g_027e3fd0 = 0;
          ram_00000000027e3fd8 = 0;
          g_027e3fe0 = 0;
          ram_00000000027e3fe8 = 0;
          g_027e3ff0 = 0;
          ram_00000000027e3ff8 = 0;
          g_027e4000 = 0;
          ram_00000000027e4008 = 0;
          g_027e4010 = 0;
          ram_00000000027e4018 = 0;
          g_027e4020 = 0;
          ram_00000000027e4028 = 0;
          g_027e4030 = 0;
          ram_00000000027e4038 = 0;
          g_027e4040 = 0;
          ram_00000000027e4048 = 0;
          g_027e4050 = 0;
          ram_00000000027e4058 = 0;
          g_027e4060 = 0;
          ram_00000000027e4068 = 0;
          g_027e4070 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (int64_t *)0x0) {
LAB_01b09d62:
          pplVar5 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          if (cVar3 == '\0') goto LAB_01b09d62;
        }
        plVar1 = *pplVar5;
        if (*(char *)(pplVar5 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar5 + 1) = 0;
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_01aefa80();
          FUN_00d50b20();
        }
        goto LAB_01b09cbe;
      }
      if (g_027e3bc0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027e3b30;
      if (cVar3 != '\0') {
        FUN_01adabe0();
        (**(code **)(*this_ptr + 0x618))();
        goto LAB_01b09cbe;
      }
      if (g_027e3b30 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        if (this_ptr[0x57] != 0) {
          this_ptr[0x57] = 0;
          FUN_00d50b20();
        }
        FUN_01adad50();
        (**(code **)(*this_ptr + 0x618))();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x620))();
      FUN_01ad48c0();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x620))();
  }
  FUN_01a21920();
LAB_01b09cbe:
  FUN_00d50b20();
  return;
}

