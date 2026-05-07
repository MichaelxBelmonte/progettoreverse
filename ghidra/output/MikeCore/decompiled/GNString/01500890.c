// Function: FUN_01500890
// Address: 01500890
// Size: 843 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01500964) */
/* WARNING: Removing unreachable block (ram,0x0150096d) */
/* WARNING: Removing unreachable block (ram,0x01500936) */
/* WARNING: Removing unreachable block (ram,0x0150093f) */
/* WARNING: Removing unreachable block (ram,0x015009b0) */
/* WARNING: Removing unreachable block (ram,0x015009b9) */

ulonglong FUN_01500890(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  longlong lVar5;
  uint uVar6;
  int local_9c;
  longlong local_78;
  char local_70;
  int local_64;
  longlong local_58;
  char local_50;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b810f0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_58 == 0) {
    uVar4 = 0;
    goto LAB_01500b4b;
  }
  FUN_00b8c7f0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01500972;
    }
  }
  else if (local_58 != 0) {
LAB_01500972:
    FUN_00be12c0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        goto LAB_015009be;
      }
    }
    else if (local_58 != 0) {
LAB_015009be:
      if (0 < *(int *)(local_58 + 0xc)) {
        uVar6 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(local_58 + 0x10) + (ulonglong)uVar6 * 8);
          FUN_00bdfd90();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if (local_78 != 0) {
            FUN_00bdfd90();
            if (local_70 == '\0') {
              if (local_78 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            FUN_000030c0();
            FUN_00d8b910();
            do {
              iVar2 = local_64;
              if (local_9c <= local_64) break;
              local_64 = local_64 + 1;
              iVar3 = FUN_00e7ddf0();
            } while (iVar3 != 0);
            if (local_78 != 0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if (iVar2 < local_9c) {
              lVar5 = *(longlong *)(unaff_RDI + 0x28);
              if (lVar5 != local_58) {
                FUN_00d50b00();
                *(longlong *)(unaff_RDI + 0x28) = local_58;
                if (lVar5 != 0) {
                  FUN_00d50b20();
                }
              }
              lVar5 = *(longlong *)(unaff_RDI + 0x30);
              if (lVar5 != lVar1) {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                  lVar5 = *(longlong *)(unaff_RDI + 0x30);
                }
                *(longlong *)(unaff_RDI + 0x30) = lVar1;
                if (lVar5 != 0) {
                  FUN_00d50b20();
                }
              }
              FUN_01503a00();
              FUN_00d50b20();
              uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
              FUN_00d50b20();
              goto LAB_01500b43;
            }
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < *(int *)(local_58 + 0xc));
      }
      FUN_01503a00();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar4 = 0;
LAB_01500b43:
  FUN_00d50b20();
LAB_01500b4b:
  return uVar4 & 0xffffffff;
}


