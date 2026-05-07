// Function: FUN_0100e300
// Address: 0100e300
// Size: 770 bytes
// Class: Unknown

void FUN_0100e300(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  void*puVar3;
  uint64_t uVar4;
  void*puVar5;
  uint64_t unaff_RBP;
  uint64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint8_t local_158 [120];
  uint64_t uStack_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_78;
  void*puStack_70;
  uint64_t local_68;
  uint64_t uStack_60;
  
  local_78 = *arg1;
  puStack_70 = (void*)arg1[1];
  local_68 = arg1[2];
  uStack_60 = arg1[3];
  puVar9 = (uint64_t *)(this_ptr + 0x20);
  uStack_e0 = 0x100e367;
  uVar8 = FUN_0100e2a0(this_ptr,puVar9,this_ptr + 0x40,arg1[7]);
  uStack_e0 = 0x100e385;
  uVar8 = FUN_0100c960(uVar8,arg1[8],arg1[0xb]);
  uStack_e0 = 0x100e3a6;
  uVar8 = FUN_0100c960(uVar8,local_d8,local_c0);
  uStack_e0 = 0x100e3cc;
  FUN_0100c700(uVar8,arg1[4]);
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
  uVar1 = (uint64_t)
          (CARRY8((uint64_t)puVar5,(uint64_t)local_158) ||
          CARRY8((uint64_t)(puVar5 + (int64_t)local_158),(uint64_t)(uVar7 != 0)));
  uVar2 = (uint64_t)CARRY8(local_d0,uVar1);
  uVar6 = (uint64_t)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
  uVar2 = local_c8 + unaff_RBP + uVar2;
  uVar1 = local_d0 + uVar1;
  puVar3 = puVar5 + (int64_t)local_158 + (uVar7 != 0);
  uVar4 = uVar7 - 1;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    uVar2 = local_c8;
    uVar1 = local_d0;
    puVar3 = puVar5;
    uVar4 = uVar7;
  }
  uVar7 = (uint64_t)puVar3 >> 1 | uVar1 << 0x3f;
  *puVar9 = uVar4 >> 1 | (int64_t)puVar3 << 0x3f;
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

