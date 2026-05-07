// Function: FUN_00d529a0
// Address: 00d529a0
// Size: 1099 bytes
// Class: MDNotificationObserver


/* WARNING: Removing unreachable block (ram,0x00d52dba) */
/* WARNING: Removing unreachable block (ram,0x00d52dc7) */
/* WARNING: Removing unreachable block (ram,0x00d52d80) */
/* WARNING: Removing unreachable block (ram,0x00d52d8d) */
/* WARNING: Removing unreachable block (ram,0x00d52c17) */
/* WARNING: Removing unreachable block (ram,0x00d52c40) */
/* WARNING: Removing unreachable block (ram,0x00d52c19) */
/* WARNING: Removing unreachable block (ram,0x00d52c42) */

void FUN_00d529a0(void)

{
  longlong lVar1;
  char cVar2;
  int extraout_var;
  longlong lVar3;
  char *pcVar4;
  code *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar5;
  longlong local_f8;
  char local_f0 [16];
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x360))();
  FUN_00e86210();
  FUN_00c820a0();
  pcVar4 = local_38;
  if (local_f0[0] != '\0') {
    pcVar4 = local_f0;
  }
  local_38[0] = local_f0[0];
  *pcVar4 = '\0';
  if ((local_f0[0] != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (local_f8 != 0) {
    local_f0[0] = '\0';
    local_d8 = 0;
    local_e0 = 0;
    if (0 < *(int *)(local_f8 + 0xc)) {
      uVar5 = 0;
      local_d0 = local_f8;
      do {
        lVar1 = local_70;
        local_c8 = *(longlong *)(*(longlong *)(local_d0 + 0x10) + (ulonglong)uVar5 * 8);
        local_c0 = '\0';
        cVar2 = (**(code **)(*unaff_RDI + 0x2b8))();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_00d77bd0();
          if (extraout_var < 2) {
            FUN_00d74120();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            (**(code **)(*unaff_RDI + 0x88))();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_68 = '\0';
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 != 0) {
              local_a8 = local_70;
              local_a0 = '\0';
              (*unaff_RSI)();
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d74120();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            (**(code **)(*unaff_RDI + 0x88))();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_68 = '\0';
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 != 0) {
              local_68 = '\0';
              local_70 = 0;
              local_58 = -1;
              while( true ) {
                lVar3 = (longlong)local_58;
                local_58 = local_58 + 1;
                if (*(int *)(lVar1 + 0xc) <= local_58) break;
                local_70 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
                local_b0 = '\0';
                local_b8 = local_70;
                (*unaff_RSI)();
                if ((local_b0 != '\0') && (local_b8 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00083b20();
              FUN_00d50b20();
            }
          }
        }
        uVar5 = uVar5 + 1;
        local_e0 = CONCAT44(local_e0._4_4_,uVar5);
      } while ((int)uVar5 < *(int *)(local_d0 + 0xc));
    }
    FUN_00559a70();
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


