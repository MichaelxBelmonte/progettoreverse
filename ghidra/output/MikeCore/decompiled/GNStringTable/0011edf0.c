// Function: FUN_0011edf0
// Address: 0011edf0
// Size: 1170 bytes
// Class: GNStringTable


/* WARNING: Removing unreachable block (ram,0x0011efb3) */
/* WARNING: Removing unreachable block (ram,0x0011efbf) */
/* WARNING: Removing unreachable block (ram,0x0011eec7) */
/* WARNING: Removing unreachable block (ram,0x0011eed7) */

double FUN_0011edf0(char param_1,double param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  undefined4 in_EDX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  pthread_key_t pVar8;
  double dVar9;
  longlong local_d8;
  char local_d0;
  double local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  double local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  double local_38;
  
  iVar3 = FUN_01d70da0();
  if (iVar3 < 0) {
    local_90 = (double)FUN_004f01b0();
    local_38 = param_2;
  }
  else {
    local_38 = (double)CONCAT44(local_38._4_4_,in_EDX);
    iVar3 = FUN_01d70da0();
    local_68 = *(double *)
                (*(longlong *)(*(longlong *)(unaff_RDI + 0x158) + 0x10) + (longlong)iVar3 * 8);
    FUN_0011eac0();
    local_80 = 0;
    if ((local_d0 == '\0') && (local_d8 != 0)) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = local_d8;
    FUN_00757c60();
    local_78 = local_60;
    local_70 = 0;
    uVar2 = local_38._0_4_;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_70 = '\x01';
    local_90 = (double)FUN_004ef800(&local_78,&local_88,uVar2 & 0xff);
    local_38 = param_2;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if (param_1 != '\0') {
    local_68 = local_38 + local_90;
    lVar1 = *unaff_RSI;
    if (lVar1 != 0) {
      local_38 = local_68;
      if (0 < *(int *)(lVar1 + 0xc)) {
        pVar8 = 0;
        do {
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar5 = local_60;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0011f0f0;
            }
          }
          else if (local_60 != 0) {
LAB_0011f0f0:
            local_58 = '\0';
            local_60 = 0;
            local_50 = lVar5;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar3 = -local_48._4_4_;
                }
                else {
                  iVar3 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar3);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar3 = 0;
                }
                local_48 = CONCAT44(iVar3,(int)local_48);
              }
              lVar5 = (longlong)(int)local_48;
              iVar3 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar3);
              if (*(int *)(local_50 + 0xc) <= iVar3) break;
              lVar7 = *(longlong *)(local_50 + 0x10);
              local_60 = *(longlong *)(lVar7 + 8 + lVar5 * 8);
              pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
              pVar6 = (pthread_key_t)lVar7;
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar9 = (double)FUN_01259520();
              if (local_38 < dVar9) {
                pvVar4 = _pthread_getspecific(pVar6);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar9 = (double)FUN_0125a280();
                if (dVar9 < local_38) {
                  pvVar4 = _pthread_getspecific(pVar6);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar9 = (double)FUN_01259520();
                  if (local_68 <= dVar9) {
                    local_68 = dVar9;
                  }
                }
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
          pVar8 = pVar8 + 1;
        } while ((int)pVar8 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
  }
  return local_90;
}


