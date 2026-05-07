// Function: FUN_0027db70
// Address: 0027db70
// Size: 751 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x0027dd9c) */
/* WARNING: Removing unreachable block (ram,0x0027dda5) */
/* WARNING: Removing unreachable block (ram,0x0027de15) */
/* WARNING: Removing unreachable block (ram,0x0027de21) */
/* WARNING: Removing unreachable block (ram,0x0027dc07) */
/* WARNING: Removing unreachable block (ram,0x0027dc10) */
/* WARNING: Removing unreachable block (ram,0x0027de71) */
/* WARNING: Removing unreachable block (ram,0x0027de7e) */

void FUN_0027db70(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  lVar1 = local_68;
  (**(code **)(*unaff_RDI + 0x728))();
  FUN_01da4890();
  FUN_01da6400();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01da4890();
  FUN_01caf660();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01da4e80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_01caf660();
  FUN_01cafe30();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    local_60 = '\0';
    local_68 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar3 * 8);
        do {
          FUN_01caf470();
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          cVar2 = FUN_00d23f50();
          if (local_88 != 0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        } while (cVar2 != '\0');
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_002a0990();
    FUN_00d50b20();
  }
  FUN_01da4890();
  FUN_01da64d0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


