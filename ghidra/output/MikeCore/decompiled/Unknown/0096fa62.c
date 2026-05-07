// Function: FUN_0096fa62
// Address: 0096fa62
// Size: 794 bytes
// Class: Unknown


int FUN_0096fa62(int param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar8;
  undefined8 *local_res8;
  int *local_res20;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  
  if (0x500 < param_2) {
    return 99;
  }
  if (unaff_RDI == 0) {
    return 99;
  }
  if (unaff_RSI == 0) {
    return 99;
  }
  if (param_3 == (int *)0x0) {
    return 99;
  }
  if (local_res8 == (undefined8 *)0x0) {
    return 99;
  }
  if (local_res20 != (int *)0x0) {
    *local_res20 = -1;
  }
  if (param_1 + 1U < 2) {
    lVar3 = FUN_00970cad(0x30,param_2,5,&local_34);
    if (lVar3 == 0) {
      return 0x13a;
    }
    iVar1 = FUN_00970d99(&local_40,local_38,&local_3c,local_res8);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = local_40;
    iVar2 = local_3c;
    if ((param_1 == 0) ||
       ((*param_3 == local_40 && (iVar1 = *param_3, iVar2 = *param_4, *param_4 == local_3c)))) {
      *param_3 = iVar1;
      *param_4 = iVar2;
      if (local_res20 == (int *)0x0) {
        return 0;
      }
      *local_res20 = 0;
      return 0;
    }
  }
  lVar3 = FUN_0096fe8c(0xc,param_2,&local_34,&local_38);
  if (lVar3 == 0) {
    iVar1 = 0x13b;
  }
  else {
    iVar1 = 0;
    lVar3 = FUN_009700c0(&DAT_023c8b96,local_38,1,0);
    if (lVar3 == 0) {
      *local_res8 = 0;
    }
    else {
      FUN_0096e5e3(4,local_38,&local_34,&local_38);
      lVar3 = FUN_0096e5e3(0x30,local_38,&local_34,&local_44);
      if (lVar3 == 0) {
        iVar1 = 0x174;
      }
      else {
        if (local_44 != 0) {
          lVar3 = lVar3 + (ulonglong)local_34;
          iVar1 = 1;
          do {
            lVar4 = FUN_0096e5e3(0x30,local_44,&local_34,&local_38);
            if (lVar4 == 0) break;
            uVar5 = (ulonglong)local_34;
            uVar8 = (ulonglong)local_38;
            local_44 = ((((int)lVar3 - (int)lVar4) + local_44) - local_34) - local_38;
            iVar2 = FUN_00970d99(&local_40,local_38,&local_3c,local_res8);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = local_40;
            iVar6 = local_3c;
            iVar7 = param_1;
            if ((param_1 == iVar1) ||
               (((param_1 == -1 && (iVar2 = *param_3, iVar2 == local_40)) &&
                (iVar6 = *param_4, iVar7 = iVar1, iVar6 == local_3c)))) {
              *param_3 = iVar2;
              *param_4 = iVar6;
              if (local_res20 == (int *)0x0) {
                return 0;
              }
              *local_res20 = iVar7;
              return 0;
            }
            lVar3 = lVar4 + uVar5 + uVar8;
            iVar1 = iVar1 + 1;
          } while (local_44 != 0);
        }
        *local_res8 = 0;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


