// Function: FUN_01733dd0
// Address: 01733dd0
// Size: 581 bytes
// Class: GNString
// String references:
//   "_signalChangeCount"


/* WARNING: Removing unreachable block (ram,0x01733fe4) */
/* WARNING: Removing unreachable block (ram,0x01733fed) */

void FUN_01733dd0(pthread_key_t param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *in_RDX;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025fdf10;
  puVar3[2] = &DAT_025fe2a0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  FUN_00d500e0();
  puVar3[3] = *unaff_RSI;
  lVar5 = *in_RDX;
  lVar1 = puVar3[4];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    puVar3[4] = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  uVar2 = FUN_017340c0();
  puVar3[5] = uVar2;
  puVar3[6] = CONCAT44(uVar7,uVar6);
  uVar6 = 0;
  uVar7 = 0;
  uVar2 = FUN_00e7b500((int)DAT_023908c8);
  puVar3[7] = uVar2;
  puVar3[8] = CONCAT44(uVar7,uVar6);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012f9aa0();
  *(undefined4 *)(puVar3 + 9) = uVar6;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_50 = *in_RDX;
  local_48 = '\0';
  uVar6 = FUN_000823a0();
  lVar5 = FUN_00e85ef0(uVar6,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da,1);
    if (lVar5 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x28);
      goto joined_r0x01733f82;
    }
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
joined_r0x01733f82:
    if (lVar5 != 0) {
      local_38 = 0;
      FUN_00d50b00();
      goto LAB_01733f94;
    }
  }
  lVar5 = 0;
LAB_01733f94:
  local_38 = '\x01';
  local_40 = lVar5;
  FUN_00cbad30(&local_40,&local_50,4);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


