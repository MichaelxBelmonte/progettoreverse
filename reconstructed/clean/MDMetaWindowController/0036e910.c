// Function: FUN_0036e910
// Address: 0036e910
// Size: 536 bytes
// Class: MDMetaWindowController

void FUN_0036e910(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int64_t *this_ptr;
  bool bVar6;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  char local_30 [8];
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_40 + 0x450))();
  if (cVar3 == '\0') {
    bVar6 = false;
  }
  else {
    FUN_01f30840();
    bVar6 = *(int *)(local_50 + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) {
    (**(code **)(*this_ptr + 0x720))();
    (**(code **)(*local_80 + 0x5e0))();
    FUN_00643590();
    FUN_00d23310();
    pcVar5 = local_30;
    if (local_38[0] != '\0') {
      pcVar5 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar5 = '\0';
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      cVar3 = FUN_00212c70();
      lVar2 = g_027259a0;
      if (cVar3 != '\0') {
        if (g_027259a0 != 0) {
          FUN_00d50b00();
        }
        lVar1 = g_026fe4a0;
        if (g_026fe4a0 != 0) {
          FUN_00d50b00();
        }
        FUN_01f6ca30();
        iVar4 = (**(code **)(*local_40 + 0x5e0))();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (iVar4 != 0) {
          FUN_00d50b20();
          return;
        }
        FUN_002218f0();
      }
      FUN_00d50b20();
    }
  }
  FUN_01f436d0();
  return;
}

