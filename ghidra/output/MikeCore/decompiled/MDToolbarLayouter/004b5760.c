// Function: FUN_004b5760
// Address: 004b5760
// Size: 679 bytes
// Class: MDToolbarLayouter


/* WARNING: Removing unreachable block (ram,0x004b5864) */
/* WARNING: Removing unreachable block (ram,0x004b5869) */
/* WARNING: Removing unreachable block (ram,0x004b58cc) */
/* WARNING: Removing unreachable block (ram,0x004b58f0) */
/* WARNING: Removing unreachable block (ram,0x004b57d2) */
/* WARNING: Removing unreachable block (ram,0x004b57d0) */
/* WARNING: Removing unreachable block (ram,0x004b57f0) */
/* WARNING: Removing unreachable block (ram,0x004b57f2) */
/* WARNING: Removing unreachable block (ram,0x004b58ce) */
/* WARNING: Removing unreachable block (ram,0x004b58f2) */

void FUN_004b5760(void)

{
  char cVar1;
  longlong lVar2;
  longlong local_90;
  char local_88;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_004b5af0();
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
    return;
  }
  local_40 = -1;
  do {
    lVar2 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_58 + 0xc) <= local_40) {
      FUN_00274d30();
      FUN_00d50b20();
      return;
    }
    lVar2 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar2 * 8);
    cVar1 = FUN_003b7990();
  } while (cVar1 == '\0');
  FUN_00274d30();
  FUN_00d50b20();
  FUN_004b5af0();
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar2 + 0xc)) {
      FUN_003b7950();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_004b5c00();
      if ((local_88 == '\0') && (local_90 != 0)) {
        FUN_00d50b00();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_003b7720();
      if (local_90 != 0) {
        cVar1 = FUN_003b7710();
        if (cVar1 == '\0') {
          cVar1 = FUN_003b7780();
          if (cVar1 == '\0') {
            FUN_003b7290();
          }
          else {
            FUN_003b7740();
          }
        }
        else {
          FUN_003b72f0();
        }
        FUN_00d50b20();
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
  }
  return;
}


