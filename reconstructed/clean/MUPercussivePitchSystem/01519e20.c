// Function: FUN_01519e20
// Address: 01519e20
// Size: 954 bytes
// Class: MUPercussivePitchSystem

void FUN_01519e20(double param_1,double param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  void *pvVar3;
  uint8_t in_CL;
  uint64_t in_RDX;
  char *pcVar4;
  uint unaff_ESI;
  int64_t *this_ptr;
  int64_t lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int64_t local_a0;
  char local_98 [8];
  int64_t local_90;
  uint64_t local_88;
  uint32_t local_80;
  double local_78;
  double local_70;
  double local_68;
  int64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint local_48;
  uint local_44;
  double local_40;
  char local_38 [8];
  
  local_78 = param_2;
  local_70 = param_1;
  local_58 = param_4;
  local_50 = param_3;
  FUN_00d23340();
  pcVar4 = local_38;
  if (local_98[0] != '\0') {
    pcVar4 = local_98;
  }
  local_38[0] = local_98[0];
  *pcVar4 = '\0';
  if ((local_98[0] != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_a0 != 0)) {
    FUN_00d50b00();
  }
  local_60 = local_a0;
  FUN_00d23740();
  local_48 = unaff_ESI & 0xff;
  in_RDX = in_RDX & 0xff;
  local_44 = (uint)in_RDX;
  FUN_015189a0(local_70,local_78,in_CL,local_50);
  pvVar3 = _pthread_getspecific((void*)in_RDX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (double)FUN_01653910();
  pvVar3 = _pthread_getspecific((void*)in_RDX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01653920();
  FUN_00e7b500(local_40);
  lVar1 = *this_ptr;
  if (lVar1 != 0) {
    local_98[0] = '\0';
    local_80 = 0;
    local_88 = 0;
    local_90 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        uVar2 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific((void*)in_RDX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_01653910();
        pvVar3 = _pthread_getspecific((void*)in_RDX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_01655350();
        dVar7 = local_70;
        if (local_70 <= local_40) {
          dVar7 = local_40;
        }
        dVar8 = local_78;
        if (dVar6 <= local_78) {
          dVar8 = dVar6;
        }
        if (dVar7 < dVar8) {
          dVar6 = dVar8 - dVar7;
          local_68 = dVar8;
          local_40 = dVar7;
          FUN_00e7b500(dVar7);
          dVar7 = (double)FUN_00e7b600();
          if (NAN(dVar7)) {
            in_RDX = (uint64_t)local_44;
            FUN_015189a0(local_40,local_68,in_CL,local_50);
          }
          else {
            if (local_40 < dVar7) {
              in_RDX = (uint64_t)local_44;
              local_40 = dVar7;
              FUN_015189a0(in_RDX,dVar7,in_CL,local_50,uVar2,0);
              dVar7 = local_40;
            }
            if (dVar7 + dVar6 < local_68) {
              in_RDX = (uint64_t)local_44;
              FUN_015189a0(dVar7 + dVar6,local_48,in_CL,local_50);
            }
          }
        }
        lVar5 = lVar5 + 1;
        local_88 = CONCAT44(local_88._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00277f20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return;
}

