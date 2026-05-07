// Function: FUN_0100e300
// Address: 0100e300
// Size: 770 bytes
// Class: Unknown


/* WARNING: Type propagation algorithm not settling */

void FUN_0100e300(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong unaff_RBP;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined1 local_158 [120];
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_78;
  undefined1 *puStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  
  local_78 = *unaff_RSI;
  puStack_70 = (undefined1 *)unaff_RSI[1];
  local_68 = unaff_RSI[2];
  uStack_60 = unaff_RSI[3];
  puVar9 = (ulonglong *)(unaff_RDI + 0x20);
  uStack_e0 = 0x100e367;
  uVar8 = FUN_0100e2a0(unaff_RDI,puVar9,unaff_RDI + 0x40,unaff_RSI[7]);
  uStack_e0 = 0x100e385;
  uVar8 = FUN_0100c960(uVar8,unaff_RSI[8],unaff_RSI[0xb]);
  uStack_e0 = 0x100e3a6;
  uVar8 = FUN_0100c960(uVar8,local_d8,local_c0);
  uStack_e0 = 0x100e3cc;
  FUN_0100c700(uVar8,unaff_RSI[4]);
  uStack_e0 = 0x100e3d1;
  FUN_0100e2a0();
  uStack_e0 = 0x100e3f4;
  FUN_0100e180();
  puVar5 = puStack_70;
  uVar7 = local_78;
  uStack_e0 = 0x100e417;
  uVar8 = FUN_0100e1e0();
  uStack_e0 = 0x100e439;
  FUN_0100c960(uVar8,local_d8,local_c0);
  uVar1 = (ulonglong)
          (CARRY8((ulonglong)puVar5,(ulonglong)local_158) ||
          CARRY8((ulonglong)(puVar5 + (longlong)local_158),(ulonglong)(uVar7 != 0)));
  uVar2 = (ulonglong)CARRY8(local_d0,uVar1);
  uVar6 = (ulonglong)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
  uVar2 = local_c8 + unaff_RBP + uVar2;
  uVar1 = local_d0 + uVar1;
  puVar3 = puVar5 + (longlong)local_158 + (uVar7 != 0);
  uVar4 = uVar7 - 1;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    uVar2 = local_c8;
    uVar1 = local_d0;
    puVar3 = puVar5;
    uVar4 = uVar7;
  }
  uVar7 = (ulonglong)puVar3 >> 1 | uVar1 << 0x3f;
  *puVar9 = uVar4 >> 1 | (longlong)puVar3 << 0x3f;
  puVar9[1] = uVar7;
  puVar9[2] = uVar1 >> 1 | uVar2 << 0x3f;
  puVar9[3] = uVar2 >> 1 | uVar6 << 0x3f;
  uStack_e0 = 0x100e4e4;
  FUN_0100c700(uVar2 << 0x3f,local_98,local_c8,local_b8);
  uStack_e0 = 0x100e4f1;
  FUN_0100e2a0();
  uStack_e0 = 0x100e500;
  uVar8 = FUN_0100e180();
  uStack_e0 = 0x100e52b;
  FUN_0100c700(uVar8,local_78);
  uStack_e0 = 0x100e538;
  uVar8 = FUN_0100e2a0();
  uStack_e0 = 0x100e55b;
  FUN_0100c960(uVar8,local_b8,local_a0);
  uStack_e0 = 0x100e574;
  FUN_0100e1e0();
  uStack_e0 = 0x100e590;
  FUN_0100e240();
  local_d8 = local_c0;
  uStack_e0 = 0x100e5ce;
  local_d0 = uVar7;
  FUN_0100c700(0,local_b8);
  uStack_e0 = 0x100e5dd;
  FUN_0100e1e0();
  return;
}


