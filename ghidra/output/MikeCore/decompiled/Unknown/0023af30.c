// Function: FUN_0023af30
// Address: 0023af30
// Size: 2549 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0023b14c) */
/* WARNING: Removing unreachable block (ram,0x0023b158) */
/* WARNING: Removing unreachable block (ram,0x0023b0e3) */
/* WARNING: Removing unreachable block (ram,0x0023b0ef) */
/* WARNING: Removing unreachable block (ram,0x0023b666) */
/* WARNING: Removing unreachable block (ram,0x0023b672) */
/* WARNING: Removing unreachable block (ram,0x0023b680) */
/* WARNING: Removing unreachable block (ram,0x0023b68c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0023af30(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong **pplVar5;
  char unaff_SIL;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60;
  longlong *local_50;
  char local_48 [16];
  char local_38 [8];
  
  if ((unaff_RDI[0x13] != 0) == (bool)unaff_SIL) {
    return;
  }
  plVar7 = (longlong *)unaff_RDI[0x12];
  (**(code **)(&UNK_00001550 + *plVar7))();
  local_38[0] = local_48[0];
  pcVar3 = local_48;
  if (local_48[0] == '\0') {
    pcVar3 = local_38;
  }
  *pcVar3 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    plVar4 = (longlong *)unaff_RDI[0x12];
LAB_0023afc0:
    FUN_00d50b00();
  }
  else {
    plVar4 = local_50;
    if (local_38[0] == '\0') goto LAB_0023afc0;
  }
  (**(code **)(*plVar4 + 0x7b8))();
  local_70 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x13] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = unaff_RDI[0x13];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d98b80();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (param_2 == '\0') {
      lVar1 = unaff_RDI[0x13];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c5c620();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = unaff_RDI[0x13];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01c5cb20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x13];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01c71af0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x13];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50130();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x13] != 0) {
      unaff_RDI[0x13] = 0;
      FUN_00d50b20();
    }
    goto LAB_0023b811;
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_50 + 0x450))();
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d50b00();
    local_38[0] = '\0';
    plVar7 = unaff_RDI;
    local_68 = unaff_RDI;
    do {
      (**(code **)(*plVar7 + 0x370))();
      if (local_50 == plVar7) {
        if (((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) && (local_48[0] != '\0'))
        goto LAB_0023b2a7;
      }
      else {
        local_68 = local_50;
        plVar7 = local_50;
        if (local_48[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
LAB_0023b2a7:
          local_38[0] = '\x01';
          pcVar3 = local_48;
        }
        *pcVar3 = '\0';
      }
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_68;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar5 != (longlong *)0x0) {
        if ((local_38[0] == '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar7 != (longlong *)0x0);
    FUN_00d50b20();
    if (plVar7 != (longlong *)0x0) {
      FUN_0078e590();
      FUN_00d50b20();
    }
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0010c180();
  (**(code **)(*plVar4 + 0x18))();
  FUN_01c72fa0();
  plVar7 = (longlong *)unaff_RDI[0x12];
  (**(code **)(&UNK_00001550 + *plVar7))();
  pcVar3 = local_48;
  if (local_48[0] == '\0') {
    pcVar3 = local_38;
  }
  local_38[0] = local_48[0];
  *pcVar3 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    plVar6 = (longlong *)unaff_RDI[0x12];
LAB_0023b402:
    FUN_00d50b00();
  }
  else {
    plVar6 = local_50;
    if (local_38[0] == '\0') goto LAB_0023b402;
  }
  (**(code **)(*plVar6 + 0xd48))();
  local_a0 = local_68;
  local_98 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_98 = '\x01';
  FUN_01c51ca0();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_01c5cb00();
  (**(code **)(*plVar4 + 0x4d0))(0,_DAT_02394df0);
  FUN_01c72f80();
  FUN_01c45750();
  FUN_01c84980();
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_b8 = 0;
  (**(code **)(unaff_RDI[0xf] + 0x10))();
  FUN_00d50b00();
  local_b8 = '\x01';
  local_c0 = unaff_RDI + 0xf;
  FUN_01c5cb20();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    (**(code **)(*local_c0 + 0x10))();
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x19];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01c73160();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01c45750();
  local_88 = 0;
  if (local_48[0] == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  local_88 = '\x01';
  local_90 = local_50;
  FUN_0071fc50(0,&local_90);
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar7 = (longlong *)unaff_RDI[0x13];
  if (plVar7 == plVar4) {
LAB_0023b6db:
    FUN_00d50b00();
  }
  else {
    FUN_00d50b00();
    unaff_RDI[0x13] = (longlong)plVar4;
    if (plVar7 == (longlong *)0x0) goto LAB_0023b6db;
    FUN_00d50b20();
    plVar4 = (longlong *)unaff_RDI[0x13];
    if (plVar4 != (longlong *)0x0) goto LAB_0023b6db;
    plVar4 = (longlong *)0x0;
  }
  FUN_00637870();
  FUN_006e30f0();
  local_78 = 0;
  if (local_48[0] == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  local_78 = '\x01';
  local_80 = local_50;
  (**(code **)(*plVar4 + 0x858))();
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((longlong *)unaff_RDI[0x12] != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + *(longlong *)unaff_RDI[0x12]))();
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != (longlong *)0x0) {
      FUN_01c4e0b0();
    }
  }
  FUN_01c446f0();
  FUN_0021e520();
  FUN_005078f0();
  FUN_0021f1f0();
  FUN_00d50b20();
LAB_0023b811:
  FUN_00d403d0();
  lVar1 = DAT_026f6e90;
  if (DAT_026f6e90 != 0) {
    FUN_00d50b00();
  }
  local_a8 = 0;
  FUN_00d50b00();
  local_a8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  local_b0 = unaff_RDI;
  FUN_00d40470(&local_d0,&local_b0,1,3);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


