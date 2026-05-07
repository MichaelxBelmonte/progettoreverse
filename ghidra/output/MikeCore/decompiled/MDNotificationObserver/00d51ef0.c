// Function: FUN_00d51ef0
// Address: 00d51ef0
// Size: 1374 bytes
// Class: MDNotificationObserver


/* WARNING: Removing unreachable block (ram,0x00d52308) */
/* WARNING: Removing unreachable block (ram,0x00d52315) */
/* WARNING: Removing unreachable block (ram,0x00d521fc) */
/* WARNING: Removing unreachable block (ram,0x00d52209) */

void FUN_00d51ef0(void)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_110;
  char local_108 [16];
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x360))();
  FUN_00e86210();
  FUN_00c820a0();
  pcVar3 = local_38;
  if (local_108[0] != '\0') {
    pcVar3 = local_108;
  }
  local_38[0] = local_108[0];
  *pcVar3 = '\0';
  if ((local_108[0] != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (local_110 != 0) {
    local_108[0] = '\0';
    local_f0 = 0;
    local_f8 = 0;
    if (0 < *(int *)(local_110 + 0xc)) {
      lVar4 = 0;
      do {
        local_e8 = *(longlong *)(*(longlong *)(local_110 + 0x10) + lVar4 * 8);
        local_e0 = '\0';
        cVar1 = (**(code **)(*unaff_RDI + 0x2b8))();
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          uVar2 = FUN_00d77bd0();
          if ((int)((ulonglong)uVar2 >> 0x20) < 2) {
            if ((int)uVar2 == 0) {
              FUN_00d74120();
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00e31530();
                }
              }
              else {
                local_58 = '\0';
              }
              (**(code **)(*unaff_RDI + 0x88))();
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00e31530();
                }
              }
              else {
                local_40 = '\0';
              }
              if (local_60 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 != 0) {
                if (local_48 == *unaff_RSI) {
                  local_b0 = '\0';
                  local_b8 = 0;
                  FUN_00d74120();
                  if (local_40 == '\0') {
                    if (local_48 != 0) {
                      FUN_00e31530();
                    }
                  }
                  else {
                    local_40 = '\0';
                  }
                  (**(code **)(*unaff_RDI + 0x80))();
                  if (local_48 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
            }
          }
          else {
            FUN_00d74120();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_58 = '\0';
            }
            (**(code **)(*unaff_RDI + 0x88))();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              local_d8 = *unaff_RSI;
              local_d0 = '\0';
              cVar1 = FUN_00d23d70();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 != '\0') {
                local_c8 = *unaff_RSI;
                local_c0 = '\0';
                FUN_00d74120();
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00e31530();
                  }
                }
                else {
                  local_40 = '\0';
                }
                (**(code **)(*unaff_RDI + 200))();
                if (local_48 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
          }
        }
        lVar4 = lVar4 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,(int)lVar4);
      } while ((int)lVar4 < *(int *)(local_110 + 0xc));
    }
    FUN_00559a70();
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


