// Function: FUN_01f7bcc0
// Address: 01f7bcc0
// Size: 651 bytes
// Class: GNRadialColorGradient


/* WARNING: Removing unreachable block (ram,0x01f7bda7) */
/* WARNING: Removing unreachable block (ram,0x01f7bdb0) */
/* WARNING: Removing unreachable block (ram,0x01f7beb7) */
/* WARNING: Removing unreachable block (ram,0x01f7bec0) */

void FUN_01f7bcc0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  float fVar6;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  lVar2 = *(longlong *)(*unaff_RSI + 0x30);
  if (lVar2 == 0) {
    local_60 = 0;
    uVar1 = MACH_HEADER.filetype;
  }
  else {
    FUN_00d50b00();
    uVar1 = *(uint *)(lVar2 + 0xc);
    local_60 = lVar2;
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(local_60 + 0x10) + uVar5 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfd130();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_48 = local_58;
      local_40 = '\0';
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  FUN_01f7c100();
  if (local_48 == 0) {
    bVar4 = true;
    uVar1 = MACH_HEADER.filetype;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    bVar4 = false;
    uVar1 = *(uint *)(local_48 + 0xc);
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      FUN_00d459e0();
      FUN_00d46dc0();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  lVar3 = *unaff_RSI;
  fVar6 = *(float *)(lVar3 + 0x40);
  if (*(int *)(*(longlong *)(lVar3 + 0x38) + 0xc) != *(int *)(*(longlong *)(lVar3 + 0x30) + 0xc)) {
    fVar6 = fVar6 + DAT_02394294;
  }
  *(float *)(unaff_RDI + 0x40) = fVar6;
  *(undefined4 *)(unaff_RDI + 0x44) = *(undefined4 *)(lVar3 + 0x44);
  if (!bVar4) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}


