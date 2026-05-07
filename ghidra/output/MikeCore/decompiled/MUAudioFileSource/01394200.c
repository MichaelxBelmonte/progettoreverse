// Function: FUN_01394200
// Address: 01394200
// Size: 1307 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x0139465d) */
/* WARNING: Removing unreachable block (ram,0x01394666) */
/* WARNING: Removing unreachable block (ram,0x0139456e) */
/* WARNING: Removing unreachable block (ram,0x0139457a) */
/* WARNING: Removing unreachable block (ram,0x0139434f) */
/* WARNING: Removing unreachable block (ram,0x0139435b) */
/* WARNING: Removing unreachable block (ram,0x013942ce) */
/* WARNING: Removing unreachable block (ram,0x013942da) */
/* WARNING: Removing unreachable block (ram,0x0139426e) */
/* WARNING: Removing unreachable block (ram,0x0139427a) */
/* WARNING: Removing unreachable block (ram,0x01394335) */
/* WARNING: Removing unreachable block (ram,0x01394341) */
/* WARNING: Removing unreachable block (ram,0x013944fd) */
/* WARNING: Removing unreachable block (ram,0x01394526) */
/* WARNING: Removing unreachable block (ram,0x0139452b) */
/* WARNING: Removing unreachable block (ram,0x01394533) */
/* WARNING: Removing unreachable block (ram,0x01394540) */
/* WARNING: Removing unreachable block (ram,0x013946d7) */
/* WARNING: Removing unreachable block (ram,0x01394503) */
/* WARNING: Removing unreachable block (ram,0x0139450a) */
/* WARNING: Removing unreachable block (ram,0x01394517) */
/* WARNING: Removing unreachable block (ram,0x01394524) */
/* WARNING: Removing unreachable block (ram,0x01394619) */
/* WARNING: Removing unreachable block (ram,0x01394622) */
/* WARNING: Removing unreachable block (ram,0x01394671) */
/* WARNING: Removing unreachable block (ram,0x0139467a) */
/* WARNING: Removing unreachable block (ram,0x01394396) */
/* WARNING: Removing unreachable block (ram,0x013943a3) */
/* WARNING: Removing unreachable block (ram,0x013943c9) */
/* WARNING: Removing unreachable block (ram,0x013943d6) */
/* WARNING: Removing unreachable block (ram,0x013943e9) */
/* WARNING: Removing unreachable block (ram,0x013943fc) */
/* WARNING: Removing unreachable block (ram,0x01394416) */
/* WARNING: Removing unreachable block (ram,0x01394461) */
/* WARNING: Removing unreachable block (ram,0x01394478) */

int FUN_01394200(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_58;
  char local_50;
  longlong local_48;
  
  lVar1 = DAT_027bf438;
  if (DAT_027bf438 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)*unaff_RDI + 0x88))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x88))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00(local_58);
    }
  }
  else {
    local_50 = '\0';
  }
  lVar5 = local_58;
  if (local_58 == 0) {
    local_48 = 0;
    lVar4 = DAT_027bf440;
joined_r0x0139445d:
    DAT_027bf440 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 == lVar4) {
      lVar4 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RDI + 0x88))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x88))();
    if (local_58 == local_48) {
LAB_013945f7:
      bVar6 = local_50 == '\0';
joined_r0x013945fb:
      lVar5 = local_48;
      if ((!bVar6) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
          local_48 = local_58;
          goto LAB_013945f7;
        }
        bVar6 = true;
        local_48 = local_58;
        goto joined_r0x013945fb;
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_58 == 0) {
      local_58 = 0;
      iVar3 = 0;
      lVar1 = lVar4;
joined_r0x01394370:
      lVar4 = lVar1;
      if (lVar5 != 0) goto LAB_013946a3;
      goto LAB_013946a8;
    }
    if (lVar5 != 0) {
      iVar3 = FUN_00e8b280();
LAB_013946a3:
      FUN_00d50b20();
      goto LAB_013946a8;
    }
    iVar3 = 0;
  }
  else {
    if (local_58 != 0) {
      iVar3 = FUN_00e8b280();
      local_48 = local_58;
      lVar4 = DAT_027bf440;
      if (iVar3 == 0) goto joined_r0x0139445d;
      goto joined_r0x01394370;
    }
    cVar2 = FUN_00d45ad0();
    if (cVar2 == '\0') {
      local_48 = 0;
      lVar4 = DAT_027bf440;
      goto joined_r0x0139445d;
    }
    iVar3 = -1;
    lVar4 = lVar1;
LAB_013946a8:
    if (local_58 == 0) goto LAB_013946b5;
  }
  FUN_00d50b20();
LAB_013946b5:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return iVar3;
}


