// Function: FUN_00f77970
// Address: 00f77970
// Size: 3077 bytes
// Class: Unknown
// String references:
//   "<NULL>"

uint64_t FUN_00f77970(int64_t *param_1,int64_t *param_2,void*param_3,char *param_4)

{
  int iVar1;
  uint64_t uVar2;
  int64_t arg1;
  int64_t local_res8;
  int64_t local_50;
  int64_t *local_48;
  int64_t local_40;
  uint64_t local_38;
  
  local_50 = 0;
  local_40 = local_res8 + 8;
  local_38 = 0;
  local_48 = param_2;
  if (*param_4 == '\0') {
    if (arg1 != 0) goto LAB_00f7854b;
  }
  else if ((arg1 != 0) || (*param_2 != 0)) {
                                            uVar2 = (*((int64_t)&switchD_00f77a18::switchdataD_00f78594 +
                      (int64_t)(int)switchD_00f77a18::switchdataD_00f78594))
                      (0,0,&switchD_00f77a18::switchdataD_00f78594,param_4 + 1,param_4);
    return uVar2;
  }
  *param_3 = 0;
LAB_00f7854b:
  iVar1 = FUN_00f789b0(param_2,&local_50,0);
  if (iVar1 != 0) {
    *param_1 = local_50 + -1;
  }
  return (uint64_t)(iVar1 != 0);
}

