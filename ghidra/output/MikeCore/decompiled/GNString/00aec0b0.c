// Function: FUN_00aec0b0
// Address: 00aec0b0
// Size: 1265 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00aec0ed) */
/* WARNING: Removing unreachable block (ram,0x00aec0f9) */

void FUN_00aec0b0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  undefined1 local_5a [2];
  int local_58;
  int local_54;
  longlong local_50;
  char local_48;
  short local_3a;
  longlong local_38;
  
  FUN_00b75710();
  FUN_00ccce80();
  FUN_00aebe90(local_5a,&local_3a);
  lVar4 = DAT_02764880;
  if ((local_58 != 0x63616666) || (local_3a != 1)) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  cVar2 = FUN_00aebde0();
  lVar4 = DAT_02764880;
  while (DAT_02764880 = lVar4, cVar2 != '\0') {
    if (local_54 < 0x6b756b69) {
      if (local_54 == 0x64617461) {
        FUN_00aebab0();
      }
      else if (local_54 == 0x64657363) {
        FUN_00aeb510();
      }
      else {
LAB_00aec2d1:
        if (local_38 < 0) break;
        (**(code **)(*(longlong *)unaff_RDI[4] + 0x390))();
        lVar4 = local_50;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar1 = DAT_02765700;
        if (lVar4 != 0) {
          if (DAT_02765700 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(longlong *)unaff_RDI[4] + 0x3a0))();
        lVar4 = local_50;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar1 = DAT_02765700;
        if (lVar4 != 0) {
          if (DAT_02765700 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    else if (local_54 == 0x6b756b69) {
      FUN_00aeb2e0();
      lVar1 = local_50;
      lVar4 = unaff_RDI[0x16];
      if (lVar4 == local_50) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
          lVar4 = unaff_RDI[0x16];
        }
        unaff_RDI[0x16] = lVar1;
joined_r0x00aec26d:
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else if (local_54 == 0x70616b74) {
      FUN_00aeb2e0();
      lVar1 = local_50;
      lVar4 = unaff_RDI[0x17];
      if (lVar4 != local_50) {
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
          lVar4 = unaff_RDI[0x17];
        }
        unaff_RDI[0x17] = lVar1;
        goto joined_r0x00aec26d;
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_54 != 0x75756964) goto LAB_00aec2d1;
      FUN_00aec770();
    }
    cVar2 = FUN_00aebde0();
    lVar4 = DAT_02764880;
  }
  if ((int)unaff_RDI[0x15] != 0x616c6163) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  iVar3 = (**(code **)(*unaff_RDI + 0x390))();
  lVar4 = DAT_02764880;
  if (iVar3 == 0) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  iVar3 = (**(code **)(*unaff_RDI + 0x388))();
  lVar4 = DAT_02764880;
  if (iVar3 == -1) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  lVar4 = DAT_02764880;
  if ((unaff_RDI[0xe] == 0) || (unaff_RDI[0x14] == 0)) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00aeabf0();
  return;
}


